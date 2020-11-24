#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int i, j, n, m, av;
	int a[101][101], b[101][101];

	cin >> n >> m;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> a[i][j];
	
	for(i = 2; i <= n - 1; i++){
		for(j = 2; j <= m - 1; j++)
			b[i][j] = round((a[i][j] + a[i - 1][j] + a[i][j - 1] + a[i + 1][j] + a[i][j + 1]) / 5.0);
	}
	
	for(i = 1; i <= m; i++){
		b[1][i] = a[1][i];
		b[n][i] = a[n][i];
	}
	
	for(i = 2; i <= n - 1; i++){
		b[i][1] = a[i][1];
		b[i][m] = a[i][m];
	}
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++)
			cout << b[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
