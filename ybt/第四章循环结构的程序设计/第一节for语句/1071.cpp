#include <iostream>

using namespace std;

int main(){
    int i, a = 1, b = 1, n;
    cin>>n;
    
    for(i = 2; i < n; i++){
        b = a + b;
        a = b - a;
    }
    cout<<b<<endl;

    return 0;
}
