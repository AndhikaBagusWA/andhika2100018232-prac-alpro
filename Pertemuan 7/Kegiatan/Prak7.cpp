#include <iostream>  // Andhika Bagus W.A 2100018232 Kelas E
using namespace std;

class Sorting{

    private:
    int kunciPencarian,n,data[10];

    public:
    void input();
    void output();
    void minimum(int dari, int n, int &tempat);
    void tukar(int &a, int &b);
    void selection_sort();
    int pencarianBiner(int low, int high);
};

void Sorting::minimum(int dari, int n, int &tempat) // cari nilai minimum
{
    int min = data[dari];
    tempat = dari;
    for (int i = dari+1; i < n; i++)
    {
        if (data[i]<min)
        {
            min = data[i];
            tempat = i;
        }
    }
}

void Sorting::tukar(int &a, int &b) // proses menukar data
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Sorting::selection_sort() // proses mengurutkan data
{
    int t;
    for (int i = 0; i < n; i++)
    {
        minimum(i,n,t);
        tukar(data[i], data[t]);
        cout <<data[i]<< " ";
    }
    
}
int Sorting::pencarianBiner(int low, int high) // proses mencari data
{
    int middle,kunciPencarian;
    cout <<"\nmencari data yang diinginkan: "; cin>>kunciPencarian;
    while (low<=high)
    {
        middle = (low+high)/2;
        if (kunciPencarian == data[middle])
            return middle;
        if(kunciPencarian <data[middle])
            high = middle - 1;
        else
            low = middle + 1;
        
    }
        return -1;
}
void Sorting::input()
{
    cout << "tentukan banyak data: "; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << "masukkan data ke "<<i<<" : ";
        cin>>data[i];
    }
}
void Sorting::output()
{
    cout <<"data sebelum diurutkan: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << data[i]<<" ";
    }
    cout <<"\ndata setelah diurutkan: "<<endl;
    selection_sort();
    int x=pencarianBiner(0,n-1);
    if(x!=-1)
        cout<<"data terdapat di indeks ke "<<x<<endl;
    else
        cout<<"data tidak ada"<<endl;
}

int main(){
    Sorting tes;
    tes.input();
    tes.output();
    return 0;
}
