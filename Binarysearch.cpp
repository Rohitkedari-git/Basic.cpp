#include<iostream>
using namespace std;

int BinarySearch(int A[], int low, int high)
{
  int key, mid;
    cout << "\n Enter element to be search:",
    cin >> key;
    while (low <= high)
    {
      mid = low + (high - low)/2;
      if (key == A[mid])
      {
        return mid;
      }
      if (key > A[mid])
      {
        low = mid + 1;
      }
      else
      {
        high = mid - 1;
      }
    }
    return - 1;
}
int main()
{
  int A[] = {2,3,7,9,11,12,13,19};
  int result = 0 ,i = 0;
  
  
  for (i = 0; i <=7; i++)
  {
    cout << A[i] <<"\t";
  }
  result = BinarySearch(A,0,7);
  if (result == -1)
    cout << "\n element not found";
  else
    cout << "\n element found";
  return 0;
  }
