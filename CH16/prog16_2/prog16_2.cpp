#include<iostream>
#include<cstdlib>

using namespace std;

int main(void){
    int x;
    float y;
    cout << "請輸入一個整數:" ;
    cin >> x;
    cout << "請輸入一個浮點數:";
    cin >> y;
    cout << x << "+" << y << "=" << x+y << endl;

    system("pause");
    return 0;
}