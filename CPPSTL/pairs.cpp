#include<bits/stdc++.h>
using namespace std;

void explainPair(){
        pair<int , int> p = {1,3};
        cout << p.first << " " << p.second << endl;
        pair<int , pair<int,int>> q = {1,{3,4}};
        cout << q.first << " " << q.second.first << " " << q.second.second << endl;
        pair<int, int> arr[] = {{1,2}, {2,4}, {5,1}};
        cout << arr[1].second;
    }

int main(){
    explainPair();
    return 0;
}