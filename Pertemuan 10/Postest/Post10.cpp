#include <iostream>
#include <conio.h>
using namespace std;

class node{
	public:
		void input();
		void hitungElemen();
		node *Pclass;
		node *kepala = NULL;
		int data;
};

void node::hitungElemen()
{
	int i;
	node *jalan = kepala;
	while(jalan != NULL)
	{
		i++;
		jalan = jalan->Pclass;
	}
	cout<<"\nJumlah node: "<<i;
}

void node::input()
{
	node *baru;
	char lanjut;
	do {
		baru = new node;
		cout<<"\nIsi data: "; cin>>baru->data;
		baru->Pclass = kepala;
		kepala = baru;
		cout<<"lanjut isi data? (y/t): ";
	} while((lanjut=getch())!='t');
	hitungElemen();
}
int main()
{
	node x;
	x.input();
}
