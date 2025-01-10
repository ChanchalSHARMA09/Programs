//Swap Two Numbers


#include <iostream>
using namespace std;

int main() {
    int num1, num2, temp;

    // Input first number
    cout << "Enter Number 1: ";
    cin >> num1;

    // Input second number
    cout << "Enter Number 2: ";
    cin >> num2;

    // Display the numbers before swapping
    cout << "Before Swap:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    // Swap the numbers
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the numbers after swapping
    cout << "After Swap:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}
//STEAK
