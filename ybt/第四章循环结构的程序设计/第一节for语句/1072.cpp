#include <iostream>

using namespace std;

int main(){
    int i, a, b, n, r[21] = {0};
    double x, y;
    cin>>n;
    cin>>a>>b;
    x = b * 1.0 / a;
    for(i = 1; i < n; i++){
        cin>>a>>b;
        y = b * 1.0 / a;
        if(x - y > 0.05) r[i] = 1;
        else if (y - x > 0.05) r[i] = -1;
    }

    for(i = 1; i < n; i++){
        if(r[i] == 1) cout<<"worse"<<endl;
        else if(r[i] == -1) cout<<"better"<<endl;
        else cout<<"same"<<endl;
    }
    return 0;
}
