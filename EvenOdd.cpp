#include<iostream>
int main()
{
  int i=0;
  
  std::cout<<"ODD NUMBERS\n";
  for (i=0;i<=10;i++)
  {
    {
    if(i%2==1)
      std::cout<<i<<"\t";
    }
  }
  
  std::cout<<" \nEVEN NUMBERS \n";
  {
    for (i=0;i<=10;i++)
    {
    if(i%2==0)
      std::cout<<i<<"\t";
    }
  }
  
  
  return 0;
}
