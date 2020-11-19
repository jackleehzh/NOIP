#include <iostream>

using namespace std;

int main(){
    int n, t = 0;
    
    cin>> n;

    while(n > 0){
        if(n % 10 == 1) t += 1;
        if(n / 10 % 10 == 1) t += 1;
        if(n / 100 % 10 == 1) t += 1;
        if(n / 1000  == 1) t += 1;
        if(n == 10000) t += 1;
        n--;
    }
    cout<<t<<endl;
    return 0;
}
