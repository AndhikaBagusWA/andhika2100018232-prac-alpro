#include<iostream>
#include<conio.h>
using namespace std;

int main() {
    int a,b,c,d,e; // menu
	int hrg1,hrg2,hrg3,hrg4,hrg5,disk,tot; // harga
	int jrk,ongkir,uang;

    cout << "|||\t\t\tMenu Makanan\t\t\t|||"<<endl;
	cout << "==========================================================="<<endl;
	cout << "1) Ayam Goreng  : Rp 17000\n";
	cout << "2) Ayam Bakar   : Rp 25000\n";
	cout << "3) Ayam Geprek  : Rp 21000\n";
	cout << "4) Udang goreng : Rp 19000\n";
	cout << "5) Cumi Goreng  : Rp 20000\n";
	cout << "===========================================================\n";
	
	cout << "\nBerapa ayam goreng yang anda beli : "; cin >> a;
	hrg1 = a * 17000;
	cout << "\nBerapa ayam bakar yang anda beli : "; cin >> b;
	hrg2 = b * 25000;
	cout << "\nBerapa ayam geprek yang anda beli : "; cin >> c;
	hrg3 = c * 17000;
	cout << "\nBerapa cumi goreng yang anda beli : "; cin >> d;
	hrg4 = d * 25000;
	cout << "\nBerapa udang goreng yang anda beli : "; cin >> e;
	hrg5 = e * 25000;

	cout <<"\nJarak rumah anda(km):  "; cin>>jrk;
	
	tot = hrg1 + hrg2 + hrg3 + hrg4 + hrg5;

	if (jrk <= 3 )
		ongkir = 15000;
	else
		ongkir = 25000;

	
	if(tot >= 25000 && tot <=49999)
		uang = tot + ongkir - 3000;

	else if(tot >= 50000 && tot <=149999){
		disk = (tot * 15)/100;
		uang = tot + ongkir - 5000;
	}	
	else if(tot >= 150000) {
		disk = (tot * 35)/100;
		uang = tot + ongkir - 8000;
	}
	else {
		uang = tot + ongkir;
	}

	// struk
	cout <<"\n=============================================\n";
	cout <<"\t\tSlip pembayaran\n";
	cout <<"=============================================\n";
	cout << "\n1) Ayam Goreng\t  : Rp "<<hrg1;
	cout << "\n2) Ayam Bakar\t   : Rp "<<hrg2;
	cout << "\n3) Ayam Geprek\t  : Rp "<<hrg3;
	cout << "\n4) Udang goreng\t : Rp "<<hrg4;
	cout << "\n5) Cumi Goreng\t  : Rp "<<hrg5;
	cout <<"\n=============================================\n";
	if(tot >= 25000 && tot <=49999) {
		cout <<"\nOngkir anda\t : Rp "<<ongkir;
		cout <<"\nTotal harga\t : Rp "<<uang;
	}
	else if(tot >= 50000 && tot <=149999) {
		cout <<"\nOngkir anda\t\t : Rp "<<ongkir;
		cout <<"\nAnda mendapat diskon\t : Rp "<<disk;
		cout <<"\nTotal harga\t\t : Rp "<<uang;
	}
	else if(tot >= 150000) {
		cout <<"\nOngkir anda\t\t : Rp "<<ongkir;
		cout <<"\nAnda mendapat diskon\t : Rp "<<disk;
		cout <<"\nTotal harga\t\t : Rp "<<uang;
	}
	else {
		cout <<"\nOngkir anda\t : Rp "<<ongkir;
		cout <<"\nTotal harga\t : Rp "<<uang;
	}
}