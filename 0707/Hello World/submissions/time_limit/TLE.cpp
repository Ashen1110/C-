#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    char str[80];
    long long int a=1234567891234564;
    while(a>=0){
    for(int i=0; i<1000000000; i++){
            a+=5012345;
        for(int j=1; j<1000000000; j++){
            a%=123456;
            for(int k = 2; k<1000000000; k++){
                    a*=a;
            }
            a--;
        }
    }
    sprintf(str, "a = %d", a);
    puts(str);
    }
    cout<<"Hello World!"<<endl;
    return 0;
}