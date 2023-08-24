#include<iostream>
#include<string>
using namespace std;

class bank_acc
{
private:
    string name;
    int acc_num;
    string type;
    int bal=0;
public:
    void customerDetails(string cus_name, int acc_number)
    {
        name=cus_name;
        acc_num=acc_number;
    }
    void accountType(string acc_type)
    {
        type=acc_type;
    }
    void balance()
    {
        cout<<bal<<endl;
    }
    void deposit(int amount)
    {
        bal+=amount;
        cout<<bal<<endl;
    }
    void withdraw(int amount)
    {
        bal-=amount;
        cout<<bal<<endl;
    }
    void display()
    {
        cout<<name<<endl<<acc_num<<endl<<type<<endl<<bal<<endl;
    }
};

int main()
{
    bank_acc user;
    user.customerDetails("Tbr", 210041106);
    user.accountType("Savings");
    user.balance();
    user.deposit(10000);
    user.withdraw(5000);
    user.display();
}
