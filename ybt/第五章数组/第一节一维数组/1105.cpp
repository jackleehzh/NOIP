#include <iostream>

using namespace std;

int main(){
    int n, i;
    int a[100];

    cin >> n;
    for(i = n - 1; i >= 0; i--){
        cin >> a[i];
    } 
    
    for(i = 0; i < n; i++){
        cout << a[i] << " ";
    } 
    return 0;
}
