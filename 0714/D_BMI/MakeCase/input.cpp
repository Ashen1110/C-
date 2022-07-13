#include<fstream>
#include<iostream>
#include<random>
#include<ctime>
using namespace std;

const int N = 15;

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
        fout << "72 178"<<endl;
    }
   
    else if(t_case<=5){
        int w = unif(generator)%100+1;
        int h = unif(generator)%300+1;
        fout << w <<' '<< h << endl;
    }
    
    else if(t_case==6){
        int w = 1;
        int h = 1;
        fout << w <<' '<< h << endl;
    }
    else if(t_case==7){
        int w = 1000;
        int h = 1000;
        fout << w <<' '<< h << endl;
    }

    else{
        int w = unif(generator)%1000+1;
        int h = unif(generator)%1000+1;
        fout << w <<' '<< h << endl;
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
