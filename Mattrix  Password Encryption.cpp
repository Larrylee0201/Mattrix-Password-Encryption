//Side project
//Author: Larry Lee
//Date: 4/28/2024
//Description: This program is to encrypt and check the password that you enter.

#include <iostream>
#include <cmath>
#include <limits>

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
double Coefficient1;
double Coefficient2;

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
int Passwordkey;
int EncodedPasswordkey;

//Password Encryption
void PasswordEncryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double &b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient1, double &a2, double &b2, double &c2, double &d2);

//Password Decryption
void PasswordDecryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double&b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient2, double &A2, double &B2, double &C2, double &D2, double &Password, double &A3, double &B3, double &C3, double &D3, double &a3, double &b3, double &c3, double &d3, double &a4, double &b4, double &c4, double &d4, int &Passwordkey, int &EncodedPasswordkey);

//Determine if passwordkey is true
bool isPasswordkey(double password);
//Determine if password is true
bool isPassword(double password);
//Determine if Determine number is 0
bool isDeterminenumber(double Determine);
/*Determine if two coefficients are equal
bool isCoefficient(double Coefficient1, double Coefficient2);
*/

int main() {
	cout << "//2x2 * 2x2 Matrix Multiplication" << endl;
	cout << "The format will be like this: [A B] [a b]\n";
	cout << "The format will be like this: [C D] [c d]\n\n";

	cout << "The password will be like this: [A1 B1]\n";
	cout << "The password will be like this: [C1 D1]\n\n";

	cout << "ONLY NUMBER ACCEPTABLE" << endl;
	cout << "All the numbers can not be the same." << endl;
	cout << "Enter 4 numbers password ";
	cout << "\nEnter the first number: ";
	while(true){
	cin >> A;
	if (A >= 10 || A < 0){
		cin.fail();
		cout << "\nInvalid number. Please enter a number between 0 and 9: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}else{
			break;
		}
	}
	cout << "Enter the second number: ";
	while(true){
	cin >> B;
	if (B >= 10 || B < 0){
		cin.fail();
		cout << "\nInvalid number. Please enter a number between 0 and 9: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}else{
			break;
		}
	}
	cout << "Enter the third number: ";
	while(true){
	cin >> C;
	if (C >= 10 || C < 0){
		cin.fail();
		cout << "\nInvalid number. Please enter a number between 0 and 9: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}else{
			break;
		}
	}
	cout << "Enter the fourth number: ";
	while(true){
	cin >> D;
	if (D >= 10 || D < 0){
		cin.fail();
		cout << "\nInvalid number. Please enter a number between 0 and 9: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}else{
			break;
		}
	}
	//Password Encryption
	PasswordEncryption(EncodedPassword, A, B, C, D, a, b, c, d, A1, B1, C1, D1, Determine, Coefficient1, a2, b2, c2, d2);//call function
		cout << "\n\nEnter your passwordkey: ";
		cin >> Passwordkey;
		if (isPasswordkey(true)){
			cout << "Correct Passwordkey." << endl;
			cout << "\nEnter your password ";
			cout << "\nEnter the first number: ";
			while(true){
			cin >> A2;
			if (A2 >= 10 || A2 < 0){
				cin.fail();
				cout << "\nInvalid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}else{
					break;
				}
			}
			cout << "Enter the second number: ";
			while(true){
			cin >> B2;
			if (B2 >= 10 || B2 < 0){
				cin.fail();
				cout << "\nInvalid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}else{
					break;
				}
			}
			cout << "Enter the third number: ";
			while(true){
			cin >> C2;
			if (C2 >= 10 || C2 < 0){
				cin.fail();
				cout << "\nInvalid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}else{
					break;
				}
			}
			cout << "Enter the fourth number: ";
			while(true){
			cin >> D2;
			if (D2 >= 10 || D2 < 0){
				cin.fail();
				cout << "\nInvalid number." << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}else{
					break;
				}
			}
			//Password Decryption
			PasswordDecryption(EncodedPassword, A, B, C, D, a, b, c, d, A1, B1, C1, D1, Determine, Coefficient2, A2, B2, C2, D2, Password, A3, B3, C3, D3, a3, b3, c3, d3, a4, b4, c4, d4, Passwordkey, EncodedPasswordkey); //Call funtion
			if (isPassword(true)){
				cout << "\nPassword is correct!";
			}else{
				cout << "\nPassword is incorrect! Try again.";
			}
		}else{
			cout << "\nInvalid Passwordkey." << endl;
		}
return 0;
}

//PasswordEncryption definition
void PasswordEncryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double &b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient1, double &a2, double &b2, double &c2, double &d2){
	Coefficient1 = 0;
	
	//Inverse the numbers
	a = D;
	b = -B;
	c = -C;
	d = A;

	//Calculate coefficient
	Coefficient1 = 1/((a * d) - (b * c));

	//Inverse numbers * coefficient
	a2 = a * Coefficient1;
	
	b2 = b * Coefficient1;
	
	c2 = c * Coefficient1;
	
	d2 = d * Coefficient1;
	

	//Results
	A1 = (A * a2) + (B * c2);
	B1 = (A * b2) + (B * d2);
	C1 = (C * a2) + (D * c2);
	D1 = (C * b2) + (D * d2);

	//New passwords number
	EncodedPassword = A1 + B1 + C1 + D1;
	EncodedPasswordkey = int(EncodedPassword); //Password1 is the password in int number form
	if (isDeterminenumber(true)){
		cout << "\n\n1Invalid Password." << endl;
	}else{
		cout << "\nThis is your password key: " << EncodedPasswordkey;
	}
}

//PasswordDecryption definition
void PasswordDecryption(double EncodedPassword, double &A, double &B, double &C, double &D, double &a, double&b, double &c, double &d, double &A1, double &B1, double &C1, double &D1, double &Determine, double &Coefficient2, double &A2, double &B2, double &C2, double &D2, double &Password, double &A3, double &B3, double &C3, double &D3, double &a3, double &b3, double &c3, double &d3, double &a4, double &b4, double &c4, double &d4, int &Passwordkey, int &EncodedPasswordkey){
	Coefficient2 = 0;
	
	//Inverse the numbers
	a3 = D2;
	b3 = -B2;
	c3 = -C2;
	d3 = A2;

	//Calculate coefficient
	Coefficient2 = 1/((a3 * d3) - (b3 * c3));

	//Inverse numbers * coefficient
	a4 = a3 * Coefficient2;
	
	b4 = b3 * Coefficient2;
	
	c4 = c3 * Coefficient2;
	
	d4 = d3 * Coefficient2;
	

	//Results
	A3 = (A2 * a4) + (B2 * c4);
	B3 = (A2 * b4) + (B2 * d4);
	C3 = (C2 * a4) + (D2 * c4);
	D3 = (C2 * b4) + (D2 * d4);

	//New passwords number
	Password = A3 + B3 + C3 + D3;
	Passwordkey = int(Password); //Password1 is the password in int number form

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
bool isPasswordkey(double Password){
	if (Passwordkey == EncodedPasswordkey){
		return true;
	}
	return false;
}

//Determine if password is true
bool isPassword(double Password){
	if (A2 == A && B2 == B && C2 == C && D2 == D){
		return true;
	}
	return false;
}

/*Determine if two coefficients are equal
bool isCoefficient(double Coefficient1, double Coefficient2){
	if (Coefficient1 == Coefficient2){
		return true;
	}
	return false;
}
*/
