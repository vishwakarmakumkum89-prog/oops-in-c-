#include<bits/stdc++.h>
using namespace std;
class product{
int productId;
string name;
float price;
public:
product(int Id, string n,float p){
productId=Id;
name=n;
price =p;
}
product ComparePrice(const product &p){
    if(price>p.price){
        return *this;
    }
    else return p;
}

void display(){
    cout<<"product id"<<productId<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"price"<<price<<endl;
}
};
int main(){
    product P1(100,"EARPHONE",19087);
     product P2(105,"SMARTWATCH",34709);
     product result =P1.ComparePrice(P2);
     cout<<"product which has higher price"<<endl;
     result.display();
}



















