
//swapping two numbers
#include <iostream>
using namespace std;

void swapNum(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}
int main()
{
	int firstNum = 20;
	int secondNum = 26;
	cout << firstNum << secondNum<<"\n";

	swapNum(firstNum, secondNum);
	cout << "after swapped \n";
	
		cout << firstNum << secondNum;


	return 0;
}

