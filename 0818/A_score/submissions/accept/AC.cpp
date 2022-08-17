#include <iostream>

using namespace std;

int main(){
    int students;
    cin>>students;
    int count=0;
    int test, classes, mid, fin;
    float score = 0.0;
    while(count<students){
        cin>>test>>classes>>mid>>fin;
        score = test*0.2 + classes*0.2 + mid*0.3 + fin*0.3;
        cout<<score<<endl;
        count++;
    }
    return 0;
}