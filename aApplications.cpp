#include "aApplications.h"
#include <fstream>

aApplications::aApplications(void)
{
}

aApplications::~aApplications(void)
{
}
void aApplications:: setsrno()
{
	cout<<"Enter the serial number of the Application: "<<endl;
	cin>>srno;
}
void aApplications:: setname()
{
	cout<<"Enter the name of the application: "<<endl;
	cin>>name;
}
void aApplications:: setdeveloper()
{
	cout<<"Enter the developers name: "<<endl;
	cin>>developer;
}
int aApplications:: getsrno()
{
	return srno;
}
string aApplications:: getname()
{
	return name;

}
string aApplications:: getdeveloper()
{
	return developer;
}
//void applications_on_ps_write()
//{
//ofstream __f("Applications_on_Playstore.txt");
//	if (__f.is_open())
//	{
//		for(int ir=0;ir<10;ir++)
//	{
//		aApplications::setsrno();
//		aApplications::setname();
//		aApplications::setdeveloper();
//		__f<<aApplications::getsrno();
//		__f<<"\t";
//		__f<<aApplications::getname();
//		__f<<"\t";
//		__f<<aApplications::getdeveloper();
//		__f<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		__f.close();
//	}
//}
//void applications_on_ps_read()
//{
//ifstream __iff ("applications_on_Playstore.txt");
//	int af;
//	string bf;
//	string cf;
//if (__iff.is_open())
//  {
//while ( __iff.good() )
//    {
//      __iff>>af;
//	  
//	  __iff>>bf;
//	  __iff>>cf;
//	  cout<<af<<"\t";
//	  cout<<bf<<"\t";
//	  cout<<cf<<endl;
//    }
//    __iff.close();
//  }
//else 
//{
//	cout << "Unable to open file";
//}
//}
//void applications_on_galaxy_upload_write()
//{
//cout<<"Enter the number of applications you want to upload:"<<endl;
//	cin>>s;
//	ofstream ____f("Applications_to_upload_on_PlayStore.txt");
//	if (____f.is_open())
//	{
//		for(int iu=0;iu<s;iu++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		____f<<getsrno();
//		____f<<"\t";
//		____f<<getname();
//		____f<<"\t";
//		____f<<getdeveloper();
//		____f<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		f.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Uploaded"<<endl;
//	for(int iv=0;iv<=100;iv++)
//	{
//		cout<<iv<<"%"<<endl;
//	}
//	cout<<"Upload complete.";
//}
//void applications_on_galaxy_download_write()
//{
//cout<<"Enter the number of applications you want to download:"<<endl;
//	cin>>q;
//	ofstream f__("Applications_to_download_on_galaxys5.txt");
//	if (f__.is_open())
//	{
//		for(int iy=0;iy<q;iy++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		f__<<aa.getsrno();
//		f__<<"\t";
//		f__<<getname();
//		f__<<"\t";
//		f__<<getdeveloper();
//		f__<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		f__.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Downloaded"<<endl;
//	for(int iy=0;iy<=100;iy++)
//	{
//		cout<<iy<<"%"<<endl;
//	}
//	cout<<"Download complete.";
//}
//void applications_on_galaxy_upload_read()
//{
//ifstream ____iff ("Applications_to_upload_on_PlayStore.txt");
//	int ah;
//	string bh;
//	string ch;
//if (____iff.is_open())
//  {
//while ( ____iff.good() )
//    {
//      ____iff>>ah;
//	  
//	  ____iff>>bh;
//	  ____iff>>ch;
//	  cout<<ah<<"\t";
//	  cout<<bh<<"\t";
//	  cout<<ch<<endl;
//    }
//    ____iff.close();
//  }
//}
//void applications_on_galaxy_download_read()
//{
//ifstream iff__ ("Applications_to_download_on_galaxys5.txt");
//	int aj;
//	string bj;
//	string cj;
//if (iff__.is_open())
//  {
//while ( iff__.good() )
//    {
//      iff__>>aj;
//	  
//	  iff__>>bj;
//	  iff__>>cj;
//	  cout<<aj<<"\t";
//	  cout<<bj<<"\t";
//	  cout<<cj<<endl;
//    }
//    iff__.close();
//  }
//}
//void applications_on_galaxy_upload_edit()
//{
//string name_,developer_;
//	int srno_,aaaa_,temp_;
//	/*char check='y';*/
//	ifstream aapp("Applications_to_upload_on_playstore.txt");
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
//		ofstream aapp("Applications_to_upload_on_playstore.txt");
//		while(update_>>srno_>>name_>>developer_)
//		{
//			aapp<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
//		}
//	}
//	aapp.close();
//	update_.close();
//
//	//printing fuction
//	ifstream aapps("Applications_to_upload_on_playstore");
//	{
//	while(aapps>>srno_>>name_>>developer_)
//	{
//		cout<<"\n"<<srno_<<"   "<<name_<<"   "<<developer_<<endl;
//	}
//	aapps.close();
//	
//	}
//}
//void applications_on_galaxy_download_edit()
//{
//string name__,developer__;
//	int srno__,aaaa__,temp__;
//	/*char check='y';*/
//	ifstream aapp__("Applications_to_download_on_galaxys5.txt");
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
//		ofstream aapp__("Applications_to_download_on_galaxys5.txt");
//		while(update__>>srno__>>name__>>developer__)
//		{
//			aapp__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
//		}
//	}
//	aapp__.close();
//	update__.close();
//
//	//printing fuction
//	ifstream aapps__("Applications_to_download_on_galaxys5.txt");
//	{
//	while(aapps__>>srno__>>name__>>developer__)
//	{
//		cout<<"\n"<<srno__<<"   "<<name__<<"   "<<developer__<<endl;
//	}
//	aapps__.close();
//	
//	}
//}