#include <iostream>

using namespace std;

int main()
{
	int a[5001] = {0};
	int i, j, n, m = 0, t = 0;
	
	cin >> n >> m;
	
	for(i = 1; i <= n; i++){
	    a[i] = 1;
	}
	
	for(i = 1; i <= m; i++){
		for(j = 1; j <= n; j++)
	    	if(j % i == 0 ) a[j] = !a[j];
	}
	
	for(i = 1; i <= n; i++){
	    if(a[i] == 0) {
			t++;
			if(t == 1) cout << i;
			else cout << "," << i;
		}
	}
		
   return 0;
}
