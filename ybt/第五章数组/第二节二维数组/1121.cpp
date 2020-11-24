#include <iostream>

using namespace std;

int main()
{
	int i, j, n, m, sum = 0;
	int a[100][100];
	
	cin >> n >> m;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	for(i = 1; i <= m; i++){
		sum += a[1][i] + a[n][i];
	}
	for(i = 2; i <= n - 1; i++){
		sum += a[i][1] + a[i][m];
	}
	
	cout << sum << endl;
   return 0;
}
