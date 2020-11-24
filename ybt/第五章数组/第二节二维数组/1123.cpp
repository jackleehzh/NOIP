#include <iostream>
#include <iomanip>

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
			if(a[i][j] == b[i][j]) t++;
	
	cout << fixed << setprecision(2) << 100.0 * t / (n * m) << endl;
    return 0;
}
