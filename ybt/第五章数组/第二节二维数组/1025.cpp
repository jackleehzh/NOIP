#include <iostream>

using namespace std;

int main()
{
	int i, j, k, n, m, t = 0;
	int a[101][101], b[101][101], c[101][101];

	cin >> n >> m >> k;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> a[i][j];
	
	for(i = 1; i <= m; i++)
		for(j = 1; j <= k; j++)
			cin >> b[i][j];
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= k; j++){
			c[i][j] = 0;
	    	for(t = 1; t <= m; t++)
				c[i][j] += a[i][t] * b[t][j];
		}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= k; j++)
			cout << c[i][j] << " ";
		cout << endl;
	}
	return 0;
}

