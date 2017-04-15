#include <stdio.h>
#include <string.h>
#include <math.h>

/*
Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F. 


*/

int convertNum(char* num)
{
  int result=0;
  for (int i = 0; i < 2; ++i)
  {
    char magicSymbol='0';
    if (num[i]>='A' && num[i]<='F')
    {
      magicSymbol='A'-10;
    }
    if (num[i]>='a' && num[i]<='f')
    {
      magicSymbol='a'-10;
    }
    result+=(num[i]-magicSymbol)*pow(16,(1-i));
  }
  return result;
}

int htoi(char* number)
{
  int result=0;
  if (number[0]='0' && (number[1]=='x' || number[1]=='X'))
  {
    number+=2;
  }

  for (int i = 0; i < strlen(number); i+=2)
  {
    result+=convertNum(number+i)*pow(16,strlen(number)/2-i);
  }

  return result;
}

int main()
{
  char number[256];
  scanf("%s", number);
  int n=htoi(number);
  printf("%d\n", n);

  return 0;
}