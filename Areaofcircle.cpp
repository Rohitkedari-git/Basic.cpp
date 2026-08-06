#include<iostream>
using namespace std;

int main()
{
  int radius;
  float pi = 3.14;
  float area;
  
  cout << "Enter Radius: ";
  cin >> radius;
  
  area = pi*radius*radius;
  cout << "Area of Circle : " << area;
  return 0;
}
