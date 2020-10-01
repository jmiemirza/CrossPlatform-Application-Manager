#pragma once
#include "appstore.h"

class Android :
	public AppStore
{
	string email_address;
	int password;

public:
	void games_on_ps();
	void applications_on_ps();
	void games_to_download();
	void applications_to_download();
	void memory();
	void set_email_id();
	string get_email_id();
	int get_password();
	void set_password();
	Android(void);
	~Android(void);
};
