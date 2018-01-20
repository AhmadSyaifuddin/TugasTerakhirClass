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
 	
 }
