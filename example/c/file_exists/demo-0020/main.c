
#include <stdio.h>
#include <stdlib.h>
#include <glib.h>


#define FILE_PATH_FORCE_USE_UNAR "/tmp/force-use-unar"


gboolean force_use_unar (void);


gboolean
force_use_unar (void)
{
	if (g_file_test(FILE_PATH_FORCE_USE_UNAR, G_FILE_TEST_EXISTS) == TRUE) {
		// file exists, then force use unar.
		return TRUE;
	} else {
		// file doesn't exist
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

	return EXIT_SUCCESS;
}
