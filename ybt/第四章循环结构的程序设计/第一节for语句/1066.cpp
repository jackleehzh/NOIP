#include <iostream>

using namespace std;

int main(){
    int m, n, a;
    cin>>m>>n;
    a = m % 17;
    m += (17 - a) % 17;
    a = n % 17;
    n -= a;
    if(m > n) cout<<0<<endl;
    else cout<<(n + m) * ((n - m) / 17 + 1) / 2<<endl;

    return 0;
}
