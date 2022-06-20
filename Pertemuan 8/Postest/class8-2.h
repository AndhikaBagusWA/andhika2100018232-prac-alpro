#include <iostream>
using namespace std;

class arr2d{
	public:
		void input();
		void tukar(int &a, int&b);
		void cetak_mat();
		void gabung();
		void sort();
		void output();
	private:
		int mat1[3][3], mat2[3][3],arr[19];
		int i,j,k;
};

void arr2d::tukar(int &a, int&b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void arr2d::gabung(){
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			arr[k] = mat1[i][j];
			k++;
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			arr[k] = mat2[i][j];
			k++;
		}
	}
}

void arr2d::sort()
{
	for(i=0; i<k; i++){
		for(j=0; j<k; j++){
			if(arr[j] > arr[j+1]){
				tukar(arr[j], arr[j+1]);
			}	
		}
	}
	for(i=0; i<=k; i++){
			cout<<arr[i]<<" ";
	}
}

void arr2d::input(){
	cout<<"banyak baris: 3\n";
	cout<<"banyak kolom: 3\n";
	cout<<"masukkan data matrik 1\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Data["<<i+1<<","<<j+1<<"]:";
			cin>>mat1[i][j];
		}
	}
	cout<<"masukkan data matrik 2\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<"Data["<<i+1<<","<<j+1<<"]:";
			cin>>mat2[i][j];
		}
	}
}

void arr2d::cetak_mat(){
	cout<<"matrik 1:\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nmatrik 2\n";
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}
}

void arr2d::output(){
	cout<<"sebelum digabung & disorting:\n";
	cetak_mat();	
	cout<<"setelah digabung & disorting:\n";
	gabung();
	sort();
}

