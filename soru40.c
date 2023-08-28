// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a, b;
    printf("1. sayiyi giriniz: ");
    scanf("%d", &a);
    printf("2. sayiyi giriniz: ");
    scanf("%d", &b);
    
    for (int i = a + 1; i < b; i++) {
        if (i % 7 == 2 | i % 7 == 3) {
            printf("%d\n", i);
        }
    }
}
