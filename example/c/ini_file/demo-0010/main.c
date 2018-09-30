
#include <stdio.h>
#include <stdlib.h>
#include <glib.h>


#define FILE_PATH_CONFIG_INI "config.ini"

#define GROUP_GENERAL "general"
#define KEY_FORCE_USE_UNAR "force_use_unar"


gboolean force_use_unar (void);


gboolean
force_use_unar (void)
{
	GKeyFile *key_file;
	GKeyFileFlags flags;
	GError *error = NULL;


	key_file = g_key_file_new();
	flags = G_KEY_FILE_KEEP_COMMENTS | G_KEY_FILE_KEEP_TRANSLATIONS;


	if (!g_key_file_load_from_file (key_file, FILE_PATH_CONFIG_INI, flags, &error)) {
		return FALSE;
	}

	if (g_key_file_get_boolean(key_file, GROUP_GENERAL, KEY_FORCE_USE_UNAR, NULL) == TRUE) {
		return TRUE;
	}

	return FALSE;
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
