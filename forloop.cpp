#include<bits/stdc++.h>
using namespace std;
int main(){
    // for(int i = 1; i<=10 ; i++){
    //     cout << i << endl;
    // }
    int num;
    cout << "ENTER A NUMBER : ";
    cin >> num;
    for(int i = 1; i <= 10 ; i++){
        int table = num * i;
        cout << num << " " << "X "<< i << " = " << table << endl;
    }
    return 0;
}