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
	// Unix�� ��� ���Ϸ�
	// Windows�� ���� �������ͷ� ����
	settings.setValue("test", 123);

	// Read the setting back
	qInfo() << settings.value("test").toString();
	qInfo() << settings.value("test").toInt();

	return a.exec();
}
