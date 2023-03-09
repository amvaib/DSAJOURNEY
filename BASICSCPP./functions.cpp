#include<bits/stdc++.h>
using namespace std;

void Sumf(int a , int b ){
    int sum = a + b;
    cout << "THE SUM OF TWO NUMBERS IS : " << sum;
}

void Subt(int a , int b){
    int sub = a-b;
    cout << "THE SUBTRACTION OF THE NUMBERS IS : " << sub;
}

void Multiply(int a , int b){
    int multi = a*b;
    cout << "THE SUBTRACTION OF THE NUMBERS IS : " << multi;
}

void Division(int a , int b){
    int div = a/b;
    cout << "THE DIVISION OF THE NUMBERS IS : " << div;
}




int main(){

    int num1;
    int num2 ;

    cout << "ENTER FIRST NUMBER : ";
    cin >> num1;

    cout << "ENTER SECOND NUMBER : ";
    cin >> num2;

    // ENTER FUNCTION : 1 FOR SUM
    //                  2 FOR SUB
    //                  3 FOR MULT
    //                  4 FOR DIV
    cout << "----------------"<< endl;
    cout << "ENTER A FUNCTION "<< endl;
    cout << "1 FOR SUM" << endl;
    cout << "2 FOR SUBTRACTION" << endl;
    cout << "3 FOR MULTIPLICATION"<< endl;
    cout << "4 FOR DIVISION" << endl;
    cout << "----------------"<< endl;
    cout << endl;
    int choice ;
    cout << "ENTER YOUR CHOICE : ";
    cin >> choice;
    char check = typeid(choice).name;
    if(choice == int){
    
    }
    


    
    return 0;
}