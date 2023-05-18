#include <QApplication>
#include "login.h"
#include "MainWindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    login login;
    MainWindow mainWindow;

    QObject::connect(&login, &login::loginSuccessful, [&login, &mainWindow]() {
        login.hide();
        mainWindow.show();
    });

    login.show();

    return app.exec();
}
