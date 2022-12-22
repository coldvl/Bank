#include <iostream>
#include "BankAccount.h"
using namespace std;

void BankAccount::createAccount()
{
    cout << "Enter Customer ID:" << endl;
    cin >> customer_id;
    cout << "Enter owner name:" << endl;
    cin >> owner_name;
    cout << "Enter balance:" << endl;
    cin >> balance;
    
    
}

void BankAccount::topUpBalance()
{
    float top_up_amount;
    cout << "Enter top up amount:" << endl;
    cin >> top_up_amount;
    balance = balance + top_up_amount;
    cout << "Your balance: " << balance << endl;
}

void BankAccount::withdrawCash()
{
    float withdraw_amount;
    cout << "Enter withdraw amount:" << endl;
    cin >> withdraw_amount;
    balance = balance - withdraw_amount;
    cout << "Your balance: " << balance << endl;
}

void BankAccount::showAccount()
{
    cout << "Customer ID: " << customer_id << endl;
    cout << "Owner name: " << owner_name << endl;
    cout << "Balance: " << balance << endl;
}
