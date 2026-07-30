#include <iostream>
using namespace std;

class Addition
{
private:
  int a, b;

public:
  void getData()
  {
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: "; 
    cin >> b;
  }
void display()
  {
  cout << "Sum = " << a + b;
  }
};
int main()
{
  Addition obj;

  obj.getData();
  obj.display();

return 0;
}
