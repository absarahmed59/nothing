#include <iostream>
using namespace std;

class Person {
private:
  string name;
  int age;

public:
  Person(string n, int a) : name(n), age(a) {}

  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

int main() {
  Person p("Alice", 30);
  p.printInfo();
  return 0;
}