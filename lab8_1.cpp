#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan, pb, intr, tt, pm, bl;
	int year=0;
	cout << "Enter initial loan: ";
	cin >> bl;
	cout << "Enter interest rate per year (%): ";
	cin >> loan;
	cout << "Enter amount you can pay per year: ";
	cin >> pm;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	do{ 
	pb=bl;
	intr = pb*loan/100;
	tt = pb+intr;
	if (tt<pm) pm=tt;
	bl=tt-pm;
	year++;
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << pb;
	cout << setw(13) << left << intr;
	cout << setw(13) << left << tt;
	cout << setw(13) << left << pm;
	cout << setw(13) << left << bl;
	cout << "\n";	
    }while(bl != 0);
	return 0;
}