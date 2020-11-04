#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double r;
    const double PI = 3.14159;
    cin>>r;
    cout<<fixed<<setprecision(4)<<2 * r<<" "<<fixed<<setprecision(4)<<2 * PI * r<<" "<<fixed<<setprecision(4)<<PI * r * r<<endl;

    return 0;
}
