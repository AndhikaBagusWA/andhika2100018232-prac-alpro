#include <iostream>
using namespace std;

class post9_1{
		public:
		void input();
		void proses();
		void bubble_sort(int k);
		void tukar(int &a, int&b);
		void cetak();
		void output();
	private:
		int A[3][3], gabung[10], bar, kol;
};
		

void post9_1::tukar(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void post9_1::bubble_sort(int k)
{
	// mengurutkan data
	for(int i=0; i<k; i++){
		for(int j=0; j<k; j++){
			if(gabung[j] > gabung[i+1]){
				tukar(gabung[j], gabung[i+1]);
			}
		}
	}
}

void post9_1::proses()
{
	// konversi array ke 1 dimensi
	int k=0;
	for(int i=0; i<bar; i++){
		for(int j=0; j<kol; j++){
			gabung[k] = A[i][j];
			k++;
		}
	}
	bubble_sort(k);
	k = 0;
	for(int i=0; i<bar; i++){
		for(int j=0; j<kol; j++){
			A[i][j] = gabung[k];
			k++;
		}
	}
	cetak();
}

void post9_1::cetak()
{
	for(int i=0; i<bar; i++){
		for(int j=0; j<kol; j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
}

void post9_1::input()
{
	cout<<"banyak baris array: "; cin>>bar;
	cout<<"banyak kolom array: "; cin>>kol;
	cout<<endl;
	for(int i=0; i<bar; i++){
		for(int j=0; j<kol; j++){
			cout<<"masukkan data["<<i+1<<","<<j+1<<"]: "; cin>>A[i][j];
		}
		cout<<endl;
	}
}

void post9_1::output()
{
	cout<<"sebelum di sort: \n";
	cetak();
	cout<<"setelah di sort: \n";
	proses();
	
}
