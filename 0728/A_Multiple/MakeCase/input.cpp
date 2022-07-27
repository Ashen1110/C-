#include<fstream>
#include<iostream>
#include<random>
#include<ctime>
using namespace std;

const int N = 10;

void open_input(ofstream &fout,int t_case){
    string dir_path = "../data/secret/";
    string file_name = to_string(t_case)+".in";
    string real_path = dir_path + file_name;
    fout.open(real_path , ios::out | ios::trunc);
    if(!fout){
        cerr << "cannot open file " << real_path << endl;
        exit(1);
    }
}
void make_input(ofstream &fout, int t_case){
    
    random_device rd;
    default_random_engine generator = default_random_engine(rd());
    uniform_int_distribution<int> unif(0,2147483647);
    
    if(t_case==1){
        fout << "10 2"<<endl;
    }
    else if(t_case==2){
        fout << "2 10"<<endl;
    }

    else if(t_case<=5){
        int a = unif(generator)%100000+1;
        int b = unif(generator)%100000+1;
        fout << a <<' '<<b<< endl;
    }
   
    else if(t_case==6){
        int a = 1000000;
        int b = 1;
        fout << a <<' '<<b<< endl;
    }
    
    else{
        int a =unif(generator)%100000000+1;
        int b =unif(generator)%100000000+1;
        fout << a <<' '<<b<< endl;
    }
}
void close_input(ofstream &fout,int t_case){
    fout.close();
}
int main(){
    for(int i=1;i<=N;i++){
        ofstream fout;
        open_input(fout,i); 
        make_input(fout,i); 
        close_input(fout,i); 
    }
}
