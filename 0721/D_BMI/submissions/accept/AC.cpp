#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    int w,h;
    cin>>w>>h;
    float h_meters = h/100.0;
    float bmi = (w+0.0)/(h_meters*h_meters);
    cout<<fixed<<setprecision(1)<<bmi<<endl;
}
