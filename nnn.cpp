#include <iostream>
using namespace std;

int findGreater(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x = 5;
    int y = 10;
    cout << "The greater integer is: " << findGreater(x, y) << endl;
    return 0;
}