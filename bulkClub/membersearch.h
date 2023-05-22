#ifndef MEMBERSEARCH_H
#define MEMBERSEARCH_H

#include <QWidget>

namespace Ui {
class memberSearch;
}

class memberSearch : public QWidget
{
    Q_OBJECT

public:
    explicit memberSearch(QWidget *parent = nullptr);
    ~memberSearch();

private slots:
    void on_pushButton_memberSearchButton_clicked();

private:
    Ui::memberSearch *ui;
};

#endif // MEMBERSEARCH_H
