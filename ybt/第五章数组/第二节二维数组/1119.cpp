#include <iostream>

using namespace std;

int main()
{
	int i, j, n, m;
	int a[6][6];
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			cin >> a[i][j];
		}
	}
	cin >> n >> m;
	
	if(n != m){
		for(i = 1; i <= 5; i++){
			a[n][i] = a[n][i] + a[m][i];
			a[m][i] = a[n][i] - a[m][i];
			a[n][i] = a[n][i] - a[m][i];
		}
	}
 	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
   return 0;
}
