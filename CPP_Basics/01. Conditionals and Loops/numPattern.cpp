#include <iostream>
using namespace std;

int main(){
    
    int n  = 4;
    // cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<< j+i-1;
        }
        cout<<endl;
        
    }
    
}