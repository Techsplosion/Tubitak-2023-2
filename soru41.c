// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("Satir sayisi: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", 3 * i + 1, 3 * i + 2, 3 * i + 3);
    }
}
