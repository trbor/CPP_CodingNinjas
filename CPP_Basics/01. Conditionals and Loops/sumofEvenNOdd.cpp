#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int even = 0;
    int odd = 0;
    int mod =0;
    
    while(N > 0){
        cout<<"N value==>"<<N<<endl;

        mod = N % 10;
        N = N/ 10;

        if(mod % 2 ==0){
            even += mod;
            cout<<"even"<<even<<endl;
        }
        else{ odd += mod;
            cout<<"odd"<<odd<<endl;
        }
    }
    cout<<even<<" " <<odd;
}