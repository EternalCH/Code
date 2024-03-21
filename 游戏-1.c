# include <stdio.h>
int main(void) {
    float a;
    scanf("%f", &a);
    a = (int)(a*1000+0.5)/1000.0;
    printf("%0.3f", a);
    return 0;
}