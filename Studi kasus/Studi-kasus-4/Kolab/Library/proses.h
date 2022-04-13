using namespace std;

class Proses {
  public :
    void getdata(){
      ambil_data.open("../Dummy/out_input.txt");
        bool saldo=true;
      while(!ambil_data.eof()){
        if(saldo){
          ambil_data>>saldoku;
          saldo=false;
        }
        else{
          ambil_data>>bulan;
        }
      }
      ambil_data.close();
      cout << "Jumlah uang saku sebulan : Rp."<<saldoku<<endl;
      cout << "Untuk "<<bulan<<" bulan"<<endl;
    }

  void toFile(){
    for (int i=0;i<bulan;i++){
      cout<<"Masukkan Pengeluaran Bulan ke-"<<i+1<<" : ";cin>>pnglrn[i];
      totp=totp+pnglrn[i];
    }
    sisa=saldoku-totp;
    rata=(float)totp/bulan;
    cout<<"\tTotal Pengeluaran = "<<totp<<endl;
    cout<<"\tSisa Uang Saku = "<<sisa<<endl;
  }

  void cetak(){
    tulis_data.open("../Dummy/out_proses.txt");
    tulis_data<<rata<<endl;
    tulis_data<<totp<<endl;
    tulis_data<<sisa<<endl;
    tulis_data.close();
  }
  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int saldoku;
    int bulan;
    int pnglrn[12], totp, sisa, rata;
};