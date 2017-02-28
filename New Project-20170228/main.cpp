#include <iostream>

using namespace std;

int main()
{
 cout << "Select 1 for multiplication" << endl;
 cout << "Select 2 for addition" << endl;
 cout << "Select 3 for subtraction" << endl;
 cout << "Select 4 for division" << endl;
 
 int function;
 cout << "Select calculator function" << endl;
 cin >> function;
 
 int number1;
 cout << "Please enter your first number" << endl;
 cin >> number1;
 
 int number2;
 cout << "Please enter your second number" << endl;
 cin >> number2;
 
 if(function ==1){
 cout << number1 << " * " << number2 << " = " << number1*number2 << endl;
 }
 else if(function ==2){
 cout << number1 << " + " << number2 << " = " << number1+number2 << endl;
 }
 else if(function ==3){
 cout << number1 <<  " - " << number2 << " = " << number1-number2 << endl;
 }
 else if(function ==4){
 cout << number1 << " / " << number2 << " = " << number1/number2 << endl;

}else

cout << "Incorrect" << endl;

   return 0;
}
