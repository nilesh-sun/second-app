#include <stdio.h>
#include "square.h"

int main() {
    double rad, area, peri, side;
    printf("ready!\n");
    printf("enter radius: \n");
    scanf("%lf", &rad);
    area = calc_circle_area(rad);
    printf("circle area = %lf\n", area);
    peri = calc_circle_peri(rad);
    printf("circle peri = %lf\n", peri);

    printf("enter side: \n");
    scanf("%lf", &side);
    area = calc_square_area(side);
    printf("square area = %lf\n", area);
    peri = calc_square_peri(side);
    printf("square peri = %lf\n", peri);
    return 0;
}
