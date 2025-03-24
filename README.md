# Assignment-2-problem-2-
#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846  // Manually define the value of Pi

int main()
{
    double theta_deg, ratio;
    theta_deg = 45.0;
    ratio = 1.0 / sin(theta_deg * M_PI / 180.0);
    printf("The ratio a/lambda = %.4f\n", ratio);
    return 0;
}
