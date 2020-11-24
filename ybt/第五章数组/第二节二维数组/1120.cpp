#include <iostream>

using namespace std;

int main()
{
	int i, j, k, n, m;
	
	cin >> n >> i >> j;
	for(k = 1; k <= n; k++){
		cout << "(" << i << "," << k << ")" << " ";
	}
	cout << endl;
	
	for(k = 1; k <= n; k++){
		cout << "(" << k << "," << j << ")" << " ";
	}
	cout << endl;
	
	for(k = 1; k <= n; k++){
		for(m = 1; m <= n; m++)
			if(i - j == k - m)
				cout << "(" << k << "," << m << ")" << " ";
	}
	cout << endl;
	
	for(k = n; k >= 1; k--){
		for(m = 1; m <= n; m++)
			if(i + j == k + m)
				cout << "(" << k << "," << m << ")" << " ";
	}
	cout << endl;
	
   return 0;
}
