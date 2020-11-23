#include <iostream>

using namespace std;

int main(){
    int h, i, c = 0;
    int a[10];

    for(i = 0; i < 10; i++) cin >> a[i];
    cin >> h;
    for(i = 0; i < 10; i++) if(a[i] <= h + 30) c++;
    
    cout << c << endl;
    return 0;
}
