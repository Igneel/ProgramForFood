 #include <stdio.h>
 #include <string.h>
 #define MAXLINE 10000 
 /* Write the function strindex(s,t) which returns the position 
 of the rightmost occurrence of t in s, or -1 if there is none */
 
 /* print the longest input line */

// reverse the given null-terminated string in place
void inplace_reverse(char * str)
{
  if (str)
  {
    char * end = str + strlen(str) - 1;

    // swap the values in the two given variables
    // XXX: fails when a and b refer to same memory location
#   define XOR_SWAP(a,b) do\
    {\
      a ^= b;\
      b ^= a;\
      a ^= b;\
    } while (0)

    // walk inwards from both ends of the string, 
    // swapping until we get to the middle
    while (str < end)
    {
      XOR_SWAP(*str, *end);
      str++;
      end--;
    }
#   undef XOR_SWAP
  }
}

int strindex(char * s, char * t)
{
	int len1;
	int len2;
	len1=strlen(s);
	len2=strlen(t);
	inplace_reverse(s);
	return strstr(s,t);
}

 void main()
 {

	char line[MAXLINE]; /* current input line */
	char lin2[MAXLINE];
	getline(line, MAXLINE);
	getline(line2, MAXLINE);

	printf("Pos is %d\n",strindex(s,t));


	return 0;
 }