#include <stdbool.h>
#include <string.h>
#include <ctype.h>


bool IsIsogram(char *str) 
{
  bool result = true;
  
  int len, i=0, j=0;
  
  len = strlen(str); // to obtain the length of the input string
  
  if (len==0)
    result = true; // Assume the empty string is an isogram.
  
  else
  for (i = 0; i + 1 < len; i++) // outer loop for previous element
        for (j = i + 1; j < len; j++) // inner loop for the current element
            if (tolower(str[i]) == tolower(str[j])) // check whether lower case conversion of previous element and current element are equal
                result = false;
    

  return result;   
}
