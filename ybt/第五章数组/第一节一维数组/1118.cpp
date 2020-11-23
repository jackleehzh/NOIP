#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, n, x, y, no = -1;
	int a[10001], b[10001], g[10001], k[10001];
	
	cin >> n;
	for(i = 1; i <= n; i++){
	    cin >> a[i] >> b[i] >> g[i] >> k[i];
	}
	cin >> x >> y;
	
 	for(i = 1; i <= n; i++){
		if(x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
			no = i;
	}
	cout << no << endl;
   return 0;
}
