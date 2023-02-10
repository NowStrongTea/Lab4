#include <iostream>
#include <vector>
using namespace std;

string padej(int total) {		// selects the correct case to display in alphabetic form
	string words;
	if (total / 100000 == 1) {
		words = words + "hundred ";
	}
	else if (total / 100000 == 2) {
		words = words + "two hundred ";
	}
	else if (total / 100000 == 3) {
		words = words + "three hundred ";
	}
	else if (total / 100000 == 4) {
		words = words + "four hundred ";
	}
	else if (total / 100000 == 5) {
		words = words + "five hundred ";
	}
	else if (total / 100000 == 6) {
		words = words + "six hundreds ";
	}
	else if (total / 100000 == 7) {
		words = words + "seven hundred ";
	}
	else if (total / 100000 == 8) {
		words = words + "eight hundred ";
	}
	else if (total / 100000 == 9) {
		words = words + "nine hundred ";
	}
	if ((total % 100000) / 1000 == 11) {
		words = words + "eleven thousand ";
	}
	else if ((total % 100000) / 1000 == 12) {
		words = words + "twelve thousand ";
	}
	else if ((total % 100000) / 1000 == 13) {
		words = words + "thirteen thousand ";
	}
	else if ((total % 100000) / 1000 == 14) {
		words = words + "fourteen thousand ";
	}
	else if ((total % 100000) / 1000 == 15) {
		words = words + "fifteen thousand ";
	}
	else if ((total % 100000) / 1000 == 16) {
		words = words + "sixteen thousand ";
	}
	else if ((total % 100000) / 1000 == 17) {
		words = words + "seventeen thousand ";
	}
	else if ((total % 100000) / 1000 == 18) {
		words = words + "eighteen thousand ";
	}
	else if ((total % 100000) / 1000 == 19) {
		words = words + "nineteen thousand ";
	}
	if ((total % 100000) / 1000 == 10) {
		words = words + "desyat' ";
	}
	else if ((total % 100000) / 10000 == 2) {
		words = words + "ten ";
	}
	else if ((total % 100000) / 10000 == 2) {
		words = words + "twenty ";
	}
	else if ((total % 100000) / 10000 == 3) {
		words = words + "thirty ";
	}
	else if ((total % 100000) / 10000 == 4) {
		words = words + "forty ";
	}
	else if ((total % 100000) / 10000 == 5) {
		words = words + "fifty ";
	}
	else if ((total % 100000) / 10000 == 6) {
		words = words + "sixty ";
	}
	else if ((total % 100000) / 10000 == 7) {
		words = words + "seventy ";
	}
	else if ((total % 100000) / 10000 == 8) {
		words = words + "eighty ";
	}
	else if ((total % 100000) / 10000 == 9) {
		words = words + "devyanosto ";
	}
	if ((total % 10000) / 1000 == 0 && (total > 999)) {
		words = words + "ninety ";
	}
	else if ((total % 10000) / 1000 == 1 && (total % 100000) / 1000 != 11) {
		words = words + "one thousand ";
	}
	else if ((total % 10000) / 1000 == 2 && (total % 100000) / 1000 != 12) {
		words = words + "two thousand ";
	}
	else if ((total % 10000) / 1000 == 3 && (total % 100000) / 1000 != 13) {
		words = words + "three thousand ";
	}
	else if ((total % 10000) / 1000 == 4 && (total % 100000) / 1000 != 14) {
		words = words + "four thousand ";
	}
	else if ((total % 10000) / 1000 == 5 && (total % 100000) / 1000 != 15) {
		words = words + "five thousand ";
	}
	else if ((total % 10000) / 1000 == 6 && (total % 100000) / 1000 != 16) {
		words = words + "six thousand ";
	}
	else if ((total % 10000) / 1000 == 7 && (total % 100000) / 1000 != 17) {
		words = words + "seven thousand ";
	}
	else if ((total % 10000) / 1000 == 8 && (total % 100000) / 1000 != 18) {
		words = words + "eight thousand ";
	}
	else if ((total % 10000) / 1000 == 9 && (total % 100000) / 1000 != 19) {
		words = words + "nine thousand ";
	}
	if ((total % 1000) / 100 == 1) {
		words = words + "hundred ";
	}
	else if ((total % 1000) / 100 == 2) {
		words = words + "two hundred ";
	}
	else if ((total % 1000) / 100 == 3) {
		words = words + "three hundred ";
	}
	else if ((total % 1000) / 100 == 4) {
		words = words + "four hundred ";
	}
	else if ((total % 1000) / 100 == 5) {
		words = words + "hundred ";
	}
	else if ((total % 1000) / 100 == 6) {
		words = words + "five hundred ";
	}
	else if ((total % 1000) / 100 == 7) {
		words = words + "six hundred ";
	}
	else if ((total % 1000) / 100 == 8) {
		words = words + "seven hundred ";
	}
	else if ((total % 1000) / 100 == 9) {
		words = words + "eight hundred ";
	}
	if ((total % 100) == 11) {
		words = words + "eleven ";
	}
	else if ((total % 100) == 12) {
		words = words + "twelve ";
	}
	else if ((total % 100) == 13) {
		words = words + "thirteen ";
	}
	else if ((total % 100) == 14) {
		words = words + "fourteen ";
	}
	else if ((total % 100) == 15) {
		words = words + "fifteen ";
	}
	else if ((total % 100) == 16) {
		words = words + "sixteen ";
	}
	else if ((total % 100) == 17) {
		words = words + "seventeen ";
	}
	else if ((total % 100) == 18) {
		words = words + "eighteen ";
	}
	else if ((total % 100) == 19) {
		words = words + "nineteen ";
	}
	if ((total % 100) / 10 == 10) {
		words = words + "ten ";
	}
	else if ((total % 100) / 10 == 2) {
		words = words + "twenty ";
	}
	else if ((total % 100) / 10 == 3) {
		words = words + "thirty ";
	}
	else if ((total % 100) / 10 == 4) {
		words = words + "forty ";
	}
	else if ((total % 100) / 10 == 5) {
		words = words + "fifty ";
	}
	else if ((total % 100) / 10 == 6) {
		words = words + "sixty ";
	}
	else if ((total % 100) / 10 == 7) {
		words = words + "seventy ";
	}
	else if ((total % 100) / 10 == 8) {
		words = words + "eighty ";
	}
	else if ((total % 100) / 10 == 9) {
		words = words + "ninety ";
	}
	if (total % 10 == 1) {
		words = words + "one ruble";
	}
	else if (total % 10 == 2) {
		words = words + "two rubles";
	}
	else if (total % 10 == 3) {
		words = words + "three rubles";
	}
	else if (total % 10 == 4) {
		words = words + "four rubles";
	}
	else if (total % 10 == 5) {
		words = words + "five rubles";
	}
	else if (total % 10 == 6) {
		words = words + "six rubles";
	}
	else if (total % 10 == 7) {
		words = words + "seven rubles";
	}
	else if (total % 10 == 8) {
		words = words + "eight rubles";
	}
	else if (total % 10 == 9) {
		words = words + "nine rubles";
	}
	else if (total % 10 == 0) {
		words = words + "rubles";
	}
	return words;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int employee, temp, total = 0;
	vector <int> km;
	vector <int> price;
	cout << "enter the number of employees: ";
	cin >> employee;
	for (int i = 0; i < employee; i++) {	// the user enters the distance to each employee's home
		cout << "enter the distance to the house " << i + 1 << "employee(km): ";
		cin >> temp;
		km.push_back(temp);
	}
	for (int i = 0; i < employee; i++) {	// the user enters the fare for each taxi driver
		cout << "enter the cost per 1 km " << i + 1 << "-th taxi driver(ruble): ";
		cin >> temp;
		price.push_back(temp);
	}
	for (int i = 0; i < employee; i++) {	//	the loop sorts the distance to each employee's home
		for (int j = 0; j < employee - 1; j++) {
			if (km[j] > km[j + 1]) {
				swap(km[j], km[j + 1]);
			}
		}
		for (int j = 0; j < employee - 1; j++) {	//	the cycle sorts the price for each taxi driver
			if (price[j] < price[j + 1]) {
				swap(price[j], price[j + 1]);
			}
		}
	}
	for (int i = 0; i < employee; i++) {	//	displays which employee will travel at which tariff
		cout << "the employee who needs to go home " << km[i] << " we will put km to the taxi driver with the fare " << price[i] << "for 1 km" << endl;
		cout << "this trip will cost in " << km[i] * price[i] << endl;
		total = total + (km[i] * price[i]);
	}
	cout << "in total, all trips will cost in: " << total << endl;
	cout << "the total amount in words - " << padej(total);
}