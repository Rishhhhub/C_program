#include <iostream> 

using namespace std; 

int main() {
    char op;
    int num1 , num2;


    cout << "Enter the Value of num1: \n";
    cin >> num1;

    cout << "Enter the operator( + , - , * , / ): \n";
    cin >> op;

    cout << "Enter the Valur of num2: \n";
    cin >> num2;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << (num1+num2); 
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << (num1-num2); 
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << (num1*num2); 
        break;

    case '/':
        if ( num2 != 0.0 )
        cout << num1 << " / " << num2 << " = =" << (num1/num2);

        else
            cout << "Divide by Zero Situation";
        break;   

    default:
        cout << op << " is an invalid operator"; 
    
    return 0;
    }
}    