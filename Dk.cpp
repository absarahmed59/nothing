#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0) {
        remainder = n % 10;
        n /= 10;
        decimalNumber += remainder * pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main() {
    int binaryNumber;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    cout << "Decimal Equivalent: " << binaryToDecimal(binaryNumber) << endl;
    return 0;
}