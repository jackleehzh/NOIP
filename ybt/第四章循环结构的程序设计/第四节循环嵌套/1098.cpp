#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, a;
    
    cin >> n;
    a = sqrt(n);

    while(n % a != 0) a -= 1;
   
    cout << n / a << endl;
    return 0;
}
