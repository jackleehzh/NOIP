#include <iostream>

using namespace std;

int main(){
    int i, m, n, total, result = 0;
    cin>>total;
    cin>>m;
    
    for(i = 0; i < m; i++){
        cin>>n;
        if(total >= n) total -= n;
        else result++;
    }

    cout<<result<<endl;
}
