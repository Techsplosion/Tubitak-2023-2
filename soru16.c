#include <stdio.h>

int main() {
    int money, hundred, fifty, twenty, ten, five, two, one;
    printf("Para miktari: ");
    scanf("%d", &money);

    hundred = money / 100;
    fifty = (money % 100) / 50;
    twenty = ((money % 100) % 50) / 20;
    ten = (((money % 100) % 50) % 20) / 10;
    five = ((((money % 100) % 50) % 20) % 10) / 5;
    two = (((((money % 100) % 50) % 20) % 10) % 5) / 2;
    one = (((((money % 100) % 50) % 20) % 10) % 5) % 2;

    printf("%d yuzluk, %d ellilik, %d yirmilik, %d onluk, %d beslik, %d ikilik, %d birlik", hundred, fifty, twenty, ten, five, two, one);

    return 0;
}
