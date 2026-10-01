#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void tampilkanRiwayat(int riwayat[], int jumlah) {
	cout << endl << "=== RIWAYAT TEBAKAN ===\n" << endl;

	for (int i = 0; i < jumlah; i++) {
		cout << "Tebakan ke-" << i + 1 << ": " << riwayat[i] << endl;
	}
}

int main() {
	srand(time(0));
	int angkaRahasia = rand() % 100 + 1;
	int tebakan, percobaan = 0, riwayat[100];

	cout << "========================" << endl;
	cout << " GAME TEBAK ANGKA " << endl;
	cout << "========================" << endl;
	cout << "Tebak angka dari 1 - 100!" << endl;

	while (percobaan < 5) {
		cout << "\nMasukkan tebakan: ";
		cin >> tebakan;
	
		riwayat[percobaan] = tebakan;
		percobaan++;
		
		if (tebakan == angkaRahasia) {
			cout << "BENAR! Kamu berhasil menebak!" << endl;
			break;
		}
		else if (tebakan < angkaRahasia) {
			cout << "Terlalu kecil!" << endl;
		}
		else {
			cout << "Terlalu besar!" << endl;
		}
	}
	if(percobaan == 5 && tebakan != angkaRahasia){
		cout << "Kesempatan habis!\n"<<endl;
		cout << "Angka yang benar adalah : " << angkaRahasia << endl;
	}
	
	tampilkanRiwayat(riwayat, percobaan);	
	cout << "Jumlah percobaan: \n" << percobaan << endl;

	return 0;
}