#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, n;
    double a, sum = 0;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a;
        sum += a;
    }
    cout<<fixed<<setprecision(4)<<sum / n<<endl;

    return 0;
}
