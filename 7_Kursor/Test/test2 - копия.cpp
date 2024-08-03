#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <stdio.h>

#include <gdiplus.h>

using namespace std;

//#define _WIN32_WINNT    0x0501        //xp
//#include <windows.h>

int main()
{ 
    RECT rc;
    HWND hwnd = FindWindow(TEXT("Notepad"), NULL);    //the window can't be min
    if (hwnd == NULL)
    {
        cout << "it can't find any 'note' window" << endl;
        return 0;
    }
    GetClientRect(hwnd, &rc);

    //create
    HDC hdcScreen = GetDC(NULL);
    HDC hdc = CreateCompatibleDC(hdcScreen);
    HBITMAP hbmp = CreateCompatibleBitmap(hdcScreen, 
        rc.right - rc.left, rc.bottom - rc.top);
    SelectObject(hdc, hbmp);

    //Print to memory hdc
    PrintWindow(hwnd, hdc, PW_CLIENTONLY);

    //copy to clipboard
    OpenClipboard(NULL);
    EmptyClipboard();
    SetClipboardData(CF_BITMAP, hbmp);
    CloseClipboard();

    //release
    DeleteDC(hdc);
    DeleteObject(hbmp);
    ReleaseDC(NULL, hdcScreen);

    cout << "success copy to clipboard, please paste it to the 'mspaint'" << endl;

    return 0;
}
