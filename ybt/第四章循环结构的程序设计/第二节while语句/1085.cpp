#include <iostream>

using namespace std;

int main(){
    int i;
    double h, s;
    
    cin>>h;
    s = h;
    for(i = 0; i < 9; i++){
        h /= 2;
        s += 2 * h;
    }
    cout<<s<<endl;
    cout<< h / 2<<endl;
    return 0;
}
