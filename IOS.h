#pragma once
#include "Appstore.h"

class IOS :
	public AppStore
{
protected:

	string email_address;
	int password;
	int memory ;

public:
	void ph_memory();
	void applications_on_ios();
	void games_on_ios();
	void applications_to_download();
	void games_to_download();
	void set_email_id();
	string get_email_id();
	void set_password();
	int get_password();

	IOS(void);
	~IOS(void);
};
