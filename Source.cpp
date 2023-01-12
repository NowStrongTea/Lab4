#include <iostream>
#include <vector>
using namespace std;

string padej(int total) {		// Podbiraet pravil'nyj padezh dlya otobrazheniya summy v bukvennom vide
	string words;
	if (total / 100000 == 1) {
		words = words + "Sto ";
	}
	else if (total / 100000 == 2) {
		words = words + "Dvesti ";
	}
	else if (total / 100000 == 3) {
		words = words + "Trista ";
	}
	else if (total / 100000 == 4) {
		words = words + "CHetyresta ";
	}
	else if (total / 100000 == 5) {
		words = words + "Pyat'sot ";
	}
	else if (total / 100000 == 6) {
		words = words + "SHest'sot ";
	}
	else if (total / 100000 == 7) {
		words = words + "Sem'sot ";
	}
	else if (total / 100000 == 8) {
		words = words + "Vosem'sot ";
	}
	else if (total / 100000 == 9) {
		words = words + "Devyat'sot ";
	}
	if ((total % 100000) / 1000 == 11) {
		words = words + "odinnadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 12) {
		words = words + "dvenadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 13) {
		words = words + "trinadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 14) {
		words = words + "chetyrnadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 15) {
		words = words + "pyatnadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 16) {
		words = words + "shestnadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 17) {
		words = words + "semnadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 18) {
		words = words + "vosemnadcat' tysyach ";
	}
	else if ((total % 100000) / 1000 == 19) {
		words = words + "devyatnadcat' tysyach ";
	}
	if ((total % 100000) / 1000 == 10) {
		words = words + "desyat' ";
	}
	else if ((total % 100000) / 10000 == 2) {
		words = words + "dvadcat' ";
	}
	else if ((total % 100000) / 10000 == 2) {
		words = words + "dvadcat' ";
	}
	else if ((total % 100000) / 10000 == 3) {
		words = words + "tridcat' ";
	}
	else if ((total % 100000) / 10000 == 4) {
		words = words + "sorok ";
	}
	else if ((total % 100000) / 10000 == 5) {
		words = words + "pyat'desyat ";
	}
	else if ((total % 100000) / 10000 == 6) {
		words = words + "shest'desyat ";
	}
	else if ((total % 100000) / 10000 == 7) {
		words = words + "sem'desyat ";
	}
	else if ((total % 100000) / 10000 == 8) {
		words = words + "vosem'desyat ";
	}
	else if ((total % 100000) / 10000 == 9) {
		words = words + "devyanosto ";
	}
	if ((total % 10000) / 1000 == 0 && (total > 999)) {
		words = words + "tysyach ";
	}
	else if ((total % 10000) / 1000 == 1 && (total % 100000) / 1000 != 11) {
		words = words + "odna tysyacha ";
	}
	else if ((total % 10000) / 1000 == 2 && (total % 100000) / 1000 != 12) {
		words = words + "dve tysyachi ";
	}
	else if ((total % 10000) / 1000 == 3 && (total % 100000) / 1000 != 13) {
		words = words + "tri tysyachi ";
	}
	else if ((total % 10000) / 1000 == 4 && (total % 100000) / 1000 != 14) {
		words = words + "chetyre tysyachi ";
	}
	else if ((total % 10000) / 1000 == 5 && (total % 100000) / 1000 != 15) {
		words = words + "pyat' tysyach ";
	}
	else if ((total % 10000) / 1000 == 6 && (total % 100000) / 1000 != 16) {
		words = words + "shest' tysyach ";
	}
	else if ((total % 10000) / 1000 == 7 && (total % 100000) / 1000 != 17) {
		words = words + "sem' tysyach ";
	}
	else if ((total % 10000) / 1000 == 8 && (total % 100000) / 1000 != 18) {
		words = words + "vosem' tysyach ";
	}
	else if ((total % 10000) / 1000 == 9 && (total % 100000) / 1000 != 19) {
		words = words + "devyat' tysyach ";
	}
	if ((total % 1000) / 100 == 1) {
		words = words + "sto ";
	}
	else if ((total % 1000) / 100 == 2) {
		words = words + "dvesti ";
	}
	else if ((total % 1000) / 100 == 3) {
		words = words + "trista ";
	}
	else if ((total % 1000) / 100 == 4) {
		words = words + "chetyresta ";
	}
	else if ((total % 1000) / 100 == 5) {
		words = words + "pyat'sot ";
	}
	else if ((total % 1000) / 100 == 6) {
		words = words + "shest'sot ";
	}
	else if ((total % 1000) / 100 == 7) {
		words = words + "sem'sot ";
	}
	else if ((total % 1000) / 100 == 8) {
		words = words + "vosem'sot ";
	}
	else if ((total % 1000) / 100 == 9) {
		words = words + "devyat'sot ";
	}
	if ((total % 100) == 11) {
		words = words + "odinnadcat' ";
	}
	else if ((total % 100) == 12) {
		words = words + "dvenadcat' ";
	}
	else if ((total % 100) == 13) {
		words = words + "trinadcat' ";
	}
	else if ((total % 100) == 14) {
		words = words + "chetyrnadcat' ";
	}
	else if ((total % 100) == 15) {
		words = words + "pyatnadcat' ";
	}
	else if ((total % 100) == 16) {
		words = words + "shestnadcat' ";
	}
	else if ((total % 100) == 17) {
		words = words + "semnadcat' ";
	}
	else if ((total % 100) == 18) {
		words = words + "vosemnadcat' ";
	}
	else if ((total % 100) == 19) {
		words = words + "devyatnadcat' ";
	}
	if ((total % 100) / 10 == 10) {
		words = words + "desyat' ";
	}
	else if ((total % 100) / 10 == 2) {
		words = words + "dvadcat' ";
	}
	else if ((total % 100) / 10 == 3) {
		words = words + "tridcat' ";
	}
	else if ((total % 100) / 10 == 4) {
		words = words + "sorok ";
	}
	else if ((total % 100) / 10 == 5) {
		words = words + "pyat'desyat ";
	}
	else if ((total % 100) / 10 == 6) {
		words = words + "shest'desyat ";
	}
	else if ((total % 100) / 10 == 7) {
		words = words + "sem'desyat ";
	}
	else if ((total % 100) / 10 == 8) {
		words = words + "vosem'desyat ";
	}
	else if ((total % 100) / 10 == 9) {
		words = words + "devyanosto ";
	}
	if (total % 10 == 1) {
		words = words + "odin rubl'";
	}
	else if (total % 10 == 2) {
		words = words + "dva rublya";
	}
	else if (total % 10 == 3) {
		words = words + "tri rublya";
	}
	else if (total % 10 == 4) {
		words = words + "chetyre rublya";
	}
	else if (total % 10 == 5) {
		words = words + "pyat' rublej";
	}
	else if (total % 10 == 6) {
		words = words + "shest' rublej";
	}
	else if (total % 10 == 7) {
		words = words + "sem' rublej";
	}
	else if (total % 10 == 8) {
		words = words + "vosem' rublej";
	}
	else if (total % 10 == 9) {
		words = words + "devyat' rublej";
	}
	else if (total % 10 == 0) {
		words = words + "rublej";
	}
	return words;
}
int main() {
	setlocale(LC_ALL, "Russian");
	int employee, temp, total = 0;
	vector <int> km;
	vector <int> price;
	cout << "Vvedite kolichestvo sotrudnikov kotoryh nuzhno razvesti: ";		// Pol'zovatel' vvodit kolichestvo sotrudnikov
	cin >> employee;
	for (int i = 0; i < employee; i++) {	// Pol'zovatel' vvodit rasstoyanie dlya doma kazhdogo sotrudnika
		cout << "Vvedite rasstoyanie do doma " << i + 1 << "-go sotrudnika(km): ";
		cin >> temp;
		km.push_back(temp);
	}
	for (int i = 0; i < employee; i++) {	// Pol'zovatel' vvodit tarif u kazhdogo taksista
		cout << "Vvedite stoimost' za 1 km u " << i + 1 << "-go taksista(rubli): ";
		cin >> temp;
		price.push_back(temp);
	}
	for (int i = 0; i < employee; i++) {	//	Cikl sortiruet rasstoyanie do doma kazhdogo sotrudnika
		for (int j = 0; j < employee - 1; j++) {
			if (km[j] > km[j + 1]) {
				swap(km[j], km[j + 1]);
			}
		}
		for (int j = 0; j < employee - 1; j++) {	//	Cikl sortiruet ceny u kazhdogo taksista
			if (price[j] < price[j + 1]) {
				swap(price[j], price[j + 1]);
			}
		}
	}
	for (int i = 0; i < employee; i++) {	//	Vyvodit kakoj sotrudnik po kakomu tarifu poedet
		cout << "Sotrudnika, kotoromu ekhat' do doma " << km[i] << " km, posadim k taksistu s tarifom " << price[i] << " za 1 km" << endl;
		cout << "Eta poezdka obojdetsya v " << km[i] * price[i] << endl;
		total = total + (km[i] * price[i]);
	}
	cout << "Summarno vse poezdki obojdutsya v: " << total << endl;	// Vyvodit summarnyj schet za vse poezdki
	cout << "Itogovaya summa slovami - " << padej(total);	// Vyvodit summarnyj schet za vse poezdki slovami
}