#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r;
    const double PI = 3.14;
    cin>>r;  
    cout<<fixed<<setprecision(2)<<4 * PI * r * r * r / 3<<endl;
    return 0;
}
