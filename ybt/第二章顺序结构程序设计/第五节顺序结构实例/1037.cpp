#include <iostream>

using namespace std;

int main(){
    unsigned int i, n, result = 1;
    cin>>n;
    
    for(i = 0; i < n; i++) result *= 2;
    cout<<result<<endl;
    return 0;
}
