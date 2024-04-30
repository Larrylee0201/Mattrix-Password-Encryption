//Side project
//Author: Larry Lee
//Date: 4/28/2024
//Description: This program is to encrypt the number that you enter.

#include <iostream>
#include <cmath>

using namespace std;

//Function Prototype
double EncodedPassword;
double A;
double B;
double C;
double D;
double a;
double b;
double c;
double d;

//Result
double A1;
double B1;
double C1;
double D1;

//Mattrix Definition
double Determine;
double Coefficient;

//Password Decryption
double A2;
double B2;
double C2;
double D2;
double a2;
double b2;
double c2;
double d2;
double a3;
double b3;
double c3;
double d3;
double a4;
double b4;
double c4;
double d4;
double Password;
double A3;
double B3;
double C3;
double D3;
int Password1;
int EncodedPassword1;

//Password Encryption
void PasswordEncryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double &b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient, double &a2, double &b2, double &c2, double &d2);

//Password Decryption
void PasswordDecryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double&b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient, double &A2, double &B2, double &C2, double &D2, double &Password, double &A3, double &B3, double &C3, double &D3, double &a3, double &b3, double &c3, double &d3, double &a4, double &b4, double &c4, double &d4, int &Password1, int &EncodedPassword1);

////Determine if password is true
bool isPassword(double password);
//Determine if Determine number is 0
bool isDeterminenumber(double Determine);

int main() {
	cout << "//2x2 * 2x2 Matrix Multiplication" << endl;
	cout << "The format will be like this: [A B] [a b]\n";
	cout << "The format will be like this: [C D] [c d]\n\n";

	cout << "The answer will be like this: [A1 B1]\n";
	cout << "The answer will be like this: [C1 D1]\n\n";

	cout << "Enter 4 numbers password ";
	PasswordEncryption(EncodedPassword, A, B, C, D, a, b, c, d, A1, B1, C1, D1, Determine, Coefficient, a2, b2, c2, d2);//Password Encryption
	if (isDeterminenumber(true)){
		cout << "Invalid Password." << endl;
	}else{
		cout << "\n\nEnter your password ";
		PasswordDecryption(EncodedPassword, A, B, C, D, a, b, c, d, A1, B1, C1, D1, Determine, Coefficient, A2, B2, C2, D2, Password, A3, B3, C3, D3, a3, b3, c3, d3, a4, b4, c4, d4, Password1, EncodedPassword1);//Password Decryption

		if (isPassword(true)){
			cout << "\n\nPassword is correct!";
		}else{
			cout << "\n\nPassword is incorrect! Try again.";
		}
	}
	
	return 0;
}

//function definition
void PasswordEncryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double &b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient, double &a2, double &b2, double &c2, double &d2){
	Coefficient = 0;
	cout << "\nEnter the first number: ";
	cin >> A;
	
	cout << "Enter the second number: ";
	cin >> B;

	cout << "Enter the third number: ";
	cin >> C;

	cout << "Enter the fourth number: ";
	cin >> D;

	a = D;
	b = -B;
	c = -C;
	d = A;

	Coefficient = 1/((a * d) - (b * c));

	a2 = a * Coefficient;
	cout << a2;
	b2 = b * Coefficient;
	cout << b2;
	c2 = c * Coefficient;
	cout << c2;
	d2 = d * Coefficient;
	cout << d2;
	
	A1 = (A * a2) + (B * c2);
	B1 = (A * b2) + (B * d2);
	C1 = (C * a2) + (D * c2);
	D1 = (C * b2) + (D * d2);

	EncodedPassword = A1 + B1 + C1 + D1;
	EncodedPassword1 = int(EncodedPassword);
	cout << EncodedPassword1;
}

void PasswordDecryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double&b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient, double &A2, double &B2, double &C2, double &D2, double &Password, double &A3, double &B3, double &C3, double &D3, double &a3, double &b3, double &c3, double &d3, double &a4, double &b4, double &c4, double &d4, int &Password1, int &EncodedPassword1){
	Coefficient = 0;
	cout << "\nEnter the first number: ";
	cin >> A2;

	cout << "Enter the second number: ";
	cin >> B2;

	cout << "Enter the third number: ";
	cin >> C2;

	cout << "Enter the fourth number: ";
	cin >> D2;

	a3 = D2;
	b3 = -B2;
	c3 = -C2;
	d3 = A2;

	Coefficient = 1/((a3 * d3) - (b3 * c3));

	a4 = a3 * Coefficient;
	cout << a4;
	b4 = b3 * Coefficient;
	cout << b4;
	c4 = c3 * Coefficient;
	cout << c4;
	d4 = d3 * Coefficient;
	cout << d4;
	
	A3 = (A2 * a4) + (B2 * c4);
	B3 = (A2 * b4) + (B2 * d4);
	C3 = (C2 * a4) + (D2 * c4);
	D3 = (C2 * b4) + (D2 * d4);

	Password = A3 + B3 + C3 + D3;
	Password1 = int(Password);
	cout << Password1;

}

//Determine if Determine number is 0
bool isDeterminenumber(double Determine){
	Determine = (a * d) - (b * c);
	if (Determine == 0){
		return true;
	}
	return false;
}

//Determine if password is true
bool isPassword(double Password){
	if (Password1 == EncodedPassword1 && A2 == A & B2 == B & C2 == C && D2 == D){
		return true;
	}
	
	return false;
}
