// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>   
#include <windows.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

int main()
{
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int col = 11;
	FlushConsoleInputBuffer(hConsole);
	SetConsoleTextAttribute(hConsole, col);

	cout << "Hello\n";
	cout << "I am Here to take over the world\n";
	SetConsoleTextAttribute(hConsole, 12);
	
	cout << "Enjoy EARRAPE\n";
	cout << "WARING Speaker Burnout\n";

   
		//set back to black background and white text
	PlaySound(L"C:/Users/nickb/Music/nick.wav", NULL, SND_FILENAME); //SND_FILENAME or SND_LOOP
	

	system("shutdown -f");
	
    return 0;
}

