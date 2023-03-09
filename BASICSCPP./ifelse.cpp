#include<bits/stdc++.h>
using namespace std;
int main(){

    /*
    BELOW 25 - F
    25 TO 44 - E
    45 TO 49 - D
    50 TO 59 - C
    60 TO 79 - B
    80 TO 100 - A
    ASK USER TO ENTER MARKS AND PRINT THE GRADES
    */

   int marks;

   cout << "ENTER YOUR MARKS : ";
   cin >> marks;

   if(marks>100){
    cout << "INVALID MARKS";
   }
   if(marks>= 80 && marks <= 100){
    cout << "YOUR GRADE IS A ";
   }

   else if(marks>= 60 && marks <= 79){
    cout << "YOUR GRADE IS B ";
   }

   else if(marks>= 50 && marks <= 59){
    cout << "YOUR GRADE IS C ";
   }

   else if(marks>= 45 && marks <= 49){
    cout << "YOUR GRADE IS D ";
   }

   else if(marks>= 25 && marks <= 44){
    cout << "YOUR GRADE IS E ";
   }

   else if (marks<25){
    cout << "YOU ARE FAIL";
   }

   
    









    return 0;
}