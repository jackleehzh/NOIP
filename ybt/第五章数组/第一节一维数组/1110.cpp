#include <iostream>

using namespace std;

int main()
{
	int a[10001] = {0};
	int i, n, m = 0;
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
	   cin >> a[i];
	}
	
	cin >> m;
	
	for(i = 1; i <= n; i++){
	    if(a[i] == m ){
			cout << i;
			return 0;
		}
	}
	
	cout << -1;
		
   return 0;
}
