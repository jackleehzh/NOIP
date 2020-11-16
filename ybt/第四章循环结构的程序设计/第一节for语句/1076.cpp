#include <iostream>

using namespace std;

int main(){
    int i, n, a, b, total = 0, max = 0;
    cin>>n;
    
    for(i = 0; i < n; i++){
        cin>>a>>b;
        if(a >= 90 && a <= 140 && b >= 60 && b <= 90){
            total++;
            if(total > max) max = total;
        }
        else total = 0;
    }

    cout<<max<<endl;
}
