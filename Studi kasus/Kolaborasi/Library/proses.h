using namespace std;

class proses {
  public :
    void cetak(){
        cout<<"";
    }
    void getData(){
        ambil_data.open("../dummy/out.input.txt");
        int t;
        while(!ambil_data.eof()){
          ambil_data>>t;
          cout<<t<<endl;
        }
      ambil_data.close();
    }

    void toFile(){
      int total = (hrg_aymGp * bnyk_aymGp)+(hrg_aymGr * bnyk_aymGr)+(hrg_udgGr * bnyk_udgGr)+(hrg_cmiGr * bnyk_cmiGr)+(hrg_aymBk * bnyk_aymBk);
      float batas1 =25000;
      float batas2 =50000;
      float batas3 =150000;
      float t2 = float(total);
      float diskon1 = t2 * 0,15;
      float diskon2 = t2 * 0,30;
      if(total >= batas1)
        t2 = 
      if(total >= batas2)
        t2 = t2 - diskon1;
      if(total >= batas3)
        t2 = t2 - diskon2;

      tulis_data.open("../pra_data/proses.txt")
      tulis_data << total <<endl;
      tulis_data << ongkir <<endl;
      tulis_data << diskon <<endl;
      tulis_data << t2 <<endl;
    }

  private :
    ifstream ambil_data;
    ofstream tulis_data;
    int bnyk_aymGp;
    int bnyk_aymGr;
    int bnyk_udgGr;
    int bnyk_cmiGr;
    int bnyk_aymBk;
    int hrg_aymGp=21000;
    int hrg_aymGr=17000;
    int hrg_udgGr=19000;
    int hrg_cmiGr=20000;
    int hrg_aymBk=25000;
    int 

};