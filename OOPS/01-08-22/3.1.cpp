//WAP to perform the addition, subtraction, division and multiplication of two real numbers and display the result. 
#include<iostream>
using namespace std;
int main()
{
  int num1, num2;
  cout << "Enter two Numbers-  ";
  cin >> num1 >> num2;
  cout << num1 << "+" << num2 << " = "<< num1+num2 << endl;
  cout << num1 << "-" << num2 << " = "<< num1-num2 << endl;
  cout << num1 << "*" << num2 << " = "<< num1*num2 << endl;
  cout << num1 << "/" << num2 << " = "<< num1/num2 << endl;
  return 0;
}