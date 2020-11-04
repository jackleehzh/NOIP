#include <iostream>
#include <cmath>
#include <iomanip>
//两个单精度运算可能得到的结果是双精度
using namespace std;

int main(){
    float x1, y1, x2, y2, x3, y3;
    double p, a, b, c;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    p = (a + b + c) / 2;
    cout<<fixed<<setprecision(2)<<sqrt(p * (p - a) * (p - b) * (p -c))<<endl;
    return 0;
}
