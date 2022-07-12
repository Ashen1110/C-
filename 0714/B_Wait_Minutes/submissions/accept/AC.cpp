#include<iostream>
using namespace std;

int main(){
    int second;
    cin>>second;
    int hr = second/3600;
    second = second % 3600;
    int min = second/60;
    int sec =  second % 60;
    cout<<hr<<" hr "<<min<<" min "<<sec<<" sec"<<endl;
    return 0;
}
