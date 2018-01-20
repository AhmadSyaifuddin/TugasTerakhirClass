#include <iostream>
#include <string>
//Nama : Ahmad Syaifuddin //
//NPM  : 16.71.0069       //

using namespace std;

class motor{
	public:
		int JumlahMotor;
		string merek;
		void racing(string kecepatan);
		void gantiKampasrem(string kampasrem);
		
		
};
 void motor::racing(string kecepatan) {
 	cout << "Kecepatan Motor : "<< kecepatan <<endl;
 }
 
 void motor::gantiKampasrem(string kampasrem) {
 	cout << "kampasrem motor : "<< kampasrem <<endl;
 }
 
 int main(){
 	//membuat objek class
 	motor motorBalap, motorDrag, motorSuperbike;
 	//memberi nilai
 	//drag
 	motorDrag.JumlahMotor= 150;
 	motorDrag.merek = "kawasaki";
 	//balap
 	motorBalap.JumlahMotor = 100;
 	motorBalap.merek = "yamaha";
 	//bebek
 	motorSuperbike.JumlahMotor = 200;
 	motorSuperbike.merek = "ducati";
 	string pilihan;
 	//
 	cout << "pilih motor : "; cin >> pilihan;
 	//
 	if (pilihan== "motorBalap"){
 		cout << "Motor Balap : "<<endl;
 		cout << "jumlah motor = "<<(motorBalap.JumlahMotor)<<"unit "<<endl;
 		cout << "Merek Motor =  "<<(motorBalap.merek)<<endl;
 	motorBalap.racing("250km/jam");
	motorBalap.gantiKampasrem("kampas new");
	}else if(pilihan=="motorDrag"){
		cout << "Motor drag : "<<endl;
		cout << "jumlah motor = "<<(motorDrag.JumlahMotor)<<" unit "<<endl;
		cout << "Merek Motor =  "<<(motorDrag.merek)<<endl;
	motorDrag.racing("300km/jam");
	motorDrag.gantiKampasrem("generalCT");
		
	}else if(pilihan=="motorSuperbike"){
		cout << "Motor Superbike : "<<endl;
		cout << "jumlah motor = "<<(motorSuperbike.JumlahMotor)<<"unit"<<endl;
		cout << "Merek Motor =  "<<(motorSuperbike.merek)<<endl;
	motorSuperbike.racing("500km/jam");
	motorSuperbike.gantiKampasrem("brembo");
    }else{
         cout<< "error";
  }
	
 }
