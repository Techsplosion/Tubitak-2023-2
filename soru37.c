#include <stdio.h>

int main() {
    int x, y, q;
    printf("Cartesian coordinates (x, y format): ");
    scanf("%d, %d", &x, &y);
    
    q = x > 0 ? (y > 0 ? 1 : (y < 0 ? 2 : 0)) : (x < 0 ? (y > 0 ? 4 : (y < 0 ? 3 : 0)) : 0);
    
    q > 0 ? printf("Quadrant %s", q == 1 ? "I" : (q == 2 ? "II" : (q == 3 ? "III" : "IV"))) : 0;
}
