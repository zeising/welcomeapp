#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#include "config.h"
#include "consoleapp.h"
#include "gtkapp.h"

static void
usage(void)
{
	fprintf(stderr, "%s\n",
	    "usage: welcomeapp [-c | -g]");
	exit(1);
}

int
main(int argc, char **argv)
{
	int ch, cflag, gflag;
	cflag = gflag = 0;
	
	while ((ch = getopt(argc, argv, "cgh")) != -1)
		switch (ch) {
		case 'c':
			cflag = 1;
			break;
		case 'g':
			gflag = 1;
			break;
		case 'h':
		case '?':
		default:
			usage();
			break;
		}

	argc -= optind;
	argv += optind;

	if (cflag == 1 && gflag == 1)
		usage();

	if (cflag == 1) {
		consoleapp(argc, argv);
		return 0;
	} else if (gflag == 1) {
#ifdef WITH_GTK
	gtkapp(argc, argv);
	return 0;
#else
	fprintf(stderr, "No graphical interface\n");
	return 1;
#endif
	}

	return 0;
}


