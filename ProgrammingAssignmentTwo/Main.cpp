#include <iostream>

using namespace std;

void intro();
void decToBinary(int n);
void baseFinder(int amt, int baseNumber);
int main() {

	int num = 0;

	intro();
	//baseFinder(10, 10);



	/* ALLLL BELOW: CONVERTING DECIMALS TO BINARY 
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
		cout << endl << "The binary for the decimal: " << num << endl;
		decToBinary(num);
		cout << endl << endl;
	}
	*/
	system("pause");
	return 0;

}
void intro() {
	int num = 0;
	int baseNum;
	cout << "Enter a nonnegative integer: " << endl;
	cin >> num;

	if (num < 0) {
		intro();
	}
	
	cout << "Enter the desired base between 2 and 36." << endl;
	cin >> baseNum;

	if(baseNum < 2 || baseNum > 36){
		cout << "Stop!" << endl;
	}
	
	else {
		decToBinary(num);
		//cout << "Good Job!" << endl;
	}
	

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

void baseFinder(int amt, int baseNumber) {
	int result = amt / baseNumber;
	cout << amt << endl;
	if (result > 0) {
		baseFinder(amt, baseNumber);
	}
}
