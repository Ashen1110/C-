#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;

const int N = 10;

char ch;
int gender, num;

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
    int ch_num, ans;
    finput>>ch>>gender>>num;
    switch(ch){
        case 'A':
            ch_num = 10;
            break;
        case 'B':
            ch_num = 11;
            break;
        case 'C':
            ch_num = 12;
            break;
        case 'D':
            ch_num = 13;
            break;
        case 'E':
            ch_num = 14;
            break;
        case 'F':
            ch_num = 15;
            break;
        case 'G':
            ch_num = 16;
            break;
        case 'H':
            ch_num = 17;
            break;
        case 'I':
            ch_num = 34;
            break;
        case 'J':
            ch_num = 18;
            break;
        case 'K':
            ch_num = 19;
            break;
        case 'L':
            ch_num = 20;
            break;
        case 'M':
            ch_num = 21;
            break;
        case 'N':
            ch_num = 22;
            break;
        case 'O':
            ch_num = 35;
            break;
        case 'P':
            ch_num = 23;
            break;
        case 'Q':
            ch_num = 24;
            break;
        case 'R':
            ch_num = 25;
            break;
        case 'S':
            ch_num = 26;
            break;
        case 'T':
            ch_num = 27;
            break;
        case 'U':
            ch_num = 28;
            break;
        case 'V':
            ch_num = 29;
            break;
        case 'W':
            ch_num = 30;
            break;
        case 'X':
            ch_num = 31;
            break;
        case 'Y':
            ch_num = 32;
            break;
        case 'Z':
            ch_num = 33;
            break;
    }
    if(gender == 1){
        ans = ch_num + num;
        if(ans >= 10000) ans %= 10000;
        foutput<<ans<<endl;
    }
    else{
        ans = (num + ch_num)*2;
        if(ans>=10000) ans %= 10000;
        foutput<<ans<<endl;
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
