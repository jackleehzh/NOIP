#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i, n, j, k;
	double max = -2000000, min = 2000000, mv, sum = 0, diff, maxDiff;
	double a[301];
	
	cin >> n;
	for(i = 1; i <= n; i++){
	    cin >> a[i];
		sum += a[i];
		if(a[i] > max){
			max = a[i];
			j = i;
		}
		else if(a[i] < min){
			min = a[i];
			k = i;
		}
	}
	
	mv = (sum - max - min) / (n - 2);
	
	maxDiff = -2000000;
	for(i = 1; i <= n; i++){
		if(i != k && i != j){
			diff = mv - a[i];
			if(diff < 0) diff = -diff;
			if(diff > maxDiff) maxDiff = diff;
		}
	}
		
	cout << fixed << setprecision(2) << mv << " " << maxDiff <<endl;
			
   return 0;
}
