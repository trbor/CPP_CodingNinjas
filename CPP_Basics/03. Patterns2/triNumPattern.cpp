#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n ;

    for(int i=1; i <= n; i++){
        for(int j = 1; j <n - i+1 ; j++){
            cout<< " " ;
        }
        
        for(int k = 1; k <= i; k ++){
            cout<< i + k - 1;
        }

        for(int l = 1; l <= i-1; l++){
                cout<< i+i - l-1;
        }
 
        cout<<endl;
        
    }
}