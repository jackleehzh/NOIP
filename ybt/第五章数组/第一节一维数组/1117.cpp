#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, j, n, c;
	int a[5001] = {0};
	int b[5001];
	
	cin >> n;
	for(i = 0, j = 0; i < n; i++){
	    cin >> c;
		if(a[c] == 0){
			a[c] = 1;
			b[j] = c;
			j++;
		}
	}
	
 	for(i = 0; i < j; i++){
	    cout << b[i] << " ";
	}
	
   return 0;
}
