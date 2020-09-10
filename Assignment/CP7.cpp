// WAP to keep a track of number of objects created, number of
// objects destroyed and number of active objects in a program.

// C++ program to Count the number of objects
// using the Static member function
#include <iostream>
using namespace std;

class Test {
  static int count;
	int num;

public:
	Test()
	{
  	num = ++count;
	}

	~Test()
	{
	 --count;
	}

	void printNumber(void)
	{
		cout << "Object number :" << num << "\n";
	}

	static void printCount(void)
	{
		cout << "count:" << count<< "\n";
	}
};

int Test::count;

int main()
{
	Test t1, t2;
	Test::printCount();

	Test t3;
  Test::printCount();

	t1.printNumber();
	t2.printNumber();
	t3.printNumber();
	return 0;
}
