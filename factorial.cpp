#include <iostream>

using namespace std;

class Factorial {
private:
	int result;
public:
	int getNum(int num) {
		this->result = factorial(num);
		return this->result;
	}
	int printUpTo(int num) {
		for (int i = 0; i < num; i++) {
			cout << "fac(" << i << ") = " << factorial(i) << endl;
		}
	}
	

	int factorial(int num) {
		if (num < 0)
			return 0;
		if (num == 0 || num == 1)
			return 1;
		else
			return num * factorial(num - 1); 
	}

};

int main() { 
	Factorial f;
	cout << f.getNum(2) << endl;
	f.printUpTo(10);
	return 0;
}

