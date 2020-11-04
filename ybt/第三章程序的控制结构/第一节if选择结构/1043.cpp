#include <iostream>
// 注意数据类型的极值问题以及有符号数与无符号数的比较问题
using namespace std;

int main(){
    long long x, y;
    cin>>x>>y;
    if(x > y)
        cout<<">"<<endl;
    else if(x == y)
        cout<<"="<<endl;
    else
        cout<<"<"<<endl;
    return 0;
}
