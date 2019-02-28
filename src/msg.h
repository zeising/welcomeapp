#ifndef _MSG_H_
#define _MSG_H_

#include "config.h"

#if defined(WANT_HELLO)
#define MSG_GREET "Hello world!\n"
#elif defined(WANT_GOODBYE)
#define MSG_GREET "Goodbye world!\n"
#else
#define MSG_GREET "\n"
#endif

#define MSG_EXIT "Thank you for using welcomeapp\n"

#endif /* _MSG_H_ */
