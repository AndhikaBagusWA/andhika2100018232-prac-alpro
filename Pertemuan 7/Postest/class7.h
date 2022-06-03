#include <iostream>  // Andhika Bagus W.A 2100018232 Kelas E
using namespace std;

class Sort{
	private:
		int i,n,j,data[10];
	public:
		void input();
		void output();
		void tukar(int &a, int &b);
		void sort();
};
void Sort::tukar(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Sort::sort(){
	for (i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(data[j]>data[i]){
				tukar(data[j],data[i]);
			}
		}
	}
}
void Sort::input()
{
	cout<<"banyak data: ";cin>>n;
	for (i=0; i<n; i++){
		cout<<"data ke "<<i<<":"; cin>>data[i];
	}
	cout<<endl;
}
void Sort::output()
{
	cout<<"sebelum diurutkan: ";
	for (i=0; i<n; i++){
		cout<<data[i]<<" ";
	}
	cout<<"\nsetelah diurutkan: ";
	sort();
	for (i=0; i<n; i++){
		cout<<data[i]<<" ";
	}
}
