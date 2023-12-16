/*
Pattern
1
23
345
4567
*/
#include<iostream>
using namespace std;


int main(){
    int n=6;
    int i=0;
    while(i<n){
        int j = i,count = 1;
        while(count<i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        // i = i + 1;
    }
}