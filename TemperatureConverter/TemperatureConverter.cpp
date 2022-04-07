#include <iostream>
using namespace std;

int main() {
	// user input variables
	double inputCelcius = 0.0;
	double inputFahrenheit =0.0;
	double inputKelvin =0.0;

	char userInput;
	cout << "Enter the temperature Unit: [C]elcius, [F]ahrenheit, [K]elvin:" << endl;
	cin >> userInput;

	if (userInput == 'c') {
		cout << "Enter the temperature in Celcius: \n";
		cin >> inputCelcius;
		cout << "Your temperature in Fahrenheit is " << ((inputCelcius * 9 / 5) + 32) << "\370F" << endl;
		cout << "Your temperature in Kelvin is " << (inputCelcius + 273.15) << " K" << endl;
	}

	else if (userInput == 'f') {
		cout << "Enter the temperature in Fahrenheit: \n";
		cin >> inputFahrenheit;
		cout << "Your temperature in Celcius is " << ((inputFahrenheit - 32) * 5 / 9) << "\370C" << endl;
		cout << "Your temperature in Kelvin is " << ((inputFahrenheit - 32) * 5 / 9) + 273.15 << " K" << endl;
	}

	else if (userInput == 'k') {
		cout << "Enter the temperature in Kelvin: \n";
		cin >> inputKelvin;
		cout << "Your temperature in Celcius is " << (inputKelvin - 273.15) << "\370C" << endl;
		cout << "Your temperature in Fahrenheit is " << ((inputKelvin - 273.15) * 9 / 5 + 32) << "\370F" << endl;
	}

	else {
		cout << "Invalid input. Please try again. \n";
		main();
	}

	return 0;
}
