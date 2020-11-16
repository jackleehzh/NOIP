#include <iostream>

using namespace std;

int main(){
    int i, n, m, a, c = 0;
    cin>>n>>m;
    
    for(i = 0; i < n; i++){
        cin>>a;
        if(a == m)
            c++;
    }
    cout<<c<<endl;

    return 0;
}
