#include <stdio.h>
#include <string.h>

int main() {
    char* mon[12] = {"Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran", "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik"};
    
    int ay_sayisi;
    printf("1 ila 12 arasinda bir sayi veriniz: ");
    scanf("%d", &ay_sayisi);
    printf(mon[ay_sayisi - 1]);
}
