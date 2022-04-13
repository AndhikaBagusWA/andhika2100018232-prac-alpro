using namespace std;

class Input{
public:
  int a[12], totp = 0, bulan;
  int saldo = 0;
  void cetak(){
    cout << "Jumlah uang saku sebulan : Rp.";
    cin >> saldo;
    cout << "Banyaknya bulan : ";
    cin >> bulan;
    }

  void toFile() {
    tulis_data.open("../pra_data/input.txt");
    tulis_data<<saldo<<endl;
    tulis_data<<bulan<<endl;
    tulis_data.close();
    }

  private:
    ofstream tulis_data;
  };