#include "_hitung.h"
using namespace std;

Hitung::Hitung(){
  cout<<"Program menghitung jumlah 3 integer\n";
  cout<<"Selamat berkarya\n";
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

ostream& operator<<(ostream& out, const Hitung& keluaran){
  out <<"Nilai a: "<<keluaran.a<<endl;
  out <<"Nilai b: "<<keluaran.b<<endl;
  out <<"Nilai c: "<<keluaran.c<<endl;
  out <<"Jumlah 3 integer di atas: "<<keluaran.jumlah<<endl;
  return out;
}
