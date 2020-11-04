#include <iostream>
//#include <cstring>
//string存储与char数组的不同，涉及编码格式的问题。
using namespace std;

int main(){
    //string a = "Hello, World!";
    char a[] = "Hello, World!";
    cout<<sizeof(a)<<endl;
    return 0;
}
