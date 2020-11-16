#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, x, n;
    const double gup = 0.001;
    double result;
    cin>>x>>n;
    
    result = 1 + gup;
    for(i = 1; i < n;){
        if(2 * i < n){
            result *=result;
            i += i;
        }else{
            result *= 1 + gup;
            i++;
        }
    }
    cout<<fixed<<setprecision(4)<<result * x<<endl;

    return 0;
}
