#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    if(m % 2 == 1)
        m -= 1;
    m /= 2;

    if(n % 2 == 1)
        n += 1;
    n /= 2;
    
    cout<<n * n - m * m<<endl;

    return 0;
}
