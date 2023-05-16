#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QDebug>

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);

private slots:
    void login();

private:
    QLineEdit* usernameLineEdit;
    QLineEdit* passwordLineEdit;
    QPushButton* loginButton;

    // Other GUI elements and widgets
};

#endif // LOGINWINDOW_H
