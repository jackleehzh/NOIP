#include <iostream>

using namespace std;

int main()
{
	int arr[10001] = {0};
	int i, j, m, n, a, b, t = 0;
	
	cin >> n >> m;
	
	for(i = 0; i < m; i++){
	    cin >> a >> b;
		for(j = a; j <= b; j++){
		    arr[j] = 1;
		}
	}
	
	for(i = 0; i <= n; i++)
		if(arr[i] == 1) t++;
	t = n + 1 - t;
	
   cout << t << endl;
	
   return 0;
}
