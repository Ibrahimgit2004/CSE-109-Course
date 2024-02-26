#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{

    int i;
    scanf("%d", &i);
HANDLE hc = GetStdHandle(STD_OUTPUT_HANDLE);
for (i = i; i>=10; i++)
{
SetConsoleTextAttribute(hc, i);
cout<<"Osama Ahmed Ibrahim+sarah=love";
SetConsoleTextAttribute(hc, 0x07);
cout<<"!"<<endl;
	}
getch();
}

