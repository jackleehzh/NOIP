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
    reverse(s.begin(), s.end());
    i = 0;
    while(i < s.size()) cout<<s[i++]<<" ";
    
    return 0;
}
