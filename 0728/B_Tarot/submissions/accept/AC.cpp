#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int m,d,s;
    cin>>m>>d;
    s = (m*2+d)%3;
    if(s==0) cout<<"Normal"<<endl;
    else if(s==1) cout<<"Nice"<<endl;
    else cout<<"Great"<<endl;
    return 0;
}