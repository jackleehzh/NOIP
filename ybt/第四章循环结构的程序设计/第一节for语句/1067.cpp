#include <iostream>

using namespace std;

int main(){
    int i, k, a, c1 = 0, c5 = 0, c10 = 0;
    cin>>k;
    
    for(i = 0; i < k; i++){
        cin>>a;
        switch(a){
            case 1:
                c1++;
                break;
            case 5:
                c5++;
                break;
            case 10:
                c10++;
                break;
            default:
                break;
        }
    }
    cout<<c1<<endl<<c5<<endl<<c10<<endl;

    return 0;
}
