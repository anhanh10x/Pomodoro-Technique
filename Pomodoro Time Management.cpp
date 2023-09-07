#include <Windows.h>
#include<iostream>
#include<conio.h>
#include"word.h"
int main(void)
{
    // Hide the console window
    HWND hWnd;
    AllocConsole();
    hWnd = FindWindowA("ConsoleWindowClass", NULL);
    ShowWindow(hWnd,1);
    DisableResizeWindow();
    system("Color 70");
    SetWindowSize(25,8);
    DisableCtrButton(0,0,1);
    font(28);
    ShowCur(0);
    SetConsoleTitle("PROMOTO");
    int second=0,minute=0;
    int x=9,y=14;
    int count=0;
    
    while(true)
    {
        system("cls");
        SetColor(7,12);
        std::cout<<"     Get's started "<<(char)3;
        fflush(stdin);
        getch();
        system("cls");
        GoTo(7,1);
        std::cout<<(char)3<<"TOMATOES"<<(char)3<<endl;
       
        SetColor(7,0);
        GoTo(11,3);
        std::cout<<(char)5<<count;
        for(int i=1;i<1500;i++)
        {
            timer(minute,second,1500-i);
            if(minute<10)
            {
                GoTo(9,2);
                std::cout<<'0';
                x=10;
            }
            else
                x=9;
            GoTo(x,2);
            std::cout<<minute;
            std::cout<<" : ";
            if(second<10)
            {
                GoTo(14,2);
                std::cout<<'0';
                y=15;
            }
            else
                y=14;
            GoTo(y,2);
            std::cout<<second;
            Sleep(1000);
            ShowCur(0);
        }
        LockWorkStation();
        count++;
        GoTo(7,1);
        std::cout<<(char)3<<"TIMEBREAK"<<(char)3<<endl;
        for(int i=1;i<300;i++)
        {
            timer(minute,second,300-i);
            if(minute<10)
            {
                GoTo(9,2);
                std::cout<<'0';
                x=10;
            }
            else
                x=9;
            GoTo(x,2);
            std::cout<<minute;
            std::cout<<" : ";
            if(second<10)
            {
                GoTo(14,2);
                std::cout<<'0';
                y=15;
            }
            else
                y=14;
            GoTo(y,2);
            std::cout<<second;
            Sleep(1000);
            ShowCur(0);
        }
    }
}