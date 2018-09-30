
#include <LXQt/SingleApplication>
#include <LXQt/Settings>

#include <iostream>




bool force_use_unar (void);


bool
force_use_unar (void)
{
	// ~/.config/lxqt/lxqt-archiver.conf
	LXQt::Settings *settings = new LXQt::Settings("lxqt-archiver");

	bool force_use_unar = settings->value("force_use_unar").toBool();

	//std::cout << force_use_unar;

	return force_use_unar;

}


int main (int argc, char **argv)
{

	LXQt::SingleApplication app(argc, argv);



	if (force_use_unar() == true) {
		std::cout << "force_use_unar: yes\n";
	} else {
		std::cout << "force_use_unar: no\n";
	}

	return 0;

	//return app.exec();
}
