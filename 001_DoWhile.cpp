/* 
	Created by Kelas Terbuka
	Modified by Rizky Khapidsyah
*/

/* FOKUS KE BAGIAN INI SAJA YAA */

#include "Global_Identifier.h"
#include "Banner.cpp"

using namespace std;

class DoWhile
{
public:

	void Contoh1()
	{
		BannerAll();
		A = 1;
		do {
			cout << LSub1 << TDua << Spasi << A << endl;
			A++;
		} while (A < 11);
		Selesai();
	}

	void Contoh2()
	{
		BannerAll();
		A = 1;
		cout << QSub1 << TDua << Spasi; cin >> B;
		do {
			cout << LSub2 << TDua << Spasi << A << endl;
			A++;
		} while (A < B + 1);
		Selesai();
	}

	void Selesai()
	{
		cout << End << endl << endl;
	}

private:	
	int A, B;
};