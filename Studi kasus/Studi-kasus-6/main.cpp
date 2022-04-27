#include <iostream>
#include <string.h>
using namespace std;

class Array {
public:
  void input();
  void proses();
  void output();

private:
  string matkul;
  string mhs[100]; // nama mahasiswa
  int b;          // berapa banyak input
  int n_tgs[100], n_uts[100], n_uas[100], n_akhir[100];
  int i; // loop for
  float rata_tgs, rata_uts, rata_uas;
};

void Array::input() {
  cout << "=========================================\n";
  cout << "Mata Kuliah : ";
  cin >> matkul;
  cout << "Banyak Mahasiswa : ";
  cin >> b;
  cout << "=========================================\n";
  for (int i = 1; i <= b; i++) {
    cout << "Nama Mahasiswa : ";
    cin >> mhs[i];
    cout << "Masukkan Nilai Tugas : ";
    cin >> n_tgs[i];
    cout << "Masukkan Nilai UTS   : ";
    cin >> n_uts[i];
    cout << "Masukkan Nilai UAS   : ";
    cin >> n_uas[i];
    cout << "\n";
  }
};

void Array::proses() {

  // proses nilai akhir dan rata rata
  for (i = 1; i <= b; i++) {
    n_akhir[i] =
        n_tgs[i] * 20 / 100 + n_uts[i] * 35 / 100 + n_uas[i] * 45 / 100;
		rata_tgs += n_tgs[i];
		rata_uts += n_uts[i];
		rata_uas += n_uas[i];
  }
  rata_tgs = rata_tgs / b;
  rata_uts = rata_uts / b;
  rata_uas = rata_uas / b;
};

void Array::output() {
  cout << "\n=========================================\n";
  cout << "Daftar Nilai Mahasiswa\n";
  cout << "=========================================\n";
  cout << "Nama matakuliah : \n" << matkul;
  for (i = 1; i <= b; i++) {
    cout << "\nNama      Nilai Tugas      Nilai UTS      Nilai UAS      Nilai "
            "Akhir\n";
    cout << mhs[i] << "           " << n_tgs[i] << "              "
         << n_uts[i] << "            " << n_uas[i] << "             "
         << n_akhir[i];
  }
  cout << "\n=========================================\n";
  cout << "Nilai rata-rata Tugas :" << rata_tgs;
  cout << "\n Nilai rata-rata UTS : " << rata_uts;
  cout << "\n Nilai rata-rata UAS : " << rata_uas << endl;
};

int main() {
  Array run;
  run.input();
  run.proses();
  run.output();
  return 0;
}