#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, m, n;;
    double x, y, result = 0;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>x>>y>>m;
        result += sqrt(x * x + y * y) / 50 * 2 + 1.5 * m;
    }
    cout<<ceil(result)<<endl;
    return 0;
}
