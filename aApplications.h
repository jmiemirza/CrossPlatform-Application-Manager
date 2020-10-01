#pragma once
#include "android.h"

class aApplications :
	public Android
{
private:
int srno;
string name;
string developer;
public:
	void setsrno();
	void setname();
	void setdeveloper();
	int getsrno();
	string getname();
	string getdeveloper();
	
void applications_on_ps_write();
	void applications_on_ps_read();
	void applications_on_galaxy_upload_write();
	void applications_on_galaxy_download_write();
	void applications_on_galaxy_upload_read();
	void applications_on_galaxy_download_read();
	void applications_on_galaxy_upload_edit();
	void applications_on_galaxy_download_edit();


	aApplications(void);
	~aApplications(void);
};
