#include <iostream>
using namespace std;

/*ZADATAK: Napišite program za izračunavanje indeksa tjelesne mase (BMI) te ispišite
odgovarajuće poruke. Indeks tjelesne mase se računa po formuli:
BodyMassIndex=
2
visin a
masa
. Masa se izražava u kilogramima, a visina u metrima. Ukoliko
vam je indeks tjelesne mase u rasponu od 20 do 25 vaša tjelesna masa je u skladu s
vašom visinom, ukoliko je vaš BMI manji od 20 pothranjeni ste, a ukoliko je veći od 25
naginjete gojaznosti.*/

int main()
{
	double BMI, masa, visina;

	cout << "Enter your mase in 'kg': " << endl;
	cin >> masa;

	cout << "Enter your height in 'cm': " << endl;
	cin >> visina;

	BMI = masa / (visina, 2);

	cout << "Your BMI is: " << BMI << endl; 

	if (20 <= BMI <= 25)
		cout << "Your weight is in line with your height" << endl;
	else
	{
		if (BMI < 20)
			cout << "You are malnourished! " << endl;
		else
			cout << "You are prone to obesity, take care of yourself! " << endl;
		cout << "Your BMI is: " << BMI << endl;
	}
	
	return 0;
}