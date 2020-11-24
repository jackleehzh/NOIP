#include <iostream>

using namespace std;

int main()
{
	int i, j, n, m, t = 0;
	int a[101][101], b[101][101];

	cin >> n >> m;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> a[i][j];
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> b[i][j];
	
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			a[i][j] += b[i][j];
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}

