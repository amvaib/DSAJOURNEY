#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cout << "ENTER A NUMBER : ";
    cin >> n;

    for(int i = 0; i<n; i++){

        //SPACES
        for(int j = 1; j<=(n-1)-i; j++){
            cout << " ";
        }
        
        //ABCD
        int breakpoint = (2*i+1)/2;
        char ch = 'A';
        for(int j = 1 ; j<=2*i+1; j++){
            cout << ch;

            if(j<=breakpoint)
            ch++;
            else
            ch--;

        }
        
        
        
        
        
        
        //SPACES
        for(int j = 1; j<=(n-1)-i; j++){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}