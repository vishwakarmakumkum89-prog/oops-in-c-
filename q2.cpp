#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    int accountnumber;
    string customerName;
    float balance;
    public:
    BankAccount(int acc,string name,float bal){
accountnumber= acc;
customerName=name;
balance=bal;
    }
    
    friend void comparebalance(BankAccount a1,BankAccount a2);
    };
    void comparebalance(  BankAccount a1,BankAccount a2){
        if(a1.balance>a2.balance){
            cout<<"Higher Balance:"<<a1.customerName<<a1.accountnumber<<endl;

        }
        else 
        cout<<"Lower balance :"<<a2.customerName<<a2.accountnumber<<endl;
    }
int main(){
    BankAccount b1(1988,"VIKAS",90000);
    BankAccount b2(2398,"kumkum",24532);
    comparebalance(b1,b2);


return 0;
}