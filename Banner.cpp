/* Created by Rizky Khapidsyah */
#include "Global_Identifier.h"

using namespace std;

static int Nomor;

class Banner
{
public:
	
	int i;

	void CetakGaris(char CParam1)
	{
		for (i = 0; i <= JG; i++)
		{
			cout << CParam1;
		} cout << endl;
	}

	void CetakSubtitle(
		string HL1, 
		string HL2, 
		string HL3, 
		string Judul, 
		char CParam2)
	{
		cout << HL1
			<< HL2
			<< HL3
			<< Judul 
			<< char(NULL)
			<< endl;

		CetakGaris(CParam2);
	} 
};

inline void BannerAll()
{
	Banner BA;
	BA.CetakGaris(GMin);
	
	Nomor++;
	
	switch (Nomor)
	{
	case 1:
		BA.CetakSubtitle(HSub1, TDua, Spasi, CSub1, GMin);
		break;
	case 2:
		BA.CetakSubtitle(HSub1, TDua, Spasi, CSub2, GMin);
		break;
	case 3:
		BA.CetakSubtitle(HSub1, TDua, Spasi, CSub3, GMin);
		break;
	case 4:
		BA.CetakSubtitle(HSub1, TDua, Spasi, CSub4, GMin);
		break;
	default:
		break;
	}
}