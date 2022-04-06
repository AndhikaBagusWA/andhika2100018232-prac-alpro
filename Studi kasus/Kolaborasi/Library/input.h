using namespace std;

class Input {
  public :
    void cetak(){
      cout<< "Warung Makan Mantap \n";
      cout<< "Pilihan Menu : ";
      cout<< " 1. Ayam Geprek    Rp. 21000 \n";
      cout<< " 2. Ayam Goreng    Rp. 17000 \n";
      cout<< " 3. Udang Goreng   Rp. 19000 \n";
      cout<< " 4. Cumi Goreng    Rp. 20000 \n";
      cout<< " 5. Ayam Bakar     Rp. 25000 \n";
      cout<< "Pesan Ayam Geprek  ~>  "; cin>>bnyk_aymGp;
      cout<< "Pesan Ayam Goreng  ~>  "; cin>>bnyk_aymGr;
      cout<< "Pesan Udang Goreng  ~>  "; cin>>bnyk_udgGr;
      cout<< "Pesan Cumi Goreng  ~>  "; cin>>bnyk_cmiGr;
      cout<< "Pesan Ayam Bakar  ~>  "; cin>>bnyk_aymBk;
    }

    void toFile(){}
      tulis_data.open("../pra_data/input.txt);
      tulis_data << bnyk_aymGp<<endl;
      tulis_data << bnyk_aymGr<<endl;
      tulis_data << bnyk_udgGr<<endl;
      tulis_data << bnyk_cmiGr<<endl;
      tulis_data << bnyk_aymBk<<endl;
      tulis_data.close();

  private :
    ofstream tulis_data;
    int bnyk_aymGp, bnyk_aymGr, bnyk_udgGr, bnyk_cmiGr, bnyk_aymBk;
};