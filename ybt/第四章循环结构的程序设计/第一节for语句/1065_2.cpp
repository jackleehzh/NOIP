#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    if(m % 2 == 0)
        m += 1;

    if(n % 2 == 0)
        n -= 1;
    
    cout<<(n + m) * ((n - m) / 2 + 1) / 2<<endl;

    return 0;
}
