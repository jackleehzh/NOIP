#include <iostream>

using namespace std;

int main(){
    int i, a, b, n, result = 1;
    cin>>a>>b>>n;

    a %= b;
    
    for(i = 0; i < n; i++){
        a *= 10;
        result = a / b;
        a %= b;
    }
    
    cout<<result<<endl;
}
