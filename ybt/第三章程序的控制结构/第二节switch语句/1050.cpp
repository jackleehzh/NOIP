#include <iostream>
//case中必须是常量
using namespace std;

int main(){
    int a, c;
    float b;
    cin>>a;

    b = a / 3.0 + 50 - a / 1.2;
   if(b > 0) c = 1;
   else if (b < 0) c = -1;

    switch(c){
        case 1:
            cout<<"Walk"<<endl;
            break;
        case -1:
            cout<<"Bike"<<endl;
            break;
       default:
            cout<<"All"<<endl;
    }

    return 0;
}
