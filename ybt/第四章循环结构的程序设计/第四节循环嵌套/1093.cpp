#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, j, n;
    double x, s = 1;
    cin>>x>>n;

    for(i = 1; i <= n; i++){
        s = s * x + 1;
    }

    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
