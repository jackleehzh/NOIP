#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i, n, a, max = 0, min = 10000;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a;
        if(max < a)
            max = a;
        if(min > a)
            min = a;
    }
    cout<<max - min<<endl;

    return 0;
}
