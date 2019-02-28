#include <stdio.h>

#include "config.h"
#include "consoleapp.h"
#include "msg.h"

int
consoleapp(int argc, char **argv)
{
	printf("%s", MSG_GREET);
	printf("%s", MSG_EXIT);

	return 0;
}
