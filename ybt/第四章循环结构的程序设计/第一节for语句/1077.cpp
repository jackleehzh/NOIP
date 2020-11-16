#include <iostream>

using namespace std;

int main(){
    int i, n, a, total = 0;
    cin>>n;
    
    for(i = 0; i < n; i++){
        cin>>a;
        if(a % 10 - a / 1000 - a / 100 % 10 - a / 10 % 10 > 0){
            total++;
        }
    }

    cout<<total<<endl;
}
