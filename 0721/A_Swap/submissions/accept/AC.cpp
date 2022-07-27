#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin>>num1>>num2;
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    cout<<num1<<" "<<num2<<endl;
    return 0;
}
