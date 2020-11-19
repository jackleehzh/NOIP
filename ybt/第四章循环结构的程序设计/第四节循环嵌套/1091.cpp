#include <iostream>

using namespace std;

int main(){
    int i, j, n, si = 0, sn = 0;
    cin>>n;

    for(i = 1; i <= n; i++){
        si = 1;
        for(j = 1; j <= i; j++)
            si *= j;
       sn += si;
    }

    cout<<sn<<endl;
    return 0;
}
