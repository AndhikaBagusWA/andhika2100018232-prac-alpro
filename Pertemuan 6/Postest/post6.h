#include <iostream>
using namespace std;

class array {
    public:
    void input();
    void iteratif();
    int rekursif(int *a,int b,int i);
    void cetak();
    private:
    int a[10]; // array a
    int b; // menentukan banyaknya input
    int i; // digunakan dlm loop
    int temp; // data sementara
};

void array::input() {
    cout << "Berapa banyak array yang ingin diinput: "; cin >> b;
    for ( i = 0; i < b; i++)
    {
        cout << "Masukkan nilai array ke-"<<i+1<<": "; cin>>a[i];
    }
    cout << "\nIsi array : ";
    for(i=0; i<b; i++) {
    	cout <<a[i]<<" ";
	}
    cout <<endl;
}

void array::iteratif(){
	temp=a[b-1];
    for ( i = b-1; i >= 0; i--)
    {
        a[i+1]=a[i];
        a[i]=temp;
    }
    // hasil digeser ke kanan
    for ( i = 0; i < b; i++)
    {
        cout <<a[i]<<" ";
    }
    cout<<"\n";
}

int array::rekursif(int *a,int b,int i) {
    
    if(i==0)
    {
    	return 0;
	}

    else if(i>1 && i<b)
    {
    	a[i+1] = a[i];
    	a[i]= temp;
    }    
    else {
    	
    	temp = a[b-1];
	}
        
    return rekursif(a,b-1,i-1);
}

void array::cetak() {
	rekursif(a,b,i);
	// hasil digeser ke kann
	for(i = 0; i<b; i++)
	{
		cout << a[i] <<" ";
	}
}
