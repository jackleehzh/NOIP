#include <iostream>

using namespace std;

int main(){
    int i, n, a, b, c, sumA = 0, sumB = 0, sumC = 0;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>a>>b>>c;
        sumA += a;
        sumB += b;
        sumC += c;	
    }
    cout<<sumA<<" "<<sumB<<" "<<sumC<<" "<<sumA + sumB + sumC<<endl;

    return 0;
}
