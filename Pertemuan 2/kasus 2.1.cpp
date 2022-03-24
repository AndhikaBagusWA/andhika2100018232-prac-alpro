#include <iostream>
using namespace std;

int main(){
	
	int a, b , c;
	int jumlah;
	cout << "PROGRAM MENGHITUNG JUMLAH 3 INTEGER\n";
	cout << "===================================\n";
	cout << "Masukkan bilangan pertama\n";
	cin >> a;
	cout << "Masukkan bilangan kedua\n";
	cin >> b;
	cout << "Masukkan bilangan ketiga\n";
	cin >> c;
	
	jumlah = a + b + c;
	cout << "Hasil penjumlahan 3 bilangan tersebut adalah : " << jumlah <<endl;
	
	return 0;
}
