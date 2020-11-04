#include <iostream>
#include <iomanip>
#include <cstdio>
//%f输出双精度数字，不代表一定是原样输出。
using namespace std;

int main(){
    double a;
    cin>>a;
    printf("%f\n", a);
    cout<<fixed<<setprecision(5)<<a<<endl;
    printf("%e\n", a);
    printf("%g\n", a);
    return 0;
}
