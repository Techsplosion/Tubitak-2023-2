#include <stdio.h>

int main() {
  int n1, n2, n3;
	printf("Sayi 1: ");
	scanf("%d", &n1);
	printf("Sayi 2: ");
	scanf("%d", &n2);
	printf("Sayi 3: ");
	scanf("%d", &n3);
	printf("Maksimum: %d", n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3));
}
