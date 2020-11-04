#include <iostream>
//剩余的苹果不能为负数
using namespace std;

int main(){
    int n, x, y, m;
    cin>>n>>x>>y;
    if(n == 0)
        m = 0;
    else if(y % x == 0)
        m = n - y / x;
    else
        m = n - y / x - 1;

    if(m > 0)
        cout<<m<<endl;
    else
        cout<<0<<endl;
    return 0;
}
