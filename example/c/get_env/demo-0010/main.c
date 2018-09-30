
#include <stdio.h>
#include <stdlib.h>
#include <glib.h>


gboolean force_use_unar (void);


gboolean
force_use_unar (void)
{
	char* force_use_unar;
	force_use_unar = getenv("FORCE_USE_UNAR");
	if (force_use_unar != NULL) {
		return TRUE;
	} else {
		return FALSE;
	}
}


int
main (int argc, char** argv)
{

	if (force_use_unar()) {
		printf("force_use_unar: yes\n");
	} else {
		printf("force_use_unar: no\n");
	}
	return 0;
}
