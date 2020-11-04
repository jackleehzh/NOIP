#include <stdio.h>
// 双精度输入用lf
int main(){
    int a, b;
    double c = 1.0;

    scanf("%d %d", &a, &b);
    printf("%0.9f", a * c / b);

    return 0;
}
