#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char a[100][100]; // deklarasi untuk nama barang
	int menu; //deklarasi pilih menu
	int jml; // deklarasi array  
	int r=0; // deklarasi total harga dan inisialisasi
	int p[200]; // deklarasu jumlah barang
	int q[500]; // deklarasi harga per buah
	cout<<"============================================="<<endl;
	cout<<"Menu (pilih salah satu)"<<endl;
	cout<<"1)Masukkan barang belanja"<<endl;
	cout<<"2)Keluar"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cin>>menu;
	
	while(menu==1){ // menggunakan while karena batasannya tidak diketahui
		cout<<"---------------------------------------------"<<endl;
		cout<<"Input Nama Menu\t\t: "; cin>>a[jml];
		cout<<"Input Kuantitas (jumlah barang)\t: "; cin>>p[jml];
		cout<<"Harga (per item)\t\t: "; cin>>q[jml];
		cout<<"---------------------------------------------"<<endl;
		cout<<"Beli  lagi? [1 = YA, 2 = TIDAK]"<<endl; cin>>menu;
		
		r+=p[jml]*q[jml]; // rumus untuk menghitung total harga
		if(menu==2){
			cout<<"---------------------------------------------"<<endl;
			cout<<"Total harga = "<<r<<endl;
			cout<<"Terima kasih sudah berbelanja, struk anda sedang dibuat"<<endl;
			cout<<"============================================="<<endl;
		}
		jml++; // menghitung berapa kali memasukkan barang yang berbeda
	}
	ofstream struk;
	struk.open("struk.txt", ios::out);
	struk<<"Struk"<<endl;
	struk<<"============================================="<<endl;
	for(int i = 0; i<jml; i++){
		struk<<"Nama Menu\t: "<<a[i]<<endl;
		struk<<"Harga \t: "<<p[i]<<" x "<<q[i]<<endl;
		struk<<"Total harga\t: "<<p[i]*q[i]<<endl;
		struk<<"============================================="<<endl;
	}
	struk.close();
	return 0;
}
