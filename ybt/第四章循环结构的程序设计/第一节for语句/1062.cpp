#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, n, a, max = 0;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a;
        if(max < a)
        max = a;
    }
    cout<<max<<endl;

    return 0;
}
