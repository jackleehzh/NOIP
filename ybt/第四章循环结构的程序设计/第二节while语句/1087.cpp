#include <iostream>

using namespace std;

int main(){
    int i = 0, n;
    double s;
    
    cin>>n;

    while(s <= n){
        s += 1.0 / ++i;
    }

    cout<<i<<endl;
    return 0;
}
