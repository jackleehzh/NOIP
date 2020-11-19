#include <iostream>

using namespace std;

int main(){
    int i, j, n, m, t = 0;
    
    cin>>n>>m;

    for(i = n; i<= m; i++)
        for(j = i; j > 0; j /= 10)
            if(j % 10 == 2) t += 1;
    cout<<t<<endl;
    return 0;
}
