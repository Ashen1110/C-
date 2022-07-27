#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int year;
    cin>>year;
    if(year%4 !=0) cout<<"Normal year"<<endl;
    else if(year%4==0 && year%100!=0) cout<<"Leap year"<<endl;
    else if(year%100==0 && year%400!=0) cout<<"Normal year"<<endl;
    else if(year%400==0) cout<<"Leap year"<<endl;
    return 0;
}