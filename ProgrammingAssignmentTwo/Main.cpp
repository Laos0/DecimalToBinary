#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <cmath>


using namespace std;

void intro();
void decToBinary(int n);
void baseFinder(int amt, int baseNumber, string arrNum);

int main() {


	//intro();
	//cout << num << endl;
	baseFinder(60, 16, "");



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

void baseFinder(int v, int b, string arrNum) {
	string rem2 = "";

	bool greaterThanNine = false;

	// Determine f the recursive should force stop
	bool errorFlag = false;

	// Two variables divide and mod
	int quot = v / b;
	int rem = v % b;

	// A quotient > 0 means there is a chance for another recursive
	// therefore, quotient of zer stops the recursive 
	if (quot > 0) {
	

		// hexa conversion when you get a remainder of 10 or higher 
		if (rem > 9) {

			greaterThanNine = true;
			//the map of hex characters we can get using conversion
			vector<string> hexArray;
			hexArray.push_back("A");
			hexArray.push_back("B");
			hexArray.push_back("C");
			hexArray.push_back("D");
			hexArray.push_back("E");
			hexArray.push_back("F");
			hexArray.push_back("G");
			hexArray.push_back("H");
			hexArray.push_back("I");
			hexArray.push_back("J");
			hexArray.push_back("K");
			hexArray.push_back("L");
			hexArray.push_back("M");
			hexArray.push_back("N");
			hexArray.push_back("O");
			hexArray.push_back("P");
			hexArray.push_back("Q");
			hexArray.push_back("R"); 
			hexArray.push_back("S");
			hexArray.push_back("T");
			hexArray.push_back("U");
			hexArray.push_back("V");
			hexArray.push_back("W");
			hexArray.push_back("X");
			hexArray.push_back("Y");
			hexArray.push_back("Z");

			int index = rem - 10;

			// allow up to 36 base 
			// meaning over the limit, this occurs when we use 37 base	or higher
			if (index >= 36) {
				errorFlag = true; //set a quit flag to force stop early end
			}
			else {
				//convert remainder of 10 or higher to its coresponding letter
				rem2 = to_string(rem);
				rem2 = hexArray.at(index);
			}
			
		}
		
		if (greaterThanNine) {
			//store the remainder
			//the remainder could be 0-9 or hex character A-Z
			//where A = 10, B = 11, ... Z = 35
			arrNum.push_back(rem2.c_str);

		}
		else {
			arrNum.push_back(rem);
		}

		//if there was an error, stop the recursive early
		if (!errorFlag) {
			//if no error, do another recursive

			cout << arrNum << endl;

			baseFinder(floor(quot), b, arrNum);
		}
		else {
			cout << "error" << endl;
		}
	}
}

