#include <stdio.h>

int main()
{
    char bin_sdvig[5];
    scanf("%s", bin_sdvig);

    int res = 0;

    // Преобразуем каждый символ двоичной строки в число и используем битовый сдвиг
    res = (bin_sdvig[0] - '0') << 3 | (bin_sdvig[1] - '0') << 2 | (bin_sdvig[2] - '0') << 1 | (bin_sdvig[3] - '0');

    printf("%d\n", res);

    return 0;
}
/*
#include <stdio.h>

int main() {
    int B[3];
    scanf("%1d%1d%1d%1d",&B[0],&B[1],&B[2],&B[3]);
    printf("%d",B[3]+B[2]*2+B[1]*4+B[0]*8);

  return 0;
}
*/