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
		cout << "Your temperature in Farhenheit is " << ((inputCelcius * 9 / 5) + 32) << endl;
		cout << "Your temperature in Kelvin is " << (inputCelcius + 273.15) << endl;
	}

	else if (userInput == 'f') {
		cout << "Enter the temperature in Farhenheit: \n";
		cin >> inputFarhenheit;
		cout << "Your temperature in Celcius is " << ((inputFarhenheit - 32) * 5 / 9) << endl;
		cout << "Your temperature in Kelvin is " << ((inputFarhenheit - 32) * 5 / 9) + 273.15 << endl;

	}


}
