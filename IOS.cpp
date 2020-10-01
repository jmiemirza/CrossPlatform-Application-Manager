#include "IOS.h"
#include <fstream>
IOS::IOS(void)
{
	password=0;
	email_address='0';
}

IOS::~IOS(void)
{
}
void IOS::ph_memory()
{
	cout<<"You have 2gb free memory on your iPhone"<<endl;
	int a=200000;
}
void IOS::applications_on_ios()
{
	cout<<"The app store conatins the following applications:"<<endl;
}
void IOS::games_on_ios()
{
	cout<<"The app store contains the following games:"<<endl;
}
void IOS::applications_to_download()
{
}
void IOS::games_to_download()
{
}

void IOS::set_email_id()
{
	cout<<"Please enter your apple email address:(e.g: example@apple.com) "<<endl;
	cin>>email_address;
}

string IOS::get_email_id()
{
	return email_address;
}
void IOS::set_password()
{
	cout<<"Please enter the password:"<<endl;
	cin>>password;
}
int IOS::get_password()
{
	return password;
}