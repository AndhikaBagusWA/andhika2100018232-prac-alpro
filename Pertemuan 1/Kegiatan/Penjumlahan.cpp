#include <iostream>
#include <conio.h>
using namespace std;


class Hitung{
  friend ostream& operator<<(ostream&, const Hitung&);
  friend istream& operator>>(istream&, Hitung&);

public:
  Hitung();
  void hitung_jumlahnya(){jumlah=(a+b+c);}
private:
  int a,b,c;
  int jumlah;
};

Hitung::Hitung(){
  cout <<"Program menghitung jumlah 3 integer\n";
  cout <<"Selamat berkarya\n";
}

istream& operator>>(istream& in, Hitung& masukan){
  cout <<"Masukkan nilai a: ";
  in >>masukan.a;
  cout <<"Masukkan nilai b: ";
  in >>masukan.b;
  cout <<"Masukkan nilai c: ";
  in >>masukan.c;
  return in;
}

ostream& operator<<(ostream& out, const Hitung & keluaran){
  out <<"Nilai a: "<<keluaran.a<<endl;
  out <<"Nilai b: "<<keluaran.b<<endl;
  out <<"Nilai c: "<<keluaran.c<<endl;
  out <<"Jumlah 3 integer di atas: "<<keluaran.jumlah<<endl;
  return out;
}

main(){
  Hitung X;
  cin>>X;
  X.hitung_jumlahnya();
  cout<<X;
  getch();
  return 0;
}
