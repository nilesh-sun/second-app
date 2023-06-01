#include <stdio.h>

int main() {
    double rad, area, peri;
    printf("ready!\n");
    printf("enter radius: \n");
    scanf("%lf", &rad);
    area = calc_circle_area(rad);
    printf("circle area = %lf\n", area);
    peri = calc_circle_peri(rad);
    printf("circle peri = %lf\n", peri);
    return 0;
}
