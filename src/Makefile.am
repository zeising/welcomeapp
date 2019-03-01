AM_CFLAGS = -Wall -Wextra

bin_PROGRAMS = welcomeapp
welcomeapp_SOURCES = main.c msg.h consoleapp.h consoleapp.c

welcomeapp_CFLAGS =
welcomeapp_LDADD =

if WITH_GTK3
welcomeapp_SOURCES += gtkapp.h gtkapp.c
welcomeapp_CFLAGS += $(GTK3_CFLAGS)
welcomeapp_LDADD += $(GTK3_LIBS)
endif

welcomeapp_DEPENDENCIES = ../config.h
