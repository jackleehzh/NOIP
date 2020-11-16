#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, a, b, c, m, n, p, q;
    cin>>a>>b>>c;

    m = abs(a - b);
    n = abs(b - c);
    p = abs(c - a);

    q = p;

    for(i = 2; i < q; i++){
        if(m % i == 0 && n % i == 0 && p % i == 0){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
