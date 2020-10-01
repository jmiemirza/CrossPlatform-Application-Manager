#pragma once
#include "android.h"

class aGame :
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
void games_on_ps_write();
	void games_on_ps_read();
	void games_on_galaxy_upload_write();
	void games_on_galaxy_download_write();
	void games_on_galaxy_upload_read();
	void games_on_galaxy_download_read();
	void games_on_galaxy_upload_edit();
	void games_on_galaxy_download_edit();

	aGame(void);
	~aGame(void);
};
