#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void calculateChange(int total, const vector<int>& coins) {
    vector<int> coinCount(coins.size(), 0); // Menyimpan jumlah masing-masing koin
    int remaining = total;

    // Iterasi melalui koin dari yang terbesar
    for (size_t i = 0; i < coins.size(); i++) {
        if (remaining >= coins[i]) {
            coinCount[i] = remaining / coins[i]; // Hitung jumlah koin
            remaining %= coins[i];              // Sisa setelah dikurangi
        }
    }

    // Menampilkan hasil
    if (remaining > 0) {
        cout << "Kembalian tidak bisa diberikan dengan koin yang tersedia." << endl;
    } else {
        cout << "Kembalian untuk total: " << total << endl;
        for (size_t i = 0; i < coins.size(); i++) {
            if (coinCount[i] > 0) {
                cout << "Koin " << coins[i] << ": " << coinCount[i] << endl;
            }
        }
    }
}

int main() {
    int total;
    cout << "Masukkan total kembalian: ";
    cin >> total;

    // Daftar nilai koin (urutkan dari yang terbesar ke terkecil)
    vector<int> coins = {1000, 500, 200, 100, 50, 20, 10, 5, 1};

    // Hitung kembalian
    calculateChange(total, coins);

    return 0;
}