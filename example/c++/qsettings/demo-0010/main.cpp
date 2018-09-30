
#include <QtCore>
#include <iostream>




bool force_use_unar (void);


bool
force_use_unar (void)
{
	/*
	// [~/.config/demo/config.ini]
	QSettings settings(
		QSettings::IniFormat,
		QSettings::UserScope,
		"demo",
		"config"
	);
	*/

	QSettings settings(
		"config.ini",
		QSettings::IniFormat
	);


	//settings.setValue("force_use_unar", true);

	bool force_use_unar = settings.value("force_use_unar").toBool();

	//std::cout << force_use_unar;

	return force_use_unar;

}


int main (int argc, char **argv)
{

	//QApplication app(argc, argv);

	if (force_use_unar() == true) {
		std::cout << "force_use_unar: yes\n";
	} else {
		std::cout << "force_use_unar: no\n";
	}

	return 0;

	//return app.exec();
}
