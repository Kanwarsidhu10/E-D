#include"header.h"
using namespace std;

int main ()
{
	ED obj;
	int choice;
	while(1)
	{
		cout<<"=================="<<endl;
		cout<<"Choose any one ! "<<endl;
		cout<<"1.Encryption \n2.Decryption\n3.EXIT\n==============================="<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: obj.encryptyfunc();
				break;
			case 2: obj.decryptfunc();
				break;
			case 3:exit(0);
				break;
			default:cout<<"Please enter valid option";
				break;
		}
	}
	return 0;
}
			
