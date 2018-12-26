#include <iostream>
using namespace std;

float calcolaArea(int base, int altezza);

int main(){
	
	cout<<"Hello world\n";
	
	int area = calcolaArea(5, 3);
	cout<<"Area: "<<area;
	
}


float calcolaArea(int base, int altezza){
	return base * altezza / 2;
}
