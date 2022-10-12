// NAMA		: Richo Yudha Kurniawan
// NRP		: 5025221242
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SIN90 1 //sudut elevasi tembakan

int mencari_V0(int Vt, int speedloss)
{
	/* Tulis fungsi mencari v0 kalian disini */
  	return (Vt - speedloss); 
}

int speed_dgn_loss(int speedloss)
{
	/* tulis fungsi hitung_loss kalian disini */
	if (speedloss>=1 && speedloss<=10){
		speedloss = 1;
	}
	else if (speedloss>=11 && speedloss<=20){
	    speedloss = 3;
    }
	else if (speedloss>=21 && speedloss<=30){
		speedloss = 5;
    }
    return speedloss;
}

int main() {
    /* tulis kode utama kalian disini */
    	int Vt;
    	int s;
    	double v0;
    	int speedloss;
  	/* input adalah kecepatan tangensial maksimum roller */
  	/* std::cin >> input */
    std::cin >> Vt;
    speedloss = speed_dgn_loss (Vt);
    v0 = mencari_V0 (Vt, speedloss);
    s = ((v0 * v0) * SIN90) / GRAVITASI;
    v0 =  sqrt(s * GRAVITASI) + speedloss;
  	/* std::cout << jarak << " " << kecepatan tangensial << std::endl */
  	std::cout << s << " " << v0 << std::endl;
    return 0;
}
