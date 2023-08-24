#include <stdio.h>

int main() {
    int mod;
    printf("Bir sayi giriniz: ");
    scanf("%d", &mod);
    for (int i = 1; i < 101; i++)
        i % mod == 3 ? printf("%d\n", i) : 0;
    
    return 0;
}
