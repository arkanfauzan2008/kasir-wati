#include <iostream>
#include <string>
using namespace std;

int main () {
   string kopi;
    string nasiBungkus; 
    string airMineral;
    string indomie;
    int hargakopi; hargakopi = 3000;
    int harganasiBungkus; harganasiBungkus = 7000; 
    int hargaairMineral; hargaairMineral= 3000;
    int hargaindomie; hargaindomie = 3000;
    int valueBarang[4] = {hargakopi, harganasiBungkus, hargaairMineral, hargaindomie};
    int uang; 
    int total;
    int kembalian;
    std::string namaPembeli;

    cout << "Masukan nama pembeli! ";
     std::getline(std::cin, namaPembeli);
    cout << "List Barang" << endl;
     cout << "1.kopi = "<<"Rp."<< hargakopi << endl ;
       cout << "2.nasi bungkus = "<< "Rp."<<harganasiBungkus<< endl ;
         cout << "3.air mineral = "<< "Rp."<<hargaairMineral<< endl ;
           cout << "4.indomie = "<<"Rp."<<hargaindomie << endl ;
           cout<<"-----------------------"<<endl;
       total = hargakopi + hargaairMineral + harganasiBungkus + hargaindomie;
       cout << "maka totalnya adalah Rp" << total<<endl;
         cout << "masukan nominal pembayaran!";
         cin >> uang;

         if (uang >= total)
         {
          cout << "Okeeee" << endl;
          kembalian = total-uang;
          cout<<"maka kembalian anda adalah "<<kembalian;
         } else {
          while (uang < total)
          {
            cout << "kurang bro duite,masukan lagi" << endl;
            cin >> uang;
            kembalian = uang - total;
              cout<<"maka kembalian anda adalah "<<kembalian << endl;
          }
          
         }
         cout << "pembayaran berhasil";
}
        