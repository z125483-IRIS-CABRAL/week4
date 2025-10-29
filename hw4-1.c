#include <stdio.h>

int main() {
    int x, y, z;
    int average;

    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    average = (x + y + z) / 3;

    printf("Average is %d\n", average);
    return 0;
}
