

#include <stdio.h>
#include <stdlib.h>
double * get_input(int * order) {
    printf("Of what order is the polynomial? ");
    scanf("%d", order);
    double * factors = malloc(sizeof(double) * (*order + 1) );
    for (int i = *order; i>= 0; i--) {
        printf("Type the %d. coefficient: ", i);
        scanf("%lf", factors+i);
    }
    return factors;
}
