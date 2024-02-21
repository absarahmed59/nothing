int binaryToHexadecimal(int binaryNumber) {
  // Method to convert binary number to hexadecimal
  int tempBinary = binaryNumber;
  int decimalNumber = 0, i = 0, remainder;
  while (tempBinary != 0) {
    remainder = tempBinary % 10;
    tempBinary /= 10;
    decimalNumber += remainder * pow(2, i);
    ++i;
  }

  i = 0;
  char hexadecimalNumber[100];
  while (decimalNumber != 0) {
    int temp = 0;
    temp = decimalNumber % 16;
    if (temp < 10) {
      hexadecimalNumber[i] = temp + 48;
      ++i;
    } else {
      hexadecimalNumber[i] = temp + 55;
      ++i;
    }
    decimalNumber /= 16;
  }

  cout << "Hexadecimal Number: ";
  for (int j = i - 1; j >= 0; j--) {
    cout << hexadecimalNumber[j];
  }
  cout << endl;
}