#include <iostream>

using namespace std;

int main(){
    int i, a, b, result = 1;
    cin>>a>>b;
    
    for(i = 0; i < b; i++){
        result *= a;
        result %= 1000;
    }
    
    if(result < 10) cout<<"00";
    else if(result < 100) cout<<0;
    cout<<result<<endl;
}
