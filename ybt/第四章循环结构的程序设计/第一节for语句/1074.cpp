#include <iostream>

using namespace std;

int main(){
    int i, m, total = 0, result = 0;
    for(i = 0; i < 12; i++){
        total += 300;
        cin>>m;
        total -= m;
        if(total < 0) {
           cout<< -1 - i<<endl;
           return 0;
        }
        else if(total >= 100){
            result += total - total % 100;
            total %= 100;
        }
    }
    cout<<result * 6 / 5 + total<<endl;
    return 0;
}
