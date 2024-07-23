#include <iostream>
using namespace std;

int main(){
    int S, E, St;
    cin>> S>> E>> St;

    // for(int i = S; i<= E; S)
    int i = S;
    while (i <= E)
    {
        int temp = ( i - 32)* 5;
        int ans = temp/9;
        cout<< i << ans << endl;
        i += St;
        
    }

    

}