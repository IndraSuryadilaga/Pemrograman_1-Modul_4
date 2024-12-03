#include <stdio.h>

int main() {
    int bilangan, bil_kelipatan ;
    char tanda ;

    scanf("%d %c", &bil_kelipatan, &tanda) ;
    bilangan = 1 ;

    while(bilangan < 51) {
        if (bilangan % bil_kelipatan != 0){
            printf("%d ", bilangan) ;
        }
        else {
        printf("%c ", tanda) ;
        }
        bilangan ++;
    }
    return 0;
}