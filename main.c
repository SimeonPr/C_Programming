//
//  main.c
//  
//
//  Created by Simeon Prause on 22.11.19.
//

#include <stdio.h>
#include <stdlib.h>
#include "inputandmath.h"

int main() {
    int order;
    double x;
    double * factors = get_input(&order);
    printpoly(factors, order);
    printf("At what value of x would you like to evaluate the polynomial? ");
    scanf("%lf", &x);
    double ans = polyval(order, factors, x);
    printf("Answer: %lf", ans);
    free(factors);
    return 0;
    
}
