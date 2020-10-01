#include "iApplications.h"

iApplications::iApplications(void)
{
}

iApplications::~iApplications(void)
{
}
void iApplications:: setsrno()
{
	cout<<"Enter the serial number of the Application: "<<endl;
	cin>>srno;
}
void iApplications:: setname()
{
	cout<<"Enter the name of the application: "<<endl;
	cin>>name;
}
void iApplications:: setdeveloper()
{
	cout<<"Enter the developers name: "<<endl;
	cin>>developer;
}
int iApplications:: getsrno()
{
	return srno;
}
string iApplications:: getname()
{
	return name;

}
string iApplications:: getdeveloper()
{
	return developer;
}
//void iApplications::applications_on_ios_write()
//{
//ofstream ff("ApplicationsonAppstore.txt");
//	if (ff.is_open())
//	{
//		for(int j=0;j<10;j++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		ff<<getsrno();
//		ff<<"\t";
//		ff<<getname();
//		ff<<"\t";
//		ff<<getdeveloper();
//		ff<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		ff.close();
//	}
//}
//void iApplications::applications_on_ios_read()
//{
//ifstream ifff ("ApplicationsonAppstore.txt");
//	int d;
//	string e;
//	string g;
//if (ifff.is_open())
//  {
//while ( ifff.good() )
//    {
//      ifff>>d;
//	  
//	  ifff>>e;
//	  ifff>>g;
//	  cout<<d<<"\t";
//	  cout<<e<<"\t";
//	  cout<<g<<endl;
//    }
//    ifff.close();
//}
//else 
//{
//cout << "Unable to open file"; 
//
//  }
//}
//void iApplications::applications_on_iphones_upload_write()
//{
//cout<<"Enter the number of applications you want to upload:"<<endl;
//	cin>>o;
//	ofstream ffff("Applications_to_upload_on_Appstore.txt");
//	if (ffff.is_open())
//	{
//		for(int ik=0;ik<o;ik++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		ffff<<getsrno();
//		ffff<<"\t";
//		ffff<<getname();
//		ffff<<"\t";
//		ffff<<getdeveloper();
//		ffff<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		ffff.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Uploaded"<<endl;
//	for(int il=0;il<=100;il++)
//	{
//		cout<<il<<"%"<<endl;
//	}
//	cout<<"Upload complete.";
//}
//void iApplications::applications_on_iphones_download_write()
//{
//cout<<"Enter the number of applications you want to download:"<<endl;
//	cin>>q;
//	ofstream ffffff("Applications_to_download_on_iPhone.txt");
//	if (ffffff.is_open())
//	{
//		for(int io=0;io<q;io++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		ffffff<<getsrno();
//		ffffff<<"\t";
//		ffffff<<getname();
//		ffffff<<"\t";
//		ffffff<<getdeveloper();
//		ffffff<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		ffffff.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Downloaded"<<endl;
//	for(int ip=0;ip<=100;ip++)
//	{
//		cout<<ip<<"%"<<endl;
//	}
//	cout<<"Download complete.";
//}
//void iApplications::applications_on_iphones_upload_read()
//{
//ifstream ifffff ("Applications_to_upload_on_Appstore.txt");
//	int ab;
//	string bb;
//	string cb;
//if (ifffff.is_open())
//  {
//while ( ifffff.good() )
//    {
//      ifffff>>ab;
//	  
//	  ifffff>>bb;
//	  ifffff>>cb;
//	  cout<<ab<<"\t";
//	  cout<<bb<<"\t";
//	  cout<<cb<<endl;
//    }
//    ifffff.close();
//  }
//
//}
//void iApplications::applications_on_iphones_download_read()
//{
//ifstream ifffffff ("Applications_to_download_on_iPhone.txt");
//	int ad;
//	string bd;
//	string cd;
//if (ifffffff.is_open())
//  {
//while ( ifffffff.good() )
//    {
//      ifffffff>>ad;
//	  
//	  ifffffff>>bd;
//	  ifffffff>>cd;
//	  cout<<ad<<"\t";
//	  cout<<bd<<"\t";
//	  cout<<cd<<endl;
//    }
//    ifffffff.close();
//  }
//}
//void iApplications::applications_on_iphones_upload_edit()
//{
//string name,developer;
//	int srno,aaaa,temp;
//	char check='y';
//	ifstream iapp("Applications_to_upload_on_Appstore.txt");
//	ofstream update("update.txt");
//	cout<<"1-update Application"<<endl;
//	cout<<"2-delete Application"<<endl;
//	cin>>aaaa;
//	switch(aaaa)
//	{
//	case 1:
//		{
//		cout<<endl<<"Enter serial number to update:";
//		cin>>temp;
//		while(iapp>>srno>>name>>developer)
//		{
//			if(temp==srno)
//			{
//				cout<<endl<<"Enter serial number of Application:";
//				cin>>srno;
//				fflush(stdin);
//				cout<<endl<<"Enter name of Application:";
//				getline(cin,name);
//				fflush(stdin);
//				cout<<endl<<"Enter name of developer:";
//				getline(cin,developer);
//				fflush(stdin);
//			}
//			update<<srno<<"  "<<name<<"  "<<developer<<endl;
//		}
//		}
//
//		break;
//	case 2:
//		{
//		cout<<endl<<"Enter srno to delete:";
//		cin>>temp;
//		while(iapp>>srno>>name>>developer)
//		{
//			if(temp!=srno)
//			{
//				update<<srno<<"  "<<name<<"  "<<developer<<endl;
//			}
//
//		}
//		}
//		break;
//	}
//
//	iapp.close();
//	update.close();
//
//	{
//		ifstream update("update.txt");
//		ofstream iapp("Applications_to_upload_on_Appstore.txt");
//		while(update>>srno>>name>>developer)
//		{
//			iapp<<srno<<"  "<<name<<"  "<<developer<<endl;
//		}
//	}
//	iapp.close();
//	update.close();
//
//	//printing fuction
//	ifstream iapps("Applications_to_upload_on_Appstore");
//	{
//	while(iapps>>srno>>name>>developer)
//	{
//		cout<<"\n"<<srno<<"   "<<name<<"   "<<developer<<endl;
//	}
//	iapps.close();
//	
//	}
//	
//	
//}
//void iApplications::applications_on_iphones_download_edit()
//{
//string _name,_developer;
//	int _srno,_d,_temp;
//	/*char check='y';*/
//	ifstream igame("Applications_to_download_on_iPhone.txt");
//	ofstream _update("update.txt");
//	cout<<"1-update Application"<<endl;
//	cout<<"2-delete Application"<<endl;
//	cin>>_d;
//	switch(_d)
//	{
//	case 1:
//		cout<<endl<<"Enter serial number to update:";
//		cin>>_temp;
//		while(igame>>_srno>>_name>>_developer)
//		{
//			if(_temp==_srno)
//			{
//				cout<<endl<<"Enter serial number of Application:";
//				cin>>_srno;
//				fflush(stdin);
//				cout<<endl<<"Enter name of Application:";
//				getline(cin,_name);
//				fflush(stdin);
//				cout<<endl<<"Enter name of developer:";
//				getline(cin,_developer);
//				fflush(stdin);
//			}
//			_update<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
//		}
//
//		break;
//	case 2:
//		cout<<endl<<"Enter serial number to delete:";
//		cin>>_temp;
//		while(igame>>_srno>>_name>>_developer)
//		{
//			if(_temp!=_srno)
//			{
//				_update<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
//			}
//
//		}
//		break;
//	}
//
//	igame.close();
//	_update.close();
//
//	{
//		ifstream _update("update.txt");
//		ofstream igame("Applications_to_download_on_iPhone.txt");
//		while(_update>>_srno>>_name>>_developer)
//		{
//			igame<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
//		}
//	}
//	igame.close();
//	_update.close();
//
//	//printing fuction
//	ifstream igames("Applications_to_download_on_iphone");
//	{
//	while(igames>>_srno>>_name>>_developer)
//	{
//		cout<<"\n"<<_srno<<"   "<<_name<<"   "<<_developer<<endl;
//	}
//	igames.close();
//	}
//	
//}