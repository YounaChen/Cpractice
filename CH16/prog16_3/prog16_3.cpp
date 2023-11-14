#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){

    bool is_odd;
    int num;

    cout << "叫块俱计:" ;
    cin >> num;

    if(num%2!=0){
        is_odd=true;
    }
    else{
        is_odd=false;
    }


    if(is_odd){
        cout << num <<"琌计" << endl;
    }
    else{
        cout << num <<"琌案计" << endl;
    }


    system("pause");
    return 0;
}