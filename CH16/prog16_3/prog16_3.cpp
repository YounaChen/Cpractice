#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){

    bool is_odd;
    int num;

    cout << "請輸入一個整數:" ;
    cin >> num;

    if(num%2!=0){
        is_odd=true;
    }
    else{
        is_odd=false;
    }


    if(is_odd){
        cout << num <<"是奇數" << endl;
    }
    else{
        cout << num <<"是偶數" << endl;
    }


    system("pause");
    return 0;
}