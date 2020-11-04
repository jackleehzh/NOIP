#include <stdio.h>

int main(){
    double x, a, b, c, d;
    scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
    printf("%.7f", ((a * x + b) * x + c) * x + d);

    return 0;
}
