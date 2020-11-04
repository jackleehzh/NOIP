#include <stdio.h>
// 实数要使用double类型存储
int main(){
    double f;
    
    scanf("%lf", &f);
    printf("%.5lf", 5 * (f - 32) / 9);

    return 0;
}
