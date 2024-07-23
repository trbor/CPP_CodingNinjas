#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n ;
    int temp = 0;
    for(int i=1; i <= n; i++){
        for(int j = 1; j <n - i+1 ; j++){
            cout<< " " ;
        }
        
        for(int k = 1; k <= i+temp; k ++){
            cout<<"*";
        }
        temp = temp + 1;
        cout<<endl;
        
    }
}