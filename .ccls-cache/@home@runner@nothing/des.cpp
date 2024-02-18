class Class1 {
public:
  Class1() { cout << "Constructor for Class1" << endl; }

  ~Class1() { cout << "Destructor for Class1" << endl; }
};

class Class2 {
public:
  Class1 obj;

  Class2() { cout << "Constructor for Class2" << endl; }

  ~Class2() { cout << "Destructor for Class2" << endl; }
};
// commented