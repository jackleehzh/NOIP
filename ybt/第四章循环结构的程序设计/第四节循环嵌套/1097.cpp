#include <iostream>

using namespace std;

int main(){
    int i, j, n, m, s;
    char a; 
    cin>>n>>m>>a>>s;

    for(i = 0; i< n; i++){
        for(j = 0; j < m; j++){
            if(s == 0 && i % (n - 1) != 0 && j % (m - 1) != 0) cout<<" ";
            else cout<<a;
        }
        cout<<endl;
    } 
    
    return 0;
}
