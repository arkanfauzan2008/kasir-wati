#include <iostream>
#include <string>
using namespace std;

int main () {
    int kopi; kopi = 3000;
    int nasiBungkus; nasiBungkus = 7000; 
    int airMineral; airMineral= 3000;
    int indomie; indomie = 3000;
    int uang; 
    int total;
    int kembalian;
    std::string namaPembeli;

    cout << "Masukan nama pembeli! ";
     std::getline(std::cin, namaPembeli);
     cout << "daftar belanjaaan pembeli"<< endl ;
     cout << "1.kopi = "<<"Rp."<< kopi << endl ;
       cout << "2.nasi bungkus = "<< "Rp."<<nasiBungkus<< endl ;
         cout << "3.air mineral = "<< "Rp."<<airMineral<< endl ;
           cout << "4.indomie = "<<"Rp."<<indomie << endl ;
           cout<<"-----------------------"<<endl;
       total = kopi + airMineral + nasiBungkus + indomie;
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
        