#include <stdio.h>
#include <math.h>

int main() {
    double p, q, H;

    printf("p? ");
    scanf("%lf", &p);

    q = 1 - p;
    H = -p * log(p) / log(2) - q * log(q) / log(2);

    printf("%f\n", H);
    return 0;
}
