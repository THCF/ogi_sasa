#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <limits.h>


bool isINT(char *input)
{
 
  int length_of_input = (int) strlen(input) - 1;
  for (int i = 0; i < length_of_input; ++i)
  {
    if (!isdigit(input[i])) 
    {
      return false;
    }
  }
  return true;
}
int brojTrouglovaF()
{
  int brT;
  int flag = 1;

  while (flag)
  {
    
    char raw_input_array[CHAR_MAX] = {0};
    printf("Please enter the number of triangles to check: ");
    fgets(raw_input_array, CHAR_MAX, stdin);

    
    if (raw_input_array[0] == EOF)
    {
      printf("\n");
      return 0;
    }

    if (raw_input_array[0] == '0')
    {
      printf("err\n");
      continue;
    }

    if (raw_input_array[0] == '\n')
    {
      printf("err\n");
      continue;
    }

     
    if (isINT(raw_input_array))
    {
      brT = atoi(raw_input_array);
      if (brT > UCHAR_MAX)
      {
        printf("err\n");
        continue;
      }
      flag = 0;
    }
    else
    {
      printf("err\n");
      continue;
    }
  }
  return brT;
}


int main()
{
	int d= brojTrouglovaF();
	printf(" da li je %d",d);


return 0;
}
