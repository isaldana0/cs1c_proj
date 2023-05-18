#include <QApplication>
#include "login.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Login loginWindow;
    MainWindow mainWindow;

    QObject::connect(&loginWindow, &Login::loginSuccessful, [&loginWindow, &mainWindow]() {
        loginWindow.hide();
        mainWindow.show();
    });

    loginWindow.show();

    return app.exec();
}
