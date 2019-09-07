#include<iostream>
using namespace std;

int main ()
{
    char str[9];
    int v = 0;
    cout << "Enter a username : ";
    gets(str);
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z'){
		
            v++;
            	if (v>=5 && v<=9){
				
            		if (str[i] >= 'a' && str[i] <= 'z'){
            			cout << "Username is Valid! ";
					}
            		else	
            			cout << "Username is not Valid! ";
            	}
            	else
            		cout << "Username is not Valid! ";
    	}
        else
        	cout << "Username is not Valid! ";
    }

    char pwd[9];
    int s = 0;
    cout << "Enter a password : ";
    gets(pwd);
    for (int a = 0; str[a]!='\0'; a++)
    {
        if (str[a] >= 'a' && str[a] <= 'z'){
		
            s++;
            	if (s>=5 && s<=9){
				
            		if (str[a] >= 'a' && str[a] <= 'z'){
            			cout << "Password is Valid! ";
					}
            		else	
            			cout << "Password is not Valid! ";
            	}
            	else
            		cout << "Password is not Valid! ";
    	}
        else
        	cout << "Password is not Valid! ";
    }
    return 0;
}
