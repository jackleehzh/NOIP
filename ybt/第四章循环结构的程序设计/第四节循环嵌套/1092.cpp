#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, j, n;
    double si = 0, e = 1;
    cin>>n;

    for(i = 1; i <= n; i++){
        si = 1;
        for(j = 1; j <= i; j++)
            si *= j;
        si = 1.0 / si;
       e += si;
    }

    cout<<fixed<<setprecision(10)<<e<<endl;
    return 0;
}
