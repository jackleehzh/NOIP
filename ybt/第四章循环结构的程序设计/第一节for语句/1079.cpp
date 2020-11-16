#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, n, f = 1;
    double total = 0;

    cin>>n;
    
    for(i = 1; i <= n; i++){
        total += (double)1 / i * f;
        f *= -1;
    }
 
    cout<<fixed<<setprecision(4)<<total<<endl;
}
