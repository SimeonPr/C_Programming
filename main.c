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
    
    while (1) {
        char tmp = '0';
        printf("At what value of x would you like to evaluate the polynomial? ");
        scanf("%lf", &x);
        double ans = polyval(order, factors, x);
        printf("Answer: %lf\n", ans);
        while (tmp != 'y' && tmp != 'n') {
            printf("Another value for x? (y/n) ");
            scanf(" %c", &tmp);
        }
        if (tmp == 'n') break;
        }
    free(factors);
    return 0;
    
}
