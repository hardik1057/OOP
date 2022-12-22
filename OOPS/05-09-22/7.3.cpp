// wap using appropriate constructors and destructors to represent bank account with following specification 
// private members- name of depositor, type of account, account number, balance amount
//public member function to- assign intital values, deposit an amount, display name and balance, withdraw a amount after checking balance
#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
    string name, acc_type;
    int bal, acc_no;
public:
    Account(string n, string t, int b, int no)
    {
        this->name = n;
        this->acc_type = t;
        this->bal = b;
        this->acc_no = no;
    }
    void display()
    {
        cout << "Name of the account holder- " << this->name << "\nBalance present in the account- " << this->bal << endl;
    }
    void withdraw(int x)
    {
        if (this->bal - x >= 0)
        {
            this->bal -= x;
        }
        else
        {
            cout << "low account balance";
        }
        this->display();
    }
    void deposit(int x)
    {
        this->bal += x;
        this->display();
    }
    ~Account()
    {
        cout << "Destructor.";
    }
};
int main()
{
    string name, type;
    int bal, acc_no;
    cout << "Enter the name account holder- ";
    cin >> name;
    cout << "Enter type of account- ";
    fflush(stdin);
    cin >> type;
    cout << "Enter balance present in account- ";
    cin >> bal;
    cout << "Enter account number- ";
    cin >> acc_no;
    Account a1(name, type, bal, acc_no);
    int w;
    cout << "Enter amount to withdraw- ";
    cin >> w;
    a1.withdraw(w);
    cout << "Enter amount to deposit- ";
    cin >> w;
    a1.deposit(w);
    return 0;
}