#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, n, b, max = -1;
	int a[10000] = {0};
	
	cin >> n;
	for(i = 0; i < n; i++){
	    cin >> b;
		a[b]++;
		if(b > max)
			max = b;
	}
	
	for(i = 0; i <= max; i++)
		cout << a[i] << endl;
 	
   return 0;
}
