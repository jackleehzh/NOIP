#include <iostream>

using namespace std;

int main(){
    int i, n, m, result = 1;
    cin>>n>>m;
    
    result = n;
    for(i = 1; i < m;){
        if(2 * i < m){
            result *=result;
            i += i;
        }else{
            result *= n;
            i++;
        }
    }
    cout<<result<<endl;

    return 0;
}
