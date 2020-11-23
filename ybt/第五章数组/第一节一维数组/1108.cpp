#include <iostream>

using namespace std;

int main()
{
	int a[1000] = {0};
	int b[1000] = {0};
	int i, n, t = 0;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
	    cin >> a[i];
	}
	
	for(i = 0; i < n; i++){
	    cin >> b[i];
	}
	
	for(i = 0; i < n; i++){
	    t += a[i] * b[i];
	}
	
   cout << t << endl;
	
   return 0;
}
