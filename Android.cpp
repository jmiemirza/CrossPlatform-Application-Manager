#include "Android.h"
#include <fstream>
Android::Android(void)
{
	email_address='0';
	password=0;
}

Android::~Android(void)
{
}
void Android::memory()
{
	cout<<"You have a total of 2 gb storing capacity on your phone."<<endl;
	int a;
	a=200000;
}
void Android::games_on_ps()
{
	cout<<"Following games are on the Google Play Store:"<<endl;
}
void Android::applications_on_ps()
{
	cout<<"Following applications are on the Play Store:"<<endl;
}
void Android::games_to_download()
{
}
void Android::applications_to_download()
{
}
void Android::set_email_id()
{
	cout<<"Please enter your Google email address:(e.g: example@gmail.com) "<<endl;
	cin>>email_address;
}

string Android::get_email_id()
{
	return email_address;
}
void Android::set_password()
{
	cout<<"Please enter the password:"<<endl;
	cin>>password;
}
int Android::get_password()
{
	return password;
}

