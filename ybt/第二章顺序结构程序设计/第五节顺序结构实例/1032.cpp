#include <iostream>

using namespace std;

int main(){
    int h, r;
    const double PI = 3.1415926;
    cin>>h>>r;
    cout<<(int)(20000 / (PI * r * r * h)) + 1<<endl;
    return 0;
}
