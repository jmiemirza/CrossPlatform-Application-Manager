#include "aGame.h"

aGame::aGame(void)
{
}

aGame::~aGame(void)
{
}
void aGame:: setsrno()
{
	cout<<"Enter the serial number of the game: "<<endl;
	cin>>srno;
}
void aGame:: setname()
{
	cout<<"Enter the name of the game: "<<endl;
	cin>>name;
}
void aGame:: setdeveloper()
{
	cout<<"Enter the developers name: "<<endl;
	cin>>developer;
}
int aGame:: getsrno()
{
	return srno;
}
string aGame:: getname()
{
	return name;

}
string aGame:: getdeveloper()
{
	return developer;
}
//void games_on_ps_write()
//{
//ofstream _f("games_on_Playstore.txt");
//	if (_f.is_open())
//	{
//		for(int iq=0;iq<10;iq++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		_f<<getsrno();
//		_f<<"\t";
//		_f<<getname();
//		_f<<"\t";
//		_f<<getdeveloper();
//		_f<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		_f.close();
//	}
//}
//void games_on_ps_read()
//{
//	ifstream _iff ("games_on_Playstore.txt");
//	int ae;
//	string be;
//	string ce;
//if (_iff.is_open())
//  {
//while ( _iff.good() )
//    {
//      _iff>>ae;
//	  
//	  _iff>>be;
//	  _iff>>ce;
//	  cout<<ae<<"\t";
//	  cout<<be<<"\t";
//	  cout<<ce<<endl;
//    }
//    _iff.close();
//  }
//			
//
//else 
//	{
//		cout << "Unable to open file";
//	}
//}
//void games_on_galaxy_upload_write()
//{
//cout<<"Enter the number of games you want to upload: "<<endl;
//cin>>r;
//ofstream ___f("games_to_upload_on_PlayStore.txt");
//	if (___f.is_open())
//	{
//		for(int is=0;is<r;is++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		___f<<getsrno();
//		___f<<"\t";
//		___f<<getname();
//		___f<<"\t";
//		___f<<getdeveloper();
//		___f<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		f.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Uploaded"<<endl;
//	for(int it=0;it<=100;it++)
//	{
//		cout<<it<<"%"<<endl;
//	}
//	cout<<"Upload complete.";
//}
//void games_on_galaxy_download_write()
//{
//cout<<"Enter the number of games you want to download on Galaxy s5: "<<endl;
//cin>>t;
//ofstream f_("games_to_download_on_galaxys5.txt");
//	if (f_.is_open())
//	{
//		for(int iw=0;iw<t;iw++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		f_<<getsrno();
//		f_<<"\t";
//		f_<<getname();
//		f_<<"\t";
//		f_<<getdeveloper();
//		f_<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		f_.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Downloaded"<<endl;
//	for(int ix=0;ix<=100;ix++)
//	{
//		cout<<ix<<"%"<<endl;
//	}
//	cout<<"Download complete.";
//}
//void games_on_galaxy_upload_read()
//{
//ifstream ___iff ("games_to_upload_on_PlayStore.txt");
//	int _ag;
//	string bg;
//	string cg;
//if (___iff.is_open())
//  {
//while ( ___iff.good() )
//    {
//      ___iff>>_ag;
//	  
//	  ___iff>>bg;
//	  ___iff>>cg;
//	  cout<<_ag<<"\t";
//	  cout<<bg<<"\t";
//	  cout<<cg<<endl;
//    }
//    ___iff.close();
//  }
//			
//
//else cout << "Unable to open file"; 
//}
//void games_on_galaxy_download_read()
//{
//	ifstream iff_ ("games_to_download_on_galaxys5.txt");
//	int ai;
//	string bi;
//	string ci;
//if (iff_.is_open())
//  {
//while ( iff_.good() )
//    {
//      iff_>>a;
//	  
//	  iff_>>b;
//	  iff_>>c;
//	  cout<<ai<<"\t";
//	  cout<<bi<<"\t";
//	  cout<<ci<<endl;
//    }
//    iff_.close();
//  }
//			
//
//else
//{
//cout << "Unable to open file";
//}
//}
//void games_on_galaxy_upload_edit()
//{
//	string name_,developer_;
//	int srno_,aaaa_,temp_;
//	/*char check='y';*/
//	ifstream aapp("games_to_upload_on_PlayStore.txt");
//	ofstream update_("update.txt");
//	cout<<"1-update Application"<<endl;
//	cout<<"2-delete Application"<<endl;
//	cin>>aaaa_;
//	switch(aaaa_)
//	{
//	case 1:
//		{
//		cout<<endl<<"Enter serial number to update:";
//		cin>>temp_;
//		while(aapp>>srno_>>name_>>developer_)
//		{
//			if(temp_==srno_)
//			{
//				cout<<endl<<"Enter serial number of Application:";
//				cin>>srno_;
//				fflush(stdin);
//				cout<<endl<<"Enter name of Application:";
//				getline(cin,name_);
//				fflush(stdin);
//				cout<<endl<<"Enter name of developer:";
//				getline(cin,developer_);
//				fflush(stdin);
//			}
//			update_<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
//		}
//		}
//
//		break;
//	case 2:
//		{
//		cout<<endl<<"Enter srno to delete:";
//		cin>>temp_;
//		while(aapp>>srno_>>name_>>developer_)
//		{
//			if(temp_!=srno_)
//			{
//				update_<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
//			}
//
//		}
//		}
//		break;
//	}
//
//	aapp.close();
//	update_.close();
//
//	{
//		ifstream update_("update.txt");
//		ofstream aapp("games_to_upload_on_PlayStore.txt");
//		while(update_>>srno_>>name_>>developer_)
//		{
//			aapp<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
//		}
//	}
//	aapp.close();
//	update_.close();
//
//	//printing fuction
//	ifstream aapps("games_to_upload_on_PlayStore.txt");
//	{
//	while(aapps>>srno_>>name_>>developer_)
//	{
//		cout<<"\n"<<srno_<<"   "<<name_<<"   "<<developer_<<endl;
//	}
//	aapps.close();
//	
//	}
//}
//void games_on_galaxy_download_edit()
//{
//	string name__,developer__;
//	int srno__,aaaa__,temp__;
//	/*char check='y';*/
//	ifstream aapp__("games_to_download_on_galaxys5.txt");
//	ofstream update__("update.txt");
//	cout<<"1-update Application"<<endl;
//	cout<<"2-delete Application"<<endl;
//	cin>>aaaa__;
//	switch(aaaa__)
//	{
//	case 1:
//		{
//		cout<<endl<<"Enter serial number to update:";
//		cin>>temp__;
//		while(aapp__>>srno_>>name_>>developer_)
//		{
//			if(temp__==srno__)
//			{
//				cout<<endl<<"Enter serial number of Application:";
//				cin>>srno__;
//				fflush(stdin);
//				cout<<endl<<"Enter name of Application:";
//				getline(cin,name__);
//				fflush(stdin);
//				cout<<endl<<"Enter name of developer:";
//				getline(cin,developer__);
//				fflush(stdin);
//			}
//			update__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
//		}
//		}
//
//		break;
//	case 2:
//		{
//		cout<<endl<<"Enter srno to delete:";
//		cin>>temp__;
//		while(aapp__>>srno__>>name__>>developer__)
//		{
//			if(temp__!=srno__)
//			{
//				update__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
//			}
//
//		}
//		}
//		break;
//	}
//
//	aapp__.close();
//	update__.close();
//
//	{
//		ifstream update__("update.txt");
//		ofstream aapp__("games_to_download_on_galaxys5.txt");
//		while(update__>>srno__>>name__>>developer__)
//		{
//			aapp__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
//		}
//	}
//	aapp__.close();
//	update__.close();
//
//	//printing fuction
//	ifstream aapps__("games_to_download_on_galaxys5.txt");
//	{
//	while(aapps__>>srno__>>name__>>developer__)
//	{
//		cout<<"\n"<<srno__<<"   "<<name__<<"   "<<developer__<<endl;
//	}
//	aapps__.close();
//	
//	}
//}

