#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cout << "ENTER A NUMBER : ";
    cin >> n;
    

    for(int i = 1; i<=n; i++){
        for(int j = 1 ; j<=n-i; j++){
            cout << "*";
            
        }

        for(int j = 1; j<= 2*i-2; j++ ){
            cout << " ";
        }

        for(int j = 1 ; j<=n-i; j++){
            cout << "*";
            
        }
        cout << endl;
    }
    int inn = 2*n-2;

    for(int i = 1; i<=n; i++){
        for(int j =1 ; j<=i; j++){
            cout << "*";
        }

        for(int j= 0; j <inn; j++ ){
            cout << " ";
        }
        
        for(int j =1 ; j<=i; j++){
            cout << "*";
        
        }
        inn-=2;
        cout << endl;
    }
    

}
           