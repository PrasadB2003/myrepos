#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    
   
    do {
        cout << "Enter first number: ";
        cin >> num1;
        
        do {
            cout << "Enter second number: ";
           cin >> num2;
        } while (num2 != 0);
        
        cout << "Sum = " << num1 + num2 << std::endl;
    } while (num1 == 0 || num2 == 0);
    
    return 0;
}
