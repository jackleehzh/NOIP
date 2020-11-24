#include <iostream>

using namespace std;

int main()
{
	int i, j, n, m;
	int a[101][101];

	cin >> n >> m;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= m; j++)
			cin >> a[i][j];
	
	for(i = 1; i <= m; i++){
		for(j = n; j >= 1; j--)
			cout << a[j][i] << " ";
		cout << endl;	
	}
	
	return 0;
}
