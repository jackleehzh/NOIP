#include <iostream>

using namespace std;

int main(){
    int n, f = 8;
    char c;
    cin>>n>>c;
    
    if(c == 'y') f += 5;
    if(n > 1000){
        f += (n - 1000) / 500 * 4;
        if((n - 1000) % 500 != 0) f += 4;
    }
    
    cout<<f<<endl;
    return 0;
}
