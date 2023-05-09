#ifndef MEMBERS
#define MEMBERS
#include <iostream>
#include <fstream>

using namespace std;
// thinking two classes. One called Members and a child class called Executive. Which will inherit from the parent class 'Members'
class Members {
    public:
    // Constructor - takes 5 arguments. Initilize to default values
    Members(string n = " ", int num = 000000, string mtype =" ", string exp, double t = 0.0, double rb)
        : name(n),
            membershipNumber(num),
            membershipType(mtype),
            expirationDate(exp),
            amountSpent(t), 
            rebate(rb) {};

    ~Members();
    // insert methods here

    // prints out
    friend ostream& operator<<(ostream& os, const Members& member);

    private:
    string name; //member name
    int membershipNumber; // membership number
    string membershipType; // membership type (regular or executive)
    string expirationDate; // expiration date
    double amountSpent; // total amount (running total)
    double rebate; // Rebate of 2% of the total amount 
};
#endif
/* MEMBERS*/

/*
Other classes??
Sales
Inventory
Store Manager && Admin 
Bulk club //main class to take in files?
*/