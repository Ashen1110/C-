#include<fstream>
#include<iostream>
#include<sstream>
using namespace std;

const int N = 10;
const int BUFSIZE = 7000000;
void open_file(ifstream &finput,int t_case){
    string dir_path = "../data/secret/"; 
    string input_file_name = to_string(t_case)+".in"; 
    string input_path = dir_path + input_file_name; 
    finput.open(input_path , ios::in); 
    if(!finput){
        cerr << "cannot open input file " << input_path << endl;
        exit(1);
    }
}
void check(ifstream &finput, int t_case){

    int a,b;
    string buf; 
    stringstream buf_s; 
    string check; 
    cerr << "in test " << t_case << endl;

    if(!getline(finput,buf)){
        cerr << "input error, missiing first line." << endl;
        exit(1);
    }
    buf_s << buf;

    if(!(buf_s>>a>>b )){
        cerr << "input error, missiing variable sec" << endl;
        exit(1);
    }
    if((buf_s >> check)){
        cerr << "more input in first line." << endl;
        exit(1);
    }

    if(a<-1000000000 || a>2147483647){
        cerr << "input error, a is out of range." << endl;
        exit(1);
    }
    if(b<-1000000000 || b>2147483647){
        cerr << "input error, b is out of range." << endl;
        exit(1);
    }
    finput.ignore();
    buf_s.clear();

    if((buf_s >> check) || (finput >> check)){
        cerr << "more input." << endl;
        exit(1);
    }
    cerr <<  "ok"  << endl;
    
}
void close_file(ifstream &finput,int t_case){
    finput.close();
}
int main(){
    for(int i=1;i<=N;i++){
        ifstream finput;
        open_file(finput,i); 
        check(finput,i); 
        close_file(finput,i); 
    }
}
