#include <iostream>

using namespace std;

void decToBinary(int n);

int main() {

	int num = 0;
	decToBinary(num);

	cout << "Enter number" << endl;;
	cin >> num;

	if (num < 0)
	{
		cout << endl << "Error" << endl << endl;
	}
	else
	{
		cout << endl << "Decimal " << num << endl;
		decToBinary(num);
		cout << endl << endl;
	}

	system("pause");
	return 0;

}

void decToBinary(int n) {
	if (n == 0 || n == 1) {
		cout << n << endl;
	}
	else {
		decToBinary(n / 2);
		cout << n % 2 << endl;
	}
}