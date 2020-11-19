#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, j, a ,b ,c, e, f, g;

    cin >> a >> b >> c;
    e = a;
    f = b;

    while(e % f != 0){
        e = e % f;
        f = e + f;
        e = f - e;
        f = f - e;
    }

    g = a * b / f;

    cout << c / g + 1 << endl;
    return 0;
}
