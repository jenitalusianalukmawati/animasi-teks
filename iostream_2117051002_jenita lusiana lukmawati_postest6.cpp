#include <ncurses/ncurses.h>
#include <iostream>
#include <windows.h>

using namespace std;


void animasi (char kata[100])
{
	for (int i=0; i<strlen(kata); i++)
	{
		cout<<kata[i];
		Sleep(500);
	}
}

int main()
{
	system ("color DE");
	animasi ("JENITA LUSIANA LUKMAWATI");
	cout << endl;
	system ("color E4");
	animasi ("       2117051002");
	
}



// D = Light Purple
// E = Light Yellow
// 4 = Red
