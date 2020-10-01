#pragma once
#include "ios.h"

class iApplications :
	public IOS
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
	void applications_on_ios_write();
	void applications_on_ios_read();
	void applications_on_iphones_upload_write();
	void applications_on_iphones_download_write();
	void applications_on_iphones_upload_read();
	void applications_on_iphones_download_read();
	void applications_on_iphones_upload_edit();
	void applications_on_iphones_download_edit();
	iApplications(void);
	~iApplications(void);
};
