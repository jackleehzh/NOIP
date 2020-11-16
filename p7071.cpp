#include <iostream>

using namespace std;

int main(){
    int i, n;
    int arr[] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16 * 1024, 32 * 1024, 64 * 1024, 128 * 1024, 256 * 1024, 512 * 1024, 1024 * 1024, 1024 * 2048, 1024 * 4096, 1024 * 8192};

    cin>>n;
    if(n == 0 || n % 2 == 1) cout<<-1<<endl;
    else{
        for(i = 22; i >= 0; i--){
            if(n > 0 && n - arr[i] >= 0){
                n -= arr[i];
                cout<<arr[i]<<" ";
            }
            else if(n == 0){
                cout<<endl;
                break;
            }
        }
    }

    return 0;
}
