#pragma comment(lib, "winmm.lib")
#include <iostream>
#include <windows.h>
#include <mmsystem.h>
using namespace std;

int main()
{
    string music = "C:\\PARTITION-DEV\\KeyPlayer\\testmusic.wav";

    // PlaySound(TEXT("C:\\PARTITION-DEV\\KeyPlayer\\testmusic.mp3"), NULL, SND_SYNC);
    PlaySoundA(music.c_str(), NULL, SND_FILENAME | SND_ASYNC);

    int test = 0;

    cin >> test;
    return 0;
}