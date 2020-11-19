#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, i, j, c = 0, s = 0;

    cin >> n;
    for(i = 1; ; i++){
        c += i;
        if(c <= n)
            s += i * i;
        else break;
    }

    s += (n - c + i) * i;
    cout << s << endl;
    return 0;
}
