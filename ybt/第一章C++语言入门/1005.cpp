#include <stdio.h>
// 避免资源枯竭的条件就是现有资源不减少。
int main(){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b ,&c, &d);

    printf("%.2f", (c * d - a * b) * 1.0 / (d - b));

    return 0;
}
