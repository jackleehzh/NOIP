#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int i, a, b, result = 1;
    string s[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cin>>a>>b;
    
    for(i = 0; i < b; i++){
        result *= a;
        result %= 7;
    }
    
    cout<<s[result]<<endl;
}
