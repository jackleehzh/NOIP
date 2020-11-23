#include <iostream>

using namespace std;

int main(){
    int m, i;
    double a[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    double t = 0;

    for(i = 0; i < 10; i++){
        cin >> m;
        t += m * a[i];
    } 
    
    cout << t << endl;
    return 0;
}
