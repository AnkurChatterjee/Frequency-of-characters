#include<iostream>
#include<string>
#include<string.h>
#include<conio.h>
using namespace std;
class Frequency
{
public:
    void counter(string s)
    {
        int c;
        char arr[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        for(int i=0;i<26;i++)
        {
            c=0;
            for(int j=0;j<s.length();j++)
            {
                if(arr[i]==s[j]||arr[i]==s[j]-32)
                c++;
            }
            if(c>0)
                cout<<arr[i]<<": "<<c<<"\n";
        }
    }
};
int main()
{
    Frequency obj;
    string str;
    cout<<"Enter a line of text: ";
    getline(cin,str);
    cout<<"\nFrequency of each character in the string:\n";
    obj.counter(str);
    cout<<"\nPress any key to exit: ";
    getch();
}
