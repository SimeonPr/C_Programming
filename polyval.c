#include <stdio.h>

double polyval(int order, double factors[], double x) {
	double ans = factors[0];
	double x_to_the_power = x;
	for (int i = 1; i <= order; i++) {
		ans += factors[i] * x_to_the_power;
		x_to_the_power *= x;
#ifdef DEBUG
        printf("%lf\n", x_to_the_power);
#endif
	}
	return ans;
}
