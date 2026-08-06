#include<iostream>
int main()
{
  int i,j, count=0,number=50;
  
  for (i=0;i<=number;i++)
  { count = 0;
  
     for (j=1;j<=i;j++) 
     {
       if (i%j== 0)
        {
          count++;
        }
      }
  
      if (count == 2)
      {
        std::cout << i << "\n";
      }
  }
  
  return 0;
}
