#include <stdio.h>

int main() {
    int bilangan, bil_maksimal;
    scanf("%d", &bil_maksimal);
    bilangan = 1;

    while (bilangan <= bil_maksimal) {
        if (bilangan % 2 == 1) {
            printf("%d ", bilangan);
        }
        bilangan = bilangan + 1;
    }

    printf("\n");

    while (bil_maksimal >= 2) {
        if (bil_maksimal % 2 ==0) {
            printf("%d ", bil_maksimal);
        }
        bil_maksimal = bil_maksimal - 1;
    }
    return 0;
}