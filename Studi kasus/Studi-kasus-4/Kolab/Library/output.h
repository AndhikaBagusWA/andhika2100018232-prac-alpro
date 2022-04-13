using namespace std;

class Output {

	private:
	ifstream ambil_data;
	string data[10];
	int i=0;

	public:
	void cetak() {
		cout << "Menampilkan output\n";
		cout << "=============================\n";
		cout << "1. Pengeluaran per bulan : " << data[0] <<endl;
		cout << "2. Total pengeluaran  : " << data[1] <<endl;
		cout << "3. Uang tabungan : " << data[2] <<endl;
		
	}
	void getData() {
		ambil_data.open("../Dummy/out_proses.txt");
		while(!ambil_data.eof()) {
			ambil_data >> data[i];
			i++;
		}
		ambil_data.close();
	}
};