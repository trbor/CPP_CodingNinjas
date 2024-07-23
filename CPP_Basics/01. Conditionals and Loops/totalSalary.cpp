#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int Basic;
    char Allow;
    cin>> Basic>> Allow;

    int HRA = Basic*(0.20);
    
    int DA = Basic*(0.50);
    
    int PF = Basic*(0.11);
    
    int ans;
   
    if( Allow == 'A'){
        ans = Basic+ HRA+ DA+ 1700- PF;
    }
    else if( Allow == 'B'){
        ans = Basic+ HRA+ DA+ 1500- PF;
    }
    else{
        ans = Basic+ HRA+ DA+ 1300- PF;
    }
    
    cout<< round(ans);
  
    
}