 #include <stdio.h>
 #include <string.h>
 #include <limits.h>
 #include <float.h> 
int main()
 {

printf("%d\n",CHAR_BIT);
printf("%d\n",SCHAR_MIN);
printf("%d\n",SCHAR_MAX);
printf("%d\n",UCHAR_MAX);
printf("%d\n",CHAR_MIN);
printf("%d\n",CHAR_MAX);
printf("%d\n",MB_LEN_MAX);
printf("%d\n",SHRT_MIN);
printf("%d\n",SHRT_MAX);
printf("%d\n",USHRT_MAX);
printf("%d\n",INT_MIN);
printf("%d\n",INT_MAX);
printf("%d\n",UINT_MAX);
printf("%ld\n",LONG_MIN);
printf("%ld\n",LONG_MAX);
printf("%ld\n",ULONG_MAX);
   printf("The maximum value of float = %.10e\n", FLT_MAX);
   printf("The minimum value of float = %.10e\n", FLT_MIN);

   printf("The number of digits in the number = %.10e\n", FLT_MANT_DIG);
  return 0;
 }