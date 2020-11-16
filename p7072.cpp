#include <iostream>

using namespace std;

int main(){
    int i, j, n, s, w, total, c;
    int arr[601] = {0};

    cin>>n>>w;
 
    for(i = 1; i <= n; i++){
        cin>>s;
        arr[s] += 1;
        total = 1 > i * w / 100? 1 : i * w / 100;
        c = 0;
        for(j = 600; j >= 0; j--){
            if(arr[j] != 0) c += arr[j];

            if(c >= total){
                cout<<j<<" ";
                break;
            }
        }
    }
    cout<<endl;

}
