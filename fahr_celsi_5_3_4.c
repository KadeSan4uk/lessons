#include <stdio.h>
int main()
{
    float phar, celsius;
    scanf("%f", &phar);
    celsius = (5.0 / 9.0) * (phar - 32.0);
    printf("%.2f", celsius);
    return 0;
}
/*
#include <stdio.h>
int main(){
    int F;
    scanf("%d",&F);
    printf("%.2f",5./9*(F-32));
}
*/