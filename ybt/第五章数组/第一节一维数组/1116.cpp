#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, n, len = 1, max = -1;
	int a[100001];
	
	cin >> n;
	for(i = 0; i < n; i++){
	    cin >> a[i];
	}
	
 	for(i = 1; i < n; i++){
	    if(a[i] == a[i - 1]){
			len++;
			if(len > max) max = len;
		} else len = 1;
	}
	
	cout << max << endl;
   return 0;
}
