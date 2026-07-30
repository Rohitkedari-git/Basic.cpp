#include <iostream>
using namespace std;

int main()
{
  int num1, num2; 
  int choice;

  cout << "=====================================\n";
  cout << "          BASIC CALCULATOR           \n";
  cout << "=====================================\n";

  cout << "Enter First Number: ";
  cin >> num1;

  cout << "Enter Second Number: "; 
  cin >> num2;

  cout << "\nSelect Operation: \n";
  cout << "1. Addition (+)\n";
  cout << "2. Subtraction (-)\n";
  cout << "3. Multiplication (*)\n";
  cout << "4. Division (/)\n";
  cout << "5. Modulus (%)\n";
  
  cout << "Enter Your Choice (1-5): "; 
    cin >> choice;

  switch(choice)
  {
    case 1:
      cout << "Result= "<< num1 + num2;
      break;

    case 2:
      cout << "Result ="<< num1 - num2;
      break;

    case 3:
      cout << "Result ="<< num1 * num2;
      break;

    case 4:
      if (num2 != 0)
        cout << "Result = " << (float)num1 / num2;
      else
        cout << "Division by zero is not possible.";
      break;

    case 5:
      if (num2 != 0)
        cout << "Result "<< num1 % num2;
      else
        cout << "Modulus by zero is not possible.";
      break;

      default:
        cout << "Invalid Choice!";
  }
return 0;
}
