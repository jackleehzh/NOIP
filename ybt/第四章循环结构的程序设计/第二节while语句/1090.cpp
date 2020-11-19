#include <iostream>
#include <cstring>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    int i, n, m = 0, k; 
    stringstream ss;
    string s;

    cin>>n>>k;
    ss << n;
    ss >> s;
   
    i = 0;
    while(s[i] != 0) if(s[i++] == '3') m++;
    if(n % 19 == 0 and m == k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
    return 0;
}
