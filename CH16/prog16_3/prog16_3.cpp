#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){

    bool is_odd;
    int num;

    cout << "�п�J�@�Ӿ��:" ;
    cin >> num;

    if(num%2!=0){
        is_odd=true;
    }
    else{
        is_odd=false;
    }


    if(is_odd){
        cout << num <<"�O�_��" << endl;
    }
    else{
        cout << num <<"�O����" << endl;
    }


    system("pause");
    return 0;
}