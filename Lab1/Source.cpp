#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class sofer {
public:
	char *nume, *adresa;
	int cnp, varsta;
	void citire();
	void afisare();


};
void sofer::citire()
{
	char n[20], adr[20];
	int codn, varst;
	cout << "Nume: ";	cin.getline(n, sizeof(n));
	cout << "Adresa: "; cin >> adr;
	cout << "CNP: ";	cin >> codn;
	cout << "Varsta: "; cin >> varst;
	cin.ignore();
	nume = new char(sizeof(n) + 1);
	adresa = new char(sizeof(adr) + 1);
	strcpy_s(nume, sizeof(n), n);
	strcpy_s(adresa, sizeof(adr), adr);
	cnp = codn;
	varsta = varst;



}
void sofer::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Adresa: " << adresa << endl;
	cout << "CNP: " << cnp << endl;
	cout << "Varsta: " << varsta << endl;

}
int main()
{
	sofer sof1, sof2;
	sof1.citire();
	sof2.citire();
	sof1.afisare();
	sof2.afisare();
	getch();
	return 0;
}


