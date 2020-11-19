#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    int i, n; 
    stringstream ss;
    string s;

    cin>>n;
    ss << n;
    ss >> s;
    if(s[0] == '-') reverse(s.begin() + 1, s.end());
    else reverse(s.begin(), s.end());

    i = 0;
    if(s[0] == '-'){
        cout<<'-';
        i++;
    }
   
    while(s[i++] == '0');
    i -= 1;
    cout<<s.substr(i, s.length() - i)<<endl;
    
    return 0;
}
