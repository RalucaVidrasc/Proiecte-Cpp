# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Adauga operatorul: +, -, *, /: ";
  cin >> op;

  cout << "Scrie doua numere: ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Operator invalid";
      break;
  }

  return 0;
}
