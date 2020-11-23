#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n, i, age, a = 0, b = 0, c = 0, d = 0;

    cin >> n;
    for(i = n - 1; i >= 0; i--){
        cin >> age;
        if(age <= 18) a++;
        else if(age >= 19 && age <= 35) b++;
        else if(age >= 36 && age <= 60) c++;
        else d++;
    } 
    
    cout << fixed << setprecision(2)<< 100.0 * a / n << "%" << endl;
    cout << fixed << setprecision(2)<< 100.0 * b / n << "%" << endl;
    cout << fixed << setprecision(2)<< 100.0 * c / n << "%" << endl;
    cout << fixed << setprecision(2)<< 100.0 * d / n << "%" << endl;
    return 0;
}
