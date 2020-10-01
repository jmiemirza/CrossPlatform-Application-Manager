#pragma once
#include "IOS.h"

class iGame : public IOS
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
	void games_on_ios_write();
	void games_on_ios_read();
	void games_on_iphones_upload_write();
	void games_on_iphones_download_write();
	void games_on_iphones_upload_read();
	void games_on_iphones_download_read();
	void games_on_iphones_upload_edit();
	void games_on_iphones_download_edit();

	iGame(void);
	~iGame(void);
};
