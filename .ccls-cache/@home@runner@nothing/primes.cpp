#include <cmath>
#include <iostream>
using namespace std;

bool is_prime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

void print_primes_from_input(int n) {
  int count = 0;
  int num = n + 1;
  while (count < 10) {
    if (is_prime(num)) {
      cout << num << " ";
      count++;
    }
    num++;
  }
}

int main() {
  int input_num;
  cout << "Enter a number: ";
  cin >> input_num;

  cout << "First 10 primes from " << input_num << " are: ";
  print_primes_from_input(input_num);

  return 0;
}
