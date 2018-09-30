
#include <stdio.h>
#include <stdlib.h>
#include <glib.h>


gboolean force_use_unar (void);


gboolean
force_use_unar (void)
{
	FILE* fp = fopen("/tmp/force-use-unar", "r");
	if (fp) {
		// file exists, then force use unar.
		fclose(fp);
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
	return 0;
}
