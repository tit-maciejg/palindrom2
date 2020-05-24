#include <iostream>
#include <fstream>

using namespace std;
string s;
int suma=0;
int parzyste=0;
int nieparzyste=0;
bool palindrom (string s)
{
    int dl=s.size();
    for (int i=0;i<dl/2;i++)
        if (s[i]!=s[dl-i-1]) return false;
    return true;
}
fstream dane;
int main()
{
    cout << "Oto twoje palindromy:" << endl;
    dane.open("dane.txt",ios::in);
     while (dane.good())
    {
        if(palindrom(s))
        {
            int dlugosc=s.length();
            if (dlugosc%2==0)
                parzyste++;
                else
                    nieparzyste++;


        }
        dane>>s;
        if (palindrom(s)) cout << s << endl;
        for (int i=0;i<1000;i++);
        {
           if (palindrom(s)) suma=suma+1;
        }
    }
    dane.close();
    cout <<"Oto suma twoich palindromow: " << suma << endl;
    cout << endl;
    cout << "Palindromy parzyste: " << parzyste << endl;
    cout <<"Palindromy nieparzyste: " << nieparzyste<< endl;
    cout << "Program Macieja Grzechowiaka" << endl;
    return 0;
}
