#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, n, a, sum = 0;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a;
        sum += a;
    }
    cout<<sum<<" "<<fixed<<setprecision(5)<<(double)sum / n<<endl;

    return 0;
}
