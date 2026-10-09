 #include <iostream>
#include <vector>
using namespace std;
int main (){
    vector<double>salary ={75000,12000,30000,640000,55000,45000,80000,90000,100000,110000};
    int count=0;
    for(auto value: salary){
        cout <<value<<endl;
    
            if(value>=50000){
                count++;
            }
    }
    cout <<"number of employees having salary greater than 50000 is:"<<count<<endl;
    
double average=0;
    for(int i=0;i<salary.size();i++){
        average+=salary[i];
    }
    cout<<"average salary is:"<<average/salary.size()<<endl;
  double total=0;
    for(int i=0;i<salary.size();i++){
        total+=salary[i];
    }
    cout<<"total salary is:"<<total<<endl;
}