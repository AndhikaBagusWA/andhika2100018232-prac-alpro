using namespace std;

class Output {
  public:
  void cetak() {
    cout << "Anda sebagai output";
  }
  void struk() {
    cout <<"\n=============================================\n";
    cout <<"\t\tSruk Bayar\n";
    cout <<"=============================================\n";
    cout << "\n1) Ayam Goreng\t  : Rp "<<
	  cout << "\n2) Ayam Bakar\t   : Rp "<<
	  cout << "\n3) Ayam Geprek\t  : Rp "<<
	  cout << "\n4) Udang goreng\t : Rp "<<
	  cout << "\n5) Cumi Goreng\t  : Rp "<<
    cout << "\n Total Harga : Rp "<<
    cout << "\n Ongkir anda : Rp "<<
	  cout <<"\n=============================================\n";
    
  }
  void getData() {
    ambil_data.open("../dummy/out.proses.txt"):
    ambil_data.close();
  }
  private:
};