/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class Karakter {
public:
	string adi;
	int sutgucu;
	void hiz() {
		cout<<adi<<" Şut atıyor"<<endl;
	}
};

int main()
{
	Karakter karakter1;
	karakter1.adi ="Kenan Yıldız";
	karakter1.sutgucu =90;

	Karakter karakter2;
	karakter2.adi="Arda Güler";
	karakter2.sutgucu=86;

    Karakter karakter3;
	karakter3.adi ="Hakan Çalhanoğlu";
	karakter3.sutgucu =90;

	cout<<"Juventus 10 Numarası:"<<karakter1.adi<<endl;
	cout<<"Real Madrid 15 Numarası:"<<karakter2.adi<<endl;
	cout<<"İnter 20 Numarası:"<<karakter3.adi<<endl;

	karakter1.hiz();
	karakter2.hiz();
    karakter3.hiz();

    return 0;
}