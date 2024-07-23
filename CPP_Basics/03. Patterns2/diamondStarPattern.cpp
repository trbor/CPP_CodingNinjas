#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n ;
   
    int temp = 0;
    for(int i=1; i <= n/2+1; i++){
        for(int j = 1; j <(n/2+1) - i+1 ; j++){
            cout<< " " ;
        }
        
        for(int k = 1; k <= i+temp; k ++){
            cout<<"*";
        }
        temp = temp + 1;
        cout<<endl;
        
    }
    int temp2 = (n/2)-1;
    for (int j = 1; j <= n/2; j++){
        for(int k = 1; k <= j; k++){
            cout << " ";
        }
        for(int l = 1; l <=(n/2) - j+1 +temp2; l++){
            cout<<"*";
        }
        temp2 =temp2-1;
        cout<<endl;
    }
    

}