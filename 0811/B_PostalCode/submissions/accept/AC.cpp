#include <iostream>

using namespace std;

int main(){
    int code;
    cin>>code;
    switch(code){
        case 400:
            cout<<"Central"<<endl;
            break;
        case 401:
            cout<<"East"<<endl;
            break;
        case 402:
            cout<<"South"<<endl;
            break;
        case 403:
            cout<<"West"<<endl;
            break;
        case 404:
            cout<<"North"<<endl;
            break;
        case 406:
            cout<<"Beitun"<<endl;
            break;
        case 407:
            cout<<"Xitun"<<endl;
            break;
        case 408:
            cout<<"Nantun"<<endl;
            break;
        default:
            cout<<"Welcome to Taichung"<<endl;
            break;
    }
    return 0;
}