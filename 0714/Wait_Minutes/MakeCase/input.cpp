#include<fstream>
#include<iostream>
#include<random>
#include<ctime>
using namespace std;

const int N = 15; //測資筆數

void open_input(ofstream &fout,int t_case){
    string dir_path = "../data/secret/";  //資料夾相對路徑
    string file_name = to_string(t_case)+".in"; //檔案名稱
    string real_path = dir_path + file_name; //開啟檔案位置
    fout.open(real_path , ios::out | ios::trunc); //覆寫
    if(!fout){
        cerr << "cannot open file " << real_path << endl;
        exit(1);
    }
}
void make_input(ofstream &fout, int t_case){
    /* 產生input資料 */
    
    /* 亂數引擎 */
    random_device rd;
    default_random_engine generator = default_random_engine(rd());
    uniform_int_distribution<int> unif(0,2147483647);
    
    //範測放前面
    if(t_case==1){
        fout << "734"<<endl;
    }
    else if(t_case==2){
        fout << "3751"<<endl;
    }
    //放幾個比較能用肉眼看出答案的Random測資
    else if(t_case<=5){
        int sec = unif(generator)%3600+1;
        fout << sec << endl;
    }
    // 放小的極端測資
    else if(t_case==6){
        int sec = 0;
        fout << sec << endl;
    }
    // 放大的極端測資
    else if(t_case==7){
        int sec = 1000000000;
        fout << sec << endl;
    }
    // 全隨機亂數
    else{
        int n=unif(generator)%1000000+1;
        fout << n << endl;
    }
}
void close_input(ofstream &fout,int t_case){
    fout.close();
}
int main(){
    for(int i=1;i<=N;i++){
        ofstream fout;
        open_input(fout,i); //要「寫入」輸入檔
        make_input(fout,i); //產生input
        close_input(fout,i); //關閉檔案
    }
}
