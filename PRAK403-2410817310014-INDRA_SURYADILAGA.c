#include <stdio.h>

int main() {
    int bil_minimal, bil_maksimal;
    int bil_1, bil_2;

    scanf("%d %d", &bil_1, &bil_2);

    if (bil_1 > bil_2) {
        bil_maksimal = bil_1;
        bil_minimal = bil_2;
        while (bil_maksimal >= bil_minimal) {
            printf("%d-%d ", bil_1, bil_2);
            bil_maksimal = bil_maksimal - 1;
            bil_1 = bil_1 - 1;
            bil_2 = bil_2 + 1;
        }
    }
    else {
        bil_maksimal = bil_2;
        bil_minimal = bil_1;
        while (bil_maksimal >= bil_minimal) {
            printf("%d-%d ", bil_1, bil_2);
            bil_maksimal = bil_maksimal - 1;
            bil_1 = bil_1 + 1;
            bil_2 = bil_2 - 1;
        }
    }

    return 0;
}