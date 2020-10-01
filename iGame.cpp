#include "iGame.h"

iGame::iGame(void)
{
	
}

iGame::~iGame(void)
{
}
void iGame:: setsrno()
{
	cout<<"Enter the serial number of the game: "<<endl;
	cin>>srno;
}
void iGame:: setname()
{
	cout<<"Enter the name of the game: "<<endl;
	cin>>name;
}
void iGame:: setdeveloper()
{
	cout<<"Enter the developers name: "<<endl;
	cin>>developer;
}
int iGame:: getsrno()
{
	return srno;
}
string iGame:: getname()
{
	return name;

}
string iGame:: getdeveloper()
{
	return developer;
}
//void iGame:: games_on_ios_write()
//{
//	ofstream f("gamesonAppstore.txt");
//	if (f.is_open())
//	{
//		for(int i=0;i<10;i++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		f<<getsrno();
//		f<<"\t";
//		f<<getname();
//		f<<"\t";
//		f<<getdeveloper();
//		f<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		f.close();
//	}
//}
//void iGame::games_on_ios_read()
//{
//ifstream iff ("gamesonAppstore.txt");
//	int a;
//	string b;
//	string c;
//if (iff.is_open())
//  {
//while ( iff.good() )
//    {
//      iff>>a;
//	  
//	  iff>>b;
//	  iff>>c;
//	  cout<<a<<"\t";
//	  cout<<b<<"\t";
//	  cout<<c<<endl;
//    }
//    iff.close();
//  }
//			
//
//else 
//{
//cout << "Unable to open file";
//}
//}
//void iGame::games_on_iphones_download_write()
//{
//cout<<"Enter the number of games you want to download on iPhone: "<<endl;
//cin>>p;
//ofstream fffff("games_to_download_on_iPhone.txt");
//	if (fffff.is_open())
//	{
//		for(int im=0;im<p;im++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		fffff<<getsrno();
//		fffff<<"\t";
//		fffff<<getname();
//		fffff<<"\t";
//		fffff<<getdeveloper();
//		fffff<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		fffff.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Downloaded"<<endl;
//	for(int in=0;in<=100;in++)
//	{
//		cout<<in<<"%"<<endl;
//	}
//	cout<<"Download complete.";
//
//}
//void iGame::games_on_iphones_upload_write()
//{
//cout<<"Enter the number of games you want to upload: "<<endl;
//cin>>n;
//ofstream fff("games_to_upload_on_Appstore.txt");
//	if (fff.is_open())
//	{
//		for(int k=0;k<n;k++)
//	{
//		setsrno();
//		setname();
//		setdeveloper();
//		fff<<getsrno();
//		fff<<"\t";
//		fff<<getname();
//		fff<<"\t";
//		fff<<getdeveloper();
//		fff<<endl;
//		}
//	}
//	else
//	{
//		cout<<"Error";
//		fff.close();
//	}
//	cout<<"Waiting for server to respond..."<<endl;
//	cout<<"Uploaded"<<endl;
//	for(int ij=0;ij<=100;ij++)
//	{
//		cout<<ij<<"%"<<endl;
//	}
//	cout<<"Upload complete.";
//}
//void iGame::games_on_iphones_download_read()
//{
//ifstream iffffff ("games_to_download_on_iPhone.txt");
//	int ac;
//	string bc;
//	string cc;
//if (iffffff.is_open())
//  {
//while ( iffffff.good() )
//    {
//      iffffff>>ac;
//	  
//	  iffffff>>bc;
//	  iffffff>>cc;
//	  cout<<ac<<"\t";
//	  cout<<bc<<"\t";
//	  cout<<cc<<endl;
//    }
//    iffffff.close();
//  }
//			
//
//else cout << "Unable to open file";
//}
//void iGame::games_on_iphones_upload_read()
//{
//ifstream iffff ("games_to_upload_on_Appstore.txt");
//	int aaa;
//	string ba;
//	string ca;
//if (iffff.is_open())
//  {
//while ( iffff.good() )
//    {
//      iffff>>aaa;
//	  
//	  iffff>>ba;
//	  iffff>>ca;
//	  cout<<aaa<<"\t";
//	  cout<<ba<<"\t";
//	  cout<<ca<<endl;
//    }
//    iffff.close();
//  }
//			
//
//else cout << "Unable to open file"; 
//}
//void iGame::games_on_iphones_upload_edit()
//{
//string name,developer;
//	int srno,aaaa,temp;
//	char check='y';
//	ifstream iapp("games_to_upload_on_Appstore.txt");
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
//		ofstream iapp("games_to_upload_on_Appstore.txt");
//		while(update>>srno>>name>>developer)
//		{
//			iapp<<srno<<"  "<<name<<"  "<<developer<<endl;
//		}
//	}
//	iapp.close();
//	update.close();
//
//	//printing fuction
//	ifstream iapps("games_to_upload_on_Appstore.txt");
//	{
//	while(iapps>>srno>>name>>developer)
//	{
//		cout<<"\n"<<srno<<"   "<<name<<"   "<<developer<<endl;
//	}
//	iapps.close();
//	
//	}
//	
//}
//void iGame::games_on_iphones_download_edit()
//{
//	string _name,_developer;
//	int _srno,_d,_temp;
//	/*char check='y';*/
//	ifstream igame("games_to_download_on_iPhone.txt");
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
//		ofstream igame("games_to_download_on_iPhone.txt");
//		while(_update>>_srno>>_name>>_developer)
//		{
//			igame<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
//		}
//	}
//	igame.close();
//	_update.close();
//
//	//printing fuction
//	ifstream igames("games_to_download_on_iPhone.txt");
//	{
//	while(igames>>_srno>>_name>>_developer)
//	{
//		cout<<"\n"<<_srno<<"   "<<_name<<"   "<<_developer<<endl;
//	}
//	igames.close();
//	}
//}