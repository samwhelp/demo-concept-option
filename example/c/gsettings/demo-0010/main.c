
#include <stdio.h>
#include <stdlib.h>
#include <glib.h>
#include <gio/gio.h>


#define FILE_ROLLER_SCHEMA                "org.gnome.FileRoller"
#define FILE_ROLLER_SCHEMA_GENERAL        FILE_ROLLER_SCHEMA ".General"

#define PREF_GENERAL_FORCE_USE_UNAR       "force-use-unar"


gboolean force_use_unar (void);


gboolean
force_use_unar (void)
{
	/*
		[preferences.h]
		FILE_ROLLER_SCHEMA_GENERAL = "org.gnome.FileRoller.General"
	 	PREF_GENERAL_FORCE_USE_UNAR = "force-use-unar"
	*/
	GSettings *settings;
	settings = g_settings_new(FILE_ROLLER_SCHEMA_GENERAL);

	if (g_settings_get_boolean(settings, PREF_GENERAL_FORCE_USE_UNAR)) {
		g_object_unref(settings);
		return TRUE;
	} else {
		g_object_unref(settings);
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
