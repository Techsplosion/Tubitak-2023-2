// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a, b, sum;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &a);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &b);
    
    for (int i = a; i <= b; i++) {
        if (i % 17 != 0) {
            sum += i;
        }
    }
    
    printf("Sonuc: %d", sum);
}
