#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qsettings.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QCoreApplication::setOrganizationName("voidrealms");
	QCoreApplication::setOrganizationDomain("VoidRealms.com");
	QCoreApplication::setApplicationName("Tester");

	QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());

	// Save the setting
	// Unix의 경우 파일로
	// Windows에 경의 레지스터로 저장
	settings.setValue("test", 123);

	// Read the setting back
	qInfo() << settings.value("test").toString();
	qInfo() << settings.value("test").toInt();

	return a.exec();
}
