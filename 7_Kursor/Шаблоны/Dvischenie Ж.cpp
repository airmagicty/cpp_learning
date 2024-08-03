#include <iostream>
#include <conio.h>
using namespace std;
 
const int sizeH = 20;
const int sizeV = 60;
 
void pole (int arr[sizeH][sizeV]);
void Show(int arr[sizeH][sizeV]);
void dvizhenie(int arr[sizeH][sizeV], int b);
int x=5,y=5;
 
int main()
{
    int mas[sizeH][sizeV];
   for (int i=0; i<sizeH; ++i)
    {
        for (int j=0; j<sizeV; ++j)
        {
            mas[i][j]=0;
        }
   }
    mas[x][y]=1;
 
    Show(mas);
    while (true)
    {
        int b=_getch();
        system("cls");
        dvizhenie(mas,b);
        Show(mas);
 
    }
}
 
void pole (int arr[sizeH][sizeV])
{
    for (int i=0; i<sizeV; ++i)
    {
        for (int j=0; j<sizeH; ++j)
        {
            if (i==0 && j==0)
                cout<<"*";
            else if (i==0 && j==59)
                cout<<"*";
            else if (i==19 && j==59)
                cout<<"*";
            else if (i==19 && j==0)
                cout<<"*";
            else if (i==0)
                cout<<"-";
            else if (j==0)
                cout<<"|";
            else if (i==19)
                cout<<"-";
            else if (j==59)
                cout<<"|";
            else 
                cout<<" ";
        }
        cout<<endl;
    }
}
 
void Show(int arr[sizeH][sizeV])
{   
    for (int i=0; i<sizeH; ++i)
    {
        for (int j=0; j<sizeV; ++j)
        {
            //arr[i][j]=0;
            //arr[5][5]=1;
            if (arr[i][j]==1)
                cout<<'*';
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
 
void dvizhenie(int arr[sizeH][sizeV], int a)
{
 
    switch(a)
    {
    case 72:
        arr[x][y]=0;
        x--;
        arr[x][y]=1; 
        break;
    case 80:
        arr[x][y]=0;
        x++;
        arr[x][y]=1; 
        break;
    case 75:
        arr[x][y]=0;
        y--;
        arr[x][y]=1; 
        break;
    case 77:
        arr[x][y]=0;
        y++;
        arr[x][y]=1; 
        break;
    default :
        cout<<"ne strelka";
    }
}
