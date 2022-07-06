#include <iostream>
using namespace std;

const int TabEle = 5;
void swap(char& a, char& b);
void odwroc(char* tab, int left, int right);

int main()
{
    char tabl[TabEle] = { '1', '2', '3', '4', '5'};
    for (int i = 0; i < TabEle; i++)
    {
        cout << tabl[i] << "  ";
    }
    cout << endl;
    odwroc(tabl, 0, TabEle - 1);
    for (int i = 0; i < TabEle; i++)
    {
        cout << tabl[i] << "  ";
    }
    cout << endl;
    return 0;
}
void swap(char& a, char& b)
{
    int pomocnicza = a;
    a = b;
    b = pomocnicza;
}
void odwroc(char* tab, int left, int right)
{
    if (left < right)
    {
        swap(tab[left], tab[right]);
        odwroc(tab, left + 1, right - 1);
    }
}