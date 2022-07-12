#include<iostream>
#include <iomanip>
using namespace std;

int main(){
    float a,b,c,x;
    cin>>a>>b>>c>>x;
    float ans = a*x*x + b*x + c;
    cout<<fixed<<setprecision(2)<<ans<<endl;
    return 0;
}
