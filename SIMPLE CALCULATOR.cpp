#include <iostream>
using namespace std;
  
int main() {
    char op;
    float num1, num2;
      
    cout << "Enter an arithemetic operator(+ - * /)\n";
    cin >> op;
    cout << "Enter  numbers as operands\n";
    cout<< "Enter the first number\n";
    cin >> num1 ;
    cout<< "Enter the second number\n";
    cin>> num2;
    switch(op) {
        case '+': 
                cout << num1 << " + " << num2 << " = " << num1+num2;
                break;
        case '-':
                cout << num1 << " - " << num2 << " = " << num1+num2;
                break;
        case '*':
                cout << num1 << " * " << num2 << " = " << num1*num2;
                break;
        case '/':
                cout << num1 << " / " << num2 << " = " << num1/num2;
                break;
        default: 
                printf("ERROR: Unsupported Operation");
    }
      
    return 0;
}