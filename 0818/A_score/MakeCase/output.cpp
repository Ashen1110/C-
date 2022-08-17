#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 10;

int students;
int test, classes, mid, finals;

void open_file(ifstream &finput,ofstream &foutput,int t_case){
    string dir_path = "../data/secret/"; 

    string input_file_name = to_string(t_case)+".in";
    string output_file_name = to_string(t_case)+".ans";
    
    string input_path = dir_path + input_file_name; 
    string output_path = dir_path + output_file_name;
    
    finput.open(input_path , ios::in); 
    foutput.open(output_path , ios::out | ios::trunc);
    
    if(!finput){
        cerr << "cannot open input file " << input_path << endl;
        exit(1);
    }
    if(!foutput){
        cerr << "cannot open output file " << output_path << endl;
        exit(1);
    }
}
void solve(ifstream &finput,ofstream &foutput, int t_case){
    finput>>students;
    int count=0;
    float score = 0.0;
    while(count<students){
        finput>>test>>classes>>mid>>finals;
        score = test*0.2 + classes*0.2 + mid*0.3 + finals*0.3;
        foutput<<score<<endl;
        count++;
    }
}
void close_file(ifstream &finput,ofstream &foutput,int t_case){
    finput.close();
    foutput.close();
}
int main(){
    for(int i=1;i<=N;i++){
        ifstream finput;
        ofstream foutput;
        open_file(finput,foutput,i); 
        solve(finput,foutput,i); 
        close_file(finput,foutput,i); 
    }
}
