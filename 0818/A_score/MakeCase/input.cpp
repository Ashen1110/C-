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
        fout << "2"<<endl;
        fout<<"80 85 90 95"<<endl;
        fout<<"60 70 89 73"<<endl;
    }
    else {
        int n = unif(generator)%1000;
        fout<<n<<endl;
        for(int i=0; i<n; i++){
            int test = unif(generator)%101;
            int classes = unif(generator)%101;
            int mid = unif(generator)%101;
            int fin = unif(generator)%101;
            fout<<test<<" "<<classes<<" "<<mid<<" "<<fin<<endl;
        }
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
