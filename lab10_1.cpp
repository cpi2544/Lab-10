#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double  money , perrate , pay; 
	cout << "Enter initial loan: ";
	cin >> money;
	cout << "Enter interest rate per year (%): ";
	cin >> perrate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;


	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";

	for (int E = 1; true ; E++){
		double rate = (money*perrate)/100.0; 
		double total = money + rate;
		double newb = total - pay;
	if (total < pay){
		pay = total;
	}
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << E; 
	cout << setw(13) << left << money;
	cout << setw(13) << left << rate;
	cout << setw(13) << left << total;
	cout << setw(13) << left << pay;
	if (newb > 0){
	cout << setw(13) << left << newb;
	}
		if (newb <= 0){
		newb = 0;
	cout << setw(13) << left << newb;
		break;
		}

	cout << "\n";	
	money = newb;
	}
	
	return 0;


}