#include <iostream>
#include <string>
using namespace std;

  string kopi = "kopi";
  string indomie = "indomie";
  string keyboardRGB = "keyboard RGB";
  string mouseLogitech = " mouse logitech";
  int inputkopi;
  int inputindomie;
  int inputkeyboard;
  int inputmouse;
  double hargakopi = 3000;
  double hargaindomie = 4000;
  double hargakeyboardRGB = 250000;
  double hargamouseLogitech = 100000;
  int kuantitaskopi = 0;
  int kuantitasindomie = 0;
  int kuantitaskeyboard = 0;
  int kuantitasmouse = 0;
  double jumlahkopi;
  double jumlahindomie;
  double jumlahkeyboard;
  double jumlahmouse;
  double keranjang;
  int jumlah;
   int uang;
   int koin[5] = {1000, 500, 200, 100};
   int jumlahKoin[5] = {0};
   int kembalianUser ;

   void jumlah1 () {
    jumlah = jumlahindomie + jumlahkeyboard + jumlahkopi + jumlahmouse;
  }

   void tampilkandata () {
   std:: cout << "1.Kopi = Rp." << hargakopi<< " Banyak pembelian = " << kuantitaskopi<<std:: endl;
    std::cout << "2.Indomie = Rp." << hargaindomie<< " Banyak pembelian = " << kuantitasindomie<<std:: endl;
   std:: cout << "3.Keyboard RGB = Rp." << hargakeyboardRGB<< " Banyak pembelian = " << kuantitaskeyboard<< std::endl;
    std::cout << "4.Mouse Logitech = Rp." << hargamouseLogitech<< " Banyak pembelian = " << kuantitasmouse<<std:: endl;
   }
   
   
    namespace lingkupkopi {
    void tukukopi () {
    cout << "1.Kopi = Rp." << hargakopi<< " Banyak pembelian = " << kuantitaskopi<< endl;
    cout << "Berapa gelas kopi yang anda ingin beli?" << endl;
    cin >> inputkopi;
    kuantitaskopi += inputkopi;

   
  }
   void updatenilaikopi () {
    jumlahkopi = hargakopi * kuantitaskopi; 
  }
   }
   namespace  lingkupindomie {
    void tukuindomie () {
    cout << "2.Indomie = Rp." << hargaindomie<< " Banyak pembelian = " << kuantitasindomie<< endl;
    cout << "Berapa porsi Indomie yang anda ingin beli?" << endl;
    cin >> inputindomie;
    kuantitasindomie += inputindomie;    
  }
  void updatenilaiindomie () {
    jumlahindomie = hargaindomie * kuantitasindomie; 
  }
   }
   namespace  lingkupkeyboard {
    void tukukeyboard () {
    cout << "3.Keyboard = Rp." << hargakeyboardRGB<< " Banyak pembelian = " << kuantitaskeyboard<< endl;
    cout << "Berapa keyboard yang anda ingin beli?" << endl;
    cin >> inputkeyboard;
    kuantitaskeyboard += inputkeyboard;
   
   
  }
  void updatenilaikeyboard () {
    jumlahkeyboard = hargakeyboardRGB * kuantitaskeyboard; 
  }
   }
   namespace lingkupmouse {
    void tukumouse () {
    cout << "4.Mouse Logitech = Rp." << hargamouseLogitech<< " Banyak pembelian = " << kuantitasmouse<< endl;
    cout << "Berapa mouse yang anda ingin beli?" << endl;
    cin >> inputmouse;
    kuantitasmouse += inputmouse;
    

  }
  
  
  void updatenilaimouse () {
    jumlahmouse = hargamouseLogitech * kuantitasmouse; 
  }
 
}
namespace sistemkerjapilihan {
    void kerjakopi () {
 lingkupkopi::tukukopi();
    string pilihanlanjutkopi;
     cout << "apakah anda ingin menambah pembelian kopi lagi? (y/n)"<< endl;
     cin >> pilihanlanjutkopi;
     while (pilihanlanjutkopi == "y")
     {
      lingkupkopi::tukukopi();
      cout << "apakah anda ingin menambah pembelian kopi lagi? (y/n)"<< endl;
      cin >> pilihanlanjutkopi;
      
       if (pilihanlanjutkopi == "n")
     {
      break;
     }
     }
        }
        void kerjaindomie () {
          lingkupindomie::tukuindomie();
     string pilihanlanjutindomie;
     cout << "apakah anda ingin menambah pembelian Indomie lagi? (y/n)"<< endl;
     cin >> pilihanlanjutindomie;
     while (pilihanlanjutindomie == "y")
     {
      lingkupindomie::tukuindomie();
      cin >> pilihanlanjutindomie;
       
       if (pilihanlanjutindomie == "n")
     {
      break;
     }
     }
  
        }
        void kerjakeyboard () {
          lingkupkeyboard::tukukeyboard();
    string pilihanlanjutkeyboard;
     cout << "apakah anda ingin menambah pembelian Keyboard RGB lagi? (y/n)"<< endl;
     cin >> pilihanlanjutkeyboard;
     while (pilihanlanjutkeyboard == "y")
     {
     lingkupkeyboard::tukukeyboard();
      cout << "apakah anda ingin menambah pembelian Keyboard RGB lagi? (y/n)"<< endl;
      cin >> pilihanlanjutkeyboard;
       if (pilihanlanjutkeyboard == "n")
     {
      break;
     }
     }
        }
        void kerjamouse () {
           lingkupmouse::tukumouse();
    string pilihanlanjutmouse;
     cout << "apakah anda ingin menambah pembelian Mouse Logitech lagi? (y/n)"<< endl;
     cin >> pilihanlanjutmouse;
     while (pilihanlanjutmouse == "y")
     {
      lingkupmouse::tukumouse();
      cout << "apakah anda ingin menambah pembelian Mouse Logitech lagi? (y/n)"<< endl;
     cin >> pilihanlanjutmouse;
     if (pilihanlanjutmouse == "n")
     {
      break;
     }
     
     }
        }
  }
 

