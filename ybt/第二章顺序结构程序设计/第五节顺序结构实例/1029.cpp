#include <iostream>
#include <sstream>
//需要删除浮点数结尾无效的0
using namespace std;

int main(){
    double a, b;
    std::ostringstream oss;
    cin>>a>>b;
    oss<<a - (int)(a / b) * b;
    cout<<oss.str()<<endl;
    return 0;
}
