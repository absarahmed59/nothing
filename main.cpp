
#include <iostream>
using namespace std;

class Birthday {
public:
  int day;
  int month;
  int year;

  Birthday(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
  }

  void printDateOfBirth() {
    cout << "Date of Birth: " << day << "/" << month << "/" << year << endl;
  }
};

int main() {
  Birthday b(11, 02, 2004);
  b.printDateOfBirth();
  return 0;
}
