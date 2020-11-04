#include <stdio.h>
//输出%的方法是%%
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%.3f%%", b * 100.0 / a);
    return 0;
}
