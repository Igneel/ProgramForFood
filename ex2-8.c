#include <stdio.h>
#include <string.h>
#include <limits.h>
/*
 Write a function rightrot(x,n) that returns the value of the integer x rotated
to the right by n positions. 
*/

unsigned int rightrot (unsigned int n, unsigned int c)
{
  const unsigned int mask = (CHAR_BIT*sizeof(n)-1);
  c &= mask;
  return (n>>c) | (n<<( (-c)&mask ));
}

int main()
{
  unsigned int x,n;

  scanf("%d%d", &x,&n);
  
  printf("%d\n", rightrot(x,n));

  return 0;
}