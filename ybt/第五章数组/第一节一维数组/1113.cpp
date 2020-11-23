#include <iostream>

using namespace std;

int main()
{
	int i, n, a, max = -2000000, t = 0, sum = 0;
	
	cin >> n;
	for(i = 1; i <= n; i++){
	    cin >> a;
		sum += a;
		if(a > max){
			max = a;
			t = 1;
		}
		else if(a == max) t++;
	}
	
	cout << sum - max * t <<endl;
			
   return 0;
}
