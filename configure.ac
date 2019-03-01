AC_INIT([welcomeapp], [1.0])

AC_ARG_ENABLE([hello],
	AS_HELP_STRING([--enable-hello], [Enable hello message])
)
AS_IF([test "x$enable_hello" = "xyes"], [
       AC_DEFINE(WANT_HELLO, [1], [we want hello])]
)

AC_ARG_ENABLE([goodbye],
	AS_HELP_STRING([--enable-goodbye], [Enable goodbye message])
)
AS_IF([test "x$enable_goodbye" = "xyes"], [
	AC_DEFINE(WANT_GOODBYE, [1], [we want goodbye])]
)

AS_IF([test "x$enable_hello" = "xyes" -a "x$enable_goodbye" = "xyes"], [
	AC_MSG_ERROR([hello and goodbye can't both be enabled])]
)

AC_ARG_ENABLE([gtk],
	AS_HELP_STRING([--enable-gtk], [Enable GTK GUI])
)

AS_IF([test "x$enable_gtk" = "xyes"],
	[
	PKG_CHECK_MODULES([GTK3], [gtk+-3.0])
	AM_CONDITIONAL(WITH_GTK3, true)
	AC_DEFINE(WITH_GTK, [1], [we want GTK GUI])
	], [
	AM_CONDITIONAL(WITH_GTK3, false)
	]
)

AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AM_MAINTAINER_MODE

AC_CONFIG_HEADERS([config.h])

AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_CC_STDC
AC_PROG_CPP
AC_PROG_INSTALL

AH_TOP([
#ifndef _CONFIG_H_
#define _CONFIG_H_
])

AH_BOTTOM([
#endif /* _CONFIG_H_ */
])

AC_CONFIG_FILES([Makefile
	src/Makefile])

AC_OUTPUT

