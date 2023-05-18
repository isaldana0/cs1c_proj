// LoginWindow.h

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>
#include "ui_LoginWindow.h"

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);

signals:
    void loginSuccessful();

private slots:
    void login();

private:
    Ui::LoginWindow ui; // Use the generated UI class as a member variable
};
