#include<iostream>
using namespace std;

class kedai {
  friend ostream& operator<< (ostream& out, kedai& y);
  friend istream& operator>> (istream& in, kedai& x);
  public :
  void harga();
  void pesan();
  void ongkos();
  void bayar();
  
  private:
  int a,b,c,d,e; // menu 
  int hrg1,hrg2,hrg3,hrg4,hrg5,disk,tot;// harga
  int jrk,ongkir,uang;
};

  // input
  istream& operator>>(istream& in, kedai& x) {
    cout << "|||\t\t\tMenu Makanan\t\t\t|||"<<endl;
    cout << "==========================================================="<<endl;
    cout << "1) Ayam Goreng  : Rp 17000\n";
    cout << "2) Ayam Bakar   : Rp 25000\n";
    cout << "3) Ayam Geprek  : Rp 21000\n";
    cout << "4) Udang goreng : Rp 19000\n";
    cout << "5) Cumi Goreng  : Rp 20000\n";
    cout << "===========================================================\n";
    // pesanan
    cout << "\nBerapa ayam goreng yang anda beli : "; in >> x.a;
    
    cout << "\nBerapa ayam bakar yang anda beli : "; in >> x.b;
    
    cout << "\nBerapa ayam geprek yang anda beli : "; in >> x.c;
    
    cout << "\nBerapa cumi goreng yang anda beli : "; in >> x.d;
    
    cout << "\nBerapa udang goreng yang anda beli : "; in >> x.e;
    
    cout <<"\nJarak rumah anda(km):  "; in>> x.jrk;
    return in;
  }

  // harga pesanan
  void kedai::pesan() {
    hrg1 = a * 17000;
    hrg2 = b * 25000;
    hrg3 = c * 17000;
    hrg4 = d * 25000;
    hrg5 = e * 25000;
  }

  // menghitung total harga
  void kedai::harga() {
	tot = hrg1 + hrg2 + hrg3 + hrg4 + hrg5;
  }

  // menghitung ongkir
  void kedai::ongkos() {
    if (jrk <= 3 )
		ongkir = 15000;
    else
		ongkir = 25000;
  }

  // total yang dibayar
  void kedai::bayar() {
	if(tot >= 25000 && tot <=49999)
		uang = tot + ongkir - 3000;

	else if(tot >= 50000 && tot <=149999){
		disk = (tot * 15)/100;
		uang = tot + ongkir - disk - 5000;
	}	
	else if(tot >= 150000) {
		disk = (tot * 35)/100;
		uang = tot + ongkir - disk - 8000;
	}
	else {
		uang = tot + ongkir;
	}
  }

ostream& operator<<(ostream& out, kedai& y) {
	// slip bayar
	out <<"\n=============================================\n";
	out <<"\t\tSlip pembayaran\n";
	out <<"=============================================\n";
	out << "\n1) Ayam Goreng\t  : Rp "<<y.hrg1;
	out << "\n2) Ayam Bakar\t   : Rp "<<y.hrg2;
	out << "\n3) Ayam Geprek\t  : Rp "<<y.hrg3;
	out << "\n4) Udang goreng\t : Rp "<<y.hrg4;
	out << "\n5) Cumi Goreng\t  : Rp "<<y.hrg5;
	out <<"\n=============================================\n";
  
	if(y.tot >= 25000 && y.tot <=49999) {
		out <<"\nOngkir anda\t : Rp "<<y.ongkir;
	}
	else if(y.tot >= 50000 && y.tot <=149999) {
		out <<"\nOngkir anda\t\t : Rp "<<y.ongkir;
		out <<"\nAnda mendapat diskon\t : Rp "<<y.disk;
		out <<"\nTotal harga\t\t : Rp "<<y.uang;
	}
	else if(y.tot >= 150000) {
		out <<"\nOngkir anda\t\t : Rp "<<y.ongkir;
		out <<"\nAnda mendapat diskon\t : Rp "<<y.disk;
		out <<"\nTotal harga\t\t : Rp "<<y.uang;
	}
	else {
		out <<"\nOngkir anda\t : Rp "<<y.ongkir;
		out <<"\nTotal harga\t : Rp "<<y.uang;
	}
  return out;
}

int main(){
  kedai y;
  cin >> y;
  y.pesan();
  y.ongkos();
  y.harga();
  y.bayar();
  cout<<y;
  return 0;
}