int main () {
  int inputuser;
 tampilkandata ();
  cout << endl;
  cout << "Pilihlah barang yang anda inginkan (1-4)" << endl;
  cin >>  inputuser;
  while (inputuser >=0 && inputuser >4)
  {
    cout << "Pilih angka dari 1 sampai 4!"<< endl;
    cin >> inputuser;
  }
if (inputuser == 1)
{
  sistemkerjapilihan::kerjakopi();


  
  
  }else if (inputuser == 2)
  {
    sistemkerjapilihan::kerjaindomie();
  } 
  else if (inputuser == 3)
  {
    sistemkerjapilihan::kerjakeyboard();
  }
    else if  (inputuser == 4)
  {
   sistemkerjapilihan::kerjamouse();
  }
   
  string konfirmasi;
  tampilkandata ();
  cout << "apakah anda ingin menambah pembelian lagi? (y/n)"<< endl;
  cin >> konfirmasi;
  if (konfirmasi == "y")
  {  
     
     while (konfirmasi == "y")
     {
      tampilkandata ();
  cout << endl;
  cout << "Pilihlah barang yang anda inginkan (1-4)" << endl;
  cin >>  inputuser;
  while (inputuser >=0 && inputuser >4)
  {
    cout << "Pilih angka dari 1 sampai 4!"<< endl;
    cin >> inputuser;
  }
if (inputuser == 1)
{
  sistemkerjapilihan::kerjakopi();


  
  
  }else if (inputuser == 2)
  {
    sistemkerjapilihan::kerjaindomie();
  } 
  else if (inputuser == 3)
  {
    sistemkerjapilihan::kerjakeyboard();
  }
    else if  (inputuser == 4)
  {
   sistemkerjapilihan::kerjamouse();
  }
        tampilkandata ();
      konfirmasi.clear();
  cout << "apakah anda ingin menambah pembelian lagi? (y/n)"<< endl;
  cin >> konfirmasi;
  
  if (konfirmasi == "n")
  {
    break;
  }
     }
  }
  lingkupkopi::updatenilaikopi();
  lingkupindomie::updatenilaiindomie();
  lingkupkeyboard::updatenilaikeyboard();
  lingkupmouse::updatenilaimouse();
  jumlah1();
  std::cout <<"Total : Rp."<< jumlah <<std::endl;
  std::cout<< "Masukkan pembayaran" << std::endl;
 
  cin >> uang ;
  while (uang < jumlah)
  {
    cout << "Pembayaran tidak valid!" << endl;
    std::cout <<"Total : Rp."<< jumlah <<std::endl;
  std::cout<< "Masukkan pembayaran" << std::endl;
  cin >> uang;
  }
  
  cout << "Pembayaran valid!" << endl;
  if (uang > jumlah)
  {
    kembalianUser = uang - jumlah;
    cout<<"kembalian = "<< kembalianUser<<endl;
    for ( int i = 0; i < 4; i++)
    {
      while (kembalianUser >= koin[i])
      {
       kembalianUser-=koin[i];
        jumlahKoin[i]++;
      }
      cout << jumlahKoin[i] << " buah koin " << koin[i]<<endl;
    }
    
    
  }
  
  
  
  

  
  return 0;
  
}
