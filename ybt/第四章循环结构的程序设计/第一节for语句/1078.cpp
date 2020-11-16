#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, n, a = 2, b = 1;
    double total = 0;

    cin>>n;
    
    for(i = 0; i < n; i++){
        total += (double)a / b;
        a = a + b;
        b = a - b;
    }
 
    cout<<fixed<<setprecision(4)<<total<<endl;
}
