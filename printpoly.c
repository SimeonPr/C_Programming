//
//  printpoly.c
//  
//
//  Created by Simeon Prause on 22.11.19.
//

#include <stdio.h>

void printpoly(double * factors, int order) {
    printf("f(x) =");
    printf("% .2lfx^%d", *(factors+order), order);
    for (int i = order-1; i > 0; i--) {
        printf("%+.2lfx^%d", *(factors+i), i);
    }
    printf("%+.2lf\n", *factors);
    return;
}
