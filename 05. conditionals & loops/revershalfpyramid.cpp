#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 11; i++)
    {
     for (int j = 0; j < 11-i; j++)
     {
        cout<<"* ";
     }
      cout<<endl;
    }
    
}