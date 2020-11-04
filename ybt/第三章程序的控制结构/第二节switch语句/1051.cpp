#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double x;
    char c;
    cin>>x;
    
    if(x >= 0 && x < 5) c = 'A';
    else if(x >= 5 && x < 10) c = 'B';

    switch(c){
        case 'A':
            cout<<fixed<<setprecision(3)<<-x + 2.5<<endl;
            break;
        case 'B':
            cout<<fixed<<setprecision(3)<<2 - 1.5 * (x - 3) * (x - 3)<<endl;
            break;
       default:
            cout<<fixed<<setprecision(3)<<x / 2 - 1.5<<endl;
    }

    return 0;
}
