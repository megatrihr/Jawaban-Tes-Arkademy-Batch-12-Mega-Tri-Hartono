#include<iostream>
using namespace std;

int main ()
{
    char str[500];
    int v = 0;
    cout << "Enter a string : ";
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'u' || str[i] == 'e' || str[i] == 'o' || str[i] == 'A' || str[i] == 'I' || str[i] == 'U' || str[i] == 'E' || str[i] == 'O')
            v++;
    }
    cout << "Number of vowels : " << v;
    return 0;
}
