#include "LoginWindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this); // Setup the UI defined in the .ui file

    // Connect the loginButton clicked signal to the login slot
    connect(ui.loginButton, &QPushButton::clicked, this, &LoginWindow::login);

    // Other GUI setup
}

void LoginWindow::login()
{
    QString username = ui.usernameLineEdit->text();
    QString password = ui.passwordLineEdit->text();

    if (username == "admin" && password == "admin1")
    {
        qDebug() << "Admin login successful";
        emit loginSuccessful(); // Emit loginSuccessful signal upon successful login
    }
    else if (username == "manager" && password == "manager1")
    {
        qDebug() << "Manager login successful";
        emit loginSuccessful(); // Emit loginSuccessful signal upon successful login
    }
    else
    {
        qDebug() << "Invalid username or password";
        // Display error message or perform other actions for failed login
    }
}
