#include <iostream>
using namespace std;

int main() {
	// temperature units
	double celcius = 0.0;
	double farhenheit = 0.0;
	double kelvin = 0.0;

	// user input variables
	double inputCelcius = 0.0;
	double inputFarhenheit =0.0;
	double inputKelvin =0.0;

	char userInput;
	cout << "Enter the temperature Unit: [C]elcius, [F]arhenheit, [K]elvin:" << endl;
	cin >> userInput;

	if (userInput == 'c') {
		cout << "Enter the temperature in Celcius: \n";
		cin >> inputCelcius;
		cout << "Your temperature in Farhenheit is " << (inputCelcius - 32) * (5.0 / 9.0) << endl;
		cout << "Your temperature in Kelvin is " << (inputCelcius + 273.15) << endl;
	}




}
