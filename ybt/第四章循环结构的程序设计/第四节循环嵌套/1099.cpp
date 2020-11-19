#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i, j, n, flag;

    cin >> n;
    
    for(i = 2; ; i++){
        flag = 1;
        for(j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                flag = 0;
                break;
            }
        }
        if(flag){
            if(--n == 0){
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
