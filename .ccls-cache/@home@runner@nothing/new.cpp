#include <iostream>
using namespace std;

void Prime() {
    for (int i = 2; i < 1000; i++) {
        bool isPrime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    return;
}