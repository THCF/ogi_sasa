#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#define ERROR_MESSAGE "[ERR] Invalid number of triangles.\n"
int isINT(char *input)
{	
	
 
  int length_of_input = strlen(input) - 1;
  for (int counter = 0; counter < length_of_input; counter++)
  {
    if (!isdigit(input[counter])) 
    {
	  _Bool x = false;
	  return x;
      
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

    if ((raw_input_array[0] == '0') || (raw_input_array[0] == '\n'))
    {
      printf(ERROR_MESSAGE);
      continue;
    }
     
    if (isINT(raw_input_array))
    {
      brT = atoi(raw_input_array);
      if (brT > UCHAR_MAX)
      {
        printf(ERROR_MESSAGE);
        continue;
      }
      flag = 0;
    }
    else
    {
      printf(ERROR_MESSAGE);
      continue;
    }
  }
  return brT;
}


int main()
{
	int d= brojTrouglovaF();
	


return 0;
}
