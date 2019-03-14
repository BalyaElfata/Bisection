// Metode Bisection untuk mencari akar

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

double a,b,c,n,akar;

void masukan(){
	cout << "Masukkan nilai batas kiri: ";
	cin >> a;
	cout << "Masukkan nilai batas kanan: ";
	cin >> b;
	cout << "Masukkan nilai maksimal n dalam bilangan desimal (contoh: 0.01): ";
	cin >> n;
	cout << endl;
}

float f(float x){
	float f = cos(x)- x;
	return f;
}

void perhitungan(){
	akar = a - 1;
	c = akar - 1;
	while(akar != c){
		if(f(a)*f(b) < 0){
			c = a + ((b-a)/2);
			if(abs(f(c)) < n){
				akar = c;
			}
			else{
				if(f(a)*f(c) < 0){
					b = c;
				}
				else{
					a = c;
				}
			}
		}
		else{
			cout << "Nilai akar tidak berada di antara interval" << endl << "Harap ulangi." << endl;
			masukan();
		}
	}
	cout << "Nilai akarnya adalah: " << akar;
}

int main(){
masukan();
perhitungan();
}