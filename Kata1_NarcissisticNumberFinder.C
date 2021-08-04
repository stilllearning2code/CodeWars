#include <stdbool.h>
#include <math.h>

bool narcissistic(int num)
{
  int original, sum=0, numdigits=0, remainder;
  
  original = num;
    
  if (1<=original&&original<=9) // Single digits number 1 to 9 are also Armstrong/Narcissistic numbers.
    {
    return true; 
    }
  if (num==0)
    {return false;} // 0 is not an Armstrong/Narcissistic number
  
  while(num!=0)  // to determine the number of digits in the input.
    {
      numdigits++; // # of digits in the input
      num=num/10;
      }
  
  num = original;
  
  while (num!=0)
    {
    remainder = num%10;
    sum = sum + pow(remainder,numdigits); // sum = sum + remainder^(numdigits)
    num=num/10;
    }
  
  if (sum==original)
    {return true;}
  else
    {return false;}

}
