#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "GenerateData.h"
int main(int argc, char *argv[])
{

    GenerateUserData;
	std::vector <accountData> collectionUserData = GenerateUserData();

	for (int count = 0; count <= 10; ++count) {
		std::cout << collectionUserData.at(count).userFirstName << "   "
			<< collectionUserData.at(count).userLastName
			<< "    "
			<< collectionUserData.at(count).gender
			<< "    "
			<< collectionUserData.at(count).age
			<< "    "
			<< collectionUserData.at(count).occupation
			<< "    "
			<< collectionUserData.at(count).phoneNumber
			<< "    "
			<< collectionUserData.at(count).accountBalence
			<< "    "
			<< collectionUserData.at(count).accountPassCode

			<< std::endl;
	}

#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
