#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qDebug() << "ok";

	MainWindow w;
	w.show();

	return QApplication::exec();
}
