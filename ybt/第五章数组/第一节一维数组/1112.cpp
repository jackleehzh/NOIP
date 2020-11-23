#include <iostream>

using namespace std;

int main()
{
	int i, n, a, max = -20000, min = 20000;
	
	cin >> n;
	for(i = 1; i <= n; i++){
	    cin >> a;
		if(a > max) max = a;
		if(a < min) min = a;
	}
	
	cout << max - min <<endl;
			
   return 0;
}
