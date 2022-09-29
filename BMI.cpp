#include <iostream>
using namespace std;

int main()
{
	float beratBadan;
	float tinggiBadan;
	float BMI;
	
	cout << "Program untuk mencari Indeks Massa Tubuh" << endl;
	cout << "Masukkan Berat Badan (kg): ";
	cin >> beratBadan;
	cout << "Masukkan Tinggi Badan (cm): ";
	cin >> tinggiBadan;
	
	tinggiBadan = tinggiBadan / 100;
	BMI = beratBadan/(tinggiBadan*tinggiBadan);
	cout << "BMI anda adalah " << BMI << endl;
	if (BMI < 18.5)
		cout << "Berat Badan Anda Kurang";
	else if (BMI > 18.5 && BMI < 24.9)
		cout << "Berat Badan Anda Ideal";
	else if (BMI > 25 && BMI < 29.9)
		cout << "Berat Badan Anda Berlebih";
	else if (BMI > 30)
		cout << "Anda Obesitas";
	else
		cout << "Input error";
	return 0;
}
