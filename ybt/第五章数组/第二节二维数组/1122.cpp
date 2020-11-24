#include <iostream>

using namespace std;

int main()
{
	int i, j;
	int a[6][6];
	int max[6][3], min[6][3];
	
	for(i = 1; i <= 5; i++)
		for(j = 1; j <= 5; j++)
			cin >> a[i][j];
	
	for(i = 1; i <= 5; i++){
		max[i][0] = a[i][1];
		max[i][1] = i;
		max[i][2] = 1;
		for(j = 2; j <= 5; j++)
			if(max[i][0] < a[i][j]){
				max[i][0] = a[i][j];
				max[i][1] = i;
				max[i][2] = j;
			}
	}
	
	for(i = 1; i <= 5; i++){
		min[i][0] = a[1][i];
		min[i][1] = 1;
		min[i][2] = i;
		for(j = 2; j <= 5; j++)
			if(min[i][0] > a[j][i]){
				min[i][0] = a[j][i];
				min[i][1] = j;
				min[i][2] = i;
			}
	}
	
	for(i = 1; i <= 5; i++)
		for(j = 1; j <= 5; j++)
			if(min[i][1] == max[j][1] && min[i][2] == max[j][2]){
				cout << max[j][1] << " " << max[j][2] << " " << max[j][0];
				return 0;
			}
	
	cout << "not found" << endl;
    return 0;
}
