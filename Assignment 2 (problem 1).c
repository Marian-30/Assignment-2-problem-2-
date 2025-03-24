#include <stdio.h>
#include <math.h>
int main()
{
 double lambda, theta_deg, d, m;

 printf("Enter wavelength (in nm): ");
 scanf("%lf", &lambda);

 if (lambda < 380 || lambda > 750)
 {
 printf("Out of the range. Please enter a valid number.\n");
 return 1;
}
 printf("Enter angle theta (in degrees): ");
 scanf("%lf", &theta_deg);
 printf("Enter d (in micrometers): ");
 scanf("%lf", &d);
 lambda = lambda * 1e-9;
 d = d * 1e-6;
 m = (d * sin(theta_deg * M_PI / 180.0)) / lambda;
 printf("Order of maxima: %.2f-th order maxima\n", m);
 return 0;
}
