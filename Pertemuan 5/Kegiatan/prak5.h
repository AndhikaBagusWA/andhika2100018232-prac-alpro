#include <iostream>
#include <conio.h>
using namespace std;
class perulangan {
    private:
    int n;
    public:
    perulangan() { n = 4; }
    void ulang_for(int n);
    int ulang_rekursif(int n);
};

void perulangan::ulang_for(int n)
{
    for (int  i = 1; i <= n; i++)
    {
        cout << i << " ";
        getch();
    }
    
}

int perulangan::ulang_rekursif(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
    	cout << n << " ";
    	getch();
        return  ulang_rekursif(n-1);
    }
}
