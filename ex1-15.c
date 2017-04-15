#include <stdio.h>
 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
double convert(double fahr)
{
	return 5.0 * (fahr-32) / 9.0;
}

 main()
 {
 double fahr, celsius;
 double lower, upper, step;
 lower = 0.0; /* lower limit of temperature scale */
 upper = 300.0; /* upper limit */
 step = 20.0; /* step size */
 fahr = lower;
 while (fahr <= upper) {
 celsius = convert(fahr);
 printf("%f\t%f\n", fahr, celsius);
 fahr += step;
 }
 }