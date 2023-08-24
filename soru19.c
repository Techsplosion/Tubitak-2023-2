#include <stdio.h>

int main() {
    int p, q, r, s;
    printf("Birinci deger: ");
    scanf("%d", &p);
    printf("Ikinci deger: ");
    scanf("%d", &q);
    printf("Ucuncu deger: ");
    scanf("%d", &r);
    printf("Dorduncu deger: ");
    scanf("%d", &s);
    
    q > r && s > p && r + s == p + q && !(p % 2) && q > 0 && r > 0 && s > 0 ? printf("Dogru degerler") : printf("Yanlis degerler");
}
