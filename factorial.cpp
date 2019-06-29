#include <iostream>

using namespace std;

class Factorial {
public:
	int getNum(int num) {
		if (num < 0)
			return 0;
		if (num == 0 || num == 1)
			return 1;
		else
			return getNum(num - 1) + getNum(num - 2); 
	}

}

int main() { 
	Factorial f;
	cout << f.getNum(2) << endl;
	return 0;
}

