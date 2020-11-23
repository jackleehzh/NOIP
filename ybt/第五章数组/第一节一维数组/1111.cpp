#include <iostream>

using namespace std;

int main()
{
	int i, a, b, t = 7, s = 0;
		
	for(i = 1; i <= 7; i++){
	    cin >> a >> b;
		if(a + b > t){
			s = i;
			t = a + b;
		}
	}
	
	cout << s <<endl;
			
   return 0;
}
