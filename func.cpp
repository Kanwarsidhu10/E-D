#include"header.h"
using namespace std;

void ED::encryptyfunc()
{
	cout<<"Enter a message to encrypt:  "<<endl;
	cin>>text;
	cout<<"Enter the key: "<<endl;
	cin>>key;
	for(i=0;text[i] != '\0';i++)
	{
		temp = text[i];
		if(temp >= 'a' && temp <= 'z')
		{
			temp = temp + key;
			if(temp > 'z')
			{
				temp = temp - 'z' + 'a' - 1;
			}
			text[i] = temp;
		}
		else if(temp >= 'A' && temp <= 'Z')
		{
			temp=temp + key;
			if(temp > 'Z' )
			{
				temp = temp - 'Z' + 'A' -1;
			}
			text[i] = temp;
		}
	}
	cout<<"Encrypted message: "<<text<<endl;
}
void ED::decryptfunc()
{
	temp=temp+key;
	cout<<"Enter a message to decrypt: "<<endl;
	cin>>text;
	cout<<"Enter the key: "<<endl;
	cin>>key;
	for(i=0;text[i] != '\0';i++)
	{
		temp = text[i];
		if(temp >= 'a' && temp <= 'z')
		{
			temp = temp - key;
			if(temp < 'a')
			{
				temp = temp - 'z' - 'a' + 1;
			}
			text[i] = temp;
		}
		else if(temp >= 'A' && temp <= 'Z')
		{
			temp=temp - key;
			if(temp < 'A' )
			{
				temp = temp - 'Z' - 'A' + 1;
			}
			text[i] = temp;
		}
	}
	cout<<"Decrypted message: "<<text<<endl;
}
