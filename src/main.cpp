#pragma comment(lib, "winmm.lib")
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    char currentChar;
    char prevChar;
    // Take input until enter is hit
    while (true)
    {
        currentChar = getch();
        cout << (int)currentChar << endl;
        if (currentChar == 113 && prevChar == 58)
        {
            break;
        }
        prevChar = currentChar;
    }

    return 0;
}