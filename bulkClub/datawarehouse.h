#ifndef DATAWAREHOUSE_H
#define DATAWAREHOUSE_H

#include "member.h"
#include "transaction.h"
#include "item.h"

#include <vector>
#include <algorithm>

#include <QFile>
#include <QResource>
#include <QTextStream>
#include <QRegularExpression>
#include <QDir>
#include <QDirIterator>

class DataWarehouse
{
private:
    vector<Member> Members;
    vector<Transaction*> Transactions;
    vector<Item> Inventory;

    void LoadMembers();
    void LoadTransactionsAndInventory();
    bool IsExecutiveId(int customerId);

public:
    DataWarehouse();

    void sortMembers();
    void sortMembersByName();
    void sortTransactions();
    void sortInventory();

    bool itemExist(QString itemName);
    QString GetSalesReportForDate(QDate date, int reportType);
    QString GetPurchasesAllMembers();
    QString GetItemQuantities();
    QString GetItemQuantity(QString itemName);
    QString GetExecutiveRebates();
    QString GetMembershipExpirations(int month, int year);
    void AddMember(Member m);
    void DeleteMember(int memberId);
    QString MakePurchase(Transaction* t);
    void AddItem(Item i);
    bool DeleteItem(QString itemName);
    bool ChangePrice(QString itemName, double price);
    int GetMemberIdByName(QString memberName);
    QString GetMemberPurchases(int memberId);
    bool ShouldBeExecutive (int memberId);
    double GetMemberRebate(int memberId);
    QString GetConvertToExecutiveRecommendations();
    QString GetConvertToRegularRecommendations();
    QString GetMemberNameById(int memberId); // member search by id
    QString GetItemRevenue(QString itemName); // item search revenue
};
#endif // DATAWAREHOUSE_H
