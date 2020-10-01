#include "AppStore.h"
#include "IOS.h"
#include "Android.h"
#include "iGame.h"
#include "iApplications.h"
#include <fstream>
#include "aGame.h"
#include "aApplications.h"
#include <windows.h>


int main()
{
	
 system ( "color 5f" );
	
	iGame ig;
	iApplications ia;
	aGame ag;
	aApplications aa;
	AppStore uas;
	IOS ioss;
	int choice,choice1,choice2;
	Android andr;
	int n;
	int o,p,q,r,s,t,u,x12=1,x13=1,x14=0;
	

	uas.welcome_message();
	uas.facilities();
	while (x14)
	{
ofstream f("gamesonAppstore.txt");
	if (f.is_open())
	{
		for(int i=0;i<10;i++)
	{
		ig.setsrno();
		ig.setname();
		fflush(stdin);
		ig.setdeveloper();
		f<<ig.getsrno();
		f<<"\t";
		f<<ig.getname();
		f<<"\t";
		fflush(stdin);
		f<<ig.getdeveloper();
		f<<endl;
		}
	}
	else
	{
		cout<<"Error";
		f.close();
	}
{
		ofstream ff("ApplicationsonAppstore.txt");
	if (ff.is_open())
	{
		for(int j=0;j<10;j++)
	{
		ia.setsrno();
		ia.setname();
		ia.setdeveloper();
		ff<<ia.getsrno();
		ff<<"\t";
		ff<<ia.getname();
		ff<<"\t";
		ff<<ia.getdeveloper();
		ff<<endl;
		}
	}
	else
	{
		cout<<"Error";
		ff.close();
	}

		}
ofstream _f("games_on_Playstore.txt");
	if (_f.is_open())
	{
		for(int iq=0;iq<10;iq++)
	{
		ag.setsrno();
		ag.setname();
		fflush(stdin);
		ag.setdeveloper();
		_f<<ag.getsrno();
		_f<<"\t";
		_f<<ag.getname();
		_f<<"\t";
		_f<<ag.getdeveloper();
		_f<<endl;
		}
	}
	else
	{
		cout<<"Error";
		_f.close();
	}
	
		
ofstream __f("Applications_on_Playstore.txt");
	if (__f.is_open())
	{
		for(int ir=0;ir<10;ir++)
	{
		aa.setsrno();
		aa.setname();
		fflush(stdin);
		aa.setdeveloper();
		__f<<aa.getsrno();
		__f<<"\t";
		__f<<aa.getname();
		__f<<"\t";
		__f<<aa.getdeveloper();
		__f<<endl;
		}
	}
	else
	{
		cout<<"Error";
		__f.close();
	}
	}

//}
	

	cout<<"Press 1 if you are a IOS user and 2 if you are an android user: "<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		{
			ioss.set_email_id();
			ioss.set_password();
			ioss.ph_memory();
			fflush(stdin);
			while( x12)
	{
			cout<<"You can do the following things from our platform: "<<endl;
			cout<<"1. Check the games on the AppStore."<<endl;
			cout<<"2. Check the application on the AppStore."<<endl;
			cout<<"3. Upload games on the AppStore."<<endl;
			cout<<"4. Upload apps on the AppStore."<<endl;
			cout<<"5. Check the games uploaded."<<endl;
			cout<<"6. Check the apps uploaded."<<endl;
			cout<<"7. Download games on your iPhone." <<endl;
			cout<<"8. Download apps on your iPhone."<<endl;
			cout<<"9. Check the downloaded games."<<endl;
			cout<<"10. Check the downloaded apps."<<endl;
			cout<<"11. Update and delete the applications uploaded."<<endl;
			cout<<"12. Update and delete the applications downloaded."<<endl;
			cout<<"13. Update and delete the games uploaded."<<endl;
			cout<<"14. Update and delete the games downloaded."<<endl;
			cout<<"Press any of the above numbers to perform the corresponding operation: "<<endl;
			cin>>choice1;
			switch(choice1)
			{
				//3.To open the igames file done
case 1:
	{
	ifstream iff ("gamesonAppstore.txt");
	int a;
	string b;
	string c;
if (iff.is_open())
  {
 while ( iff>>a>>b>>c)
    {
     
	  cout<<a<<"\t";
	  cout<<b<<"\t";
	  cout<<c<<endl;
    }
    iff.close();
  }
			

else 
{
cout << "Unable to open file";
}
	}
	break;
//4.To open the iApplcations file
case 2:
	{
ifstream ifff ("ApplicationsonAppstore.txt");
	int d;
	string e;
	string g;
if (ifff.is_open())
  {
while ( ifff>>d>>e>>g )
    {
     
	  cout<<d<<"\t";
	  cout<<e<<"\t";
	  cout<<g<<endl;
    }
    ifff.close();
}
else 
{
cout << "Unable to open file"; 

  }
	}
	break;
//5.The games to be uploaded on IOS are present here (Done)
case 3:
	{
cout<<"Enter the number of games you want to upload: "<<endl;
cin>>n;
ofstream fff("games_to_upload_on_Appstore.txt");
	if (fff.is_open())
	{
		for(int k=0;k<n;k++)
	{
		ig.setsrno();
		ig.setname();
		ig.setdeveloper();
		fff<<ig.getsrno();
		fff<<"\t";
		fff<<ig.getname();
		fff<<"\t";
		fff<<ig.getdeveloper();
		fff<<endl;
		}
	}
	else
	{
		cout<<"Error";
		fff.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Uploaded"<<endl;
	for(int ij=0;ij<=100;ij++)
	{
		cout<<ij<<"%";
	}
	cout<<"Upload complete.";
	}
	break;
	
//6.The applications to upload on IOS will be present here
case 4:
	{
	cout<<"Enter the number of applications you want to upload:"<<endl;
	cin>>o;
	ofstream ffff("Applications_to_upload_on_Appstore.txt");
	if (ffff.is_open())
	{
		for(int ik=0;ik<o;ik++)
	{
		ia.setsrno();
		ia.setname();
		fflush(stdin);
		ia.setdeveloper();
		ffff<<ia.getsrno();
		ffff<<"\t";
		ffff<<ia.getname();
		ffff<<"\t";
		ffff<<ia.getdeveloper();
		ffff<<endl;
		}
	}
	else
	{
		cout<<"Error";
		ffff.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Uploaded";
	for(int il=0;il<=100;il++)
	{
		cout<<il<<"%";
	}
	cout<<"Upload complete.";
	}
	break;
//7.To open the uploaded games file (Done)

case 5:
	{
		ifstream iffff ("games_to_upload_on_Appstore.txt");
	int aaa;
	string ba;
	string ca;
if (iffff.is_open())
  {
while ( iffff.good() )
    {
      iffff>>aaa;
	  
	  iffff>>ba;
	  iffff>>ca;
	  cout<<aaa<<"\t";
	  cout<<ba<<"\t";
	  cout<<ca<<endl;
    }
    iffff.close();
  }
			

else cout << "Unable to open file"; 
	}
	break;

//8.To open the uploaded Applcations file
case 6:
	{
ifstream ifffff ("Applications_to_upload_on_Appstore.txt");
	int ab;
	string bb;
	string cb;
if (ifffff.is_open())
  {
while ( ifffff.good() )
    {
      ifffff>>ab;
	  
	  ifffff>>bb;
	  ifffff>>cb;
	  cout<<ab<<"\t";
	  cout<<bb<<"\t";
	  cout<<cb<<endl;
    }
    ifffff.close();
  }
	}
	break;

//9.The games to be downloaded on iPhone are present here (DOne)
case 7:
	{
cout<<"Enter the number of games you want to download on iPhone: "<<endl;
cin>>p;
ofstream fffff("games_to_download_on_iPhone.txt");
	if (fffff.is_open())
	{
		for(int im=0;im<p;im++)
	{
		ig.setsrno();
		ig.setname();
		fflush(stdin);
		ig.setdeveloper();
		fffff<<ig.getsrno();
		fffff<<"\t";
		fffff<<ig.getname();
		fffff<<"\t";
		fffff<<ig.getdeveloper();
		fffff<<endl;
		}
	}
	else
	{
		cout<<"Error";
		fffff.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Downloaded"<<endl;
	for(int in=0;in<=100;in++)
	{
		cout<<in<<"%";
	}
	cout<<"Download complete.";
	}
	break;
	
//10.The applications to downloaded on iPhone will be present here
case 8:
	{
	cout<<"Enter the number of applications you want to download:"<<endl;
	cin>>q;
	ofstream ffffff("Applications_to_download_on_iPhone.txt");
	if (ffffff.is_open())
	{
		for(int io=0;io<q;io++)
	{
		ia.setsrno();
		ia.setname();
		fflush(stdin);
		ia.setdeveloper();
		ffffff<<ia.getsrno();
		ffffff<<"\t";
		ffffff<<ia.getname();
		ffffff<<"\t";
		ffffff<<ia.getdeveloper();
		ffffff<<endl;
		}
	}
	else
	{
		cout<<"Error";
		ffffff.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Downloaded"<<endl;
	for(int ip=0;ip<=100;ip++)
	{
		cout<<ip<<"%";
	}
	cout<<"Download complete.";
	}
	break;
//11.To open the downloaded games file (DOne)
case 9:
	{
ifstream iffffff ("games_to_download_on_iPhone.txt");
	int ac;
	string bc;
	string cc;
if (iffffff.is_open())
  {
while ( iffffff.good() )
    {
      iffffff>>ac;
	  
	  iffffff>>bc;
	  iffffff>>cc;
	  cout<<ac<<"\t";
	  cout<<bc<<"\t";
	  cout<<cc<<endl;
    }
    iffffff.close();
  }
			

else cout << "Unable to open file";
	}
	break;

//12.To open the donwload Applcations file
case 10:
	{
ifstream ifffffff ("Applications_to_download_on_iPhone.txt");
	int ad;
	string bd;
	string cd;
if (ifffffff.is_open())
  {
while ( ifffffff.good() )
    {
      ifffffff>>ad;
	  
	  ifffffff>>bd;
	  ifffffff>>cd;
	  cout<<ad<<"\t";
	  cout<<bd<<"\t";
	  cout<<cd<<endl;
    }
    ifffffff.close();
  }
	}
	break;
//13.For updating and deleting the data of file (uploads)(IOS)
case 11:
	{
string name,developer;
	int srno,aaaa,temp;
	char check='y';
	ifstream iapp("Applications_to_upload_on_Appstore.txt");
	ofstream update("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>aaaa;
	switch(aaaa)
	{
	case 1:
		{
		cout<<endl<<"Enter serial number to update:";
		cin>>temp;
		while(iapp>>srno>>name>>developer)
		{
			if(temp==srno)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>srno;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,name);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,developer);
				fflush(stdin);
			}
			update<<srno<<"  "<<name<<"  "<<developer<<endl;
		}
		}

		break;
	case 2:
		{
		cout<<endl<<"Enter srno to delete:";
		cin>>temp;
		while(iapp>>srno>>name>>developer)
		{
			if(temp!=srno)
			{
				update<<srno<<"  "<<name<<"  "<<developer<<endl;
			}

		}
		}
		break;
	}

	iapp.close();
	update.close();

	{
		ifstream update("update.txt");
		ofstream iapp("Applications_to_upload_on_Appstore.txt");
		while(update>>srno>>name>>developer)
		{
			iapp<<srno<<"  "<<name<<"  "<<developer<<endl;
		}
	}
	iapp.close();
	update.close();

	//printing fuction
	ifstream iapps("Applications_to_upload_on_Appstore");
	{
	while(iapps>>srno>>name>>developer)
	{
		cout<<"\n"<<srno<<"   "<<name<<"   "<<developer<<endl;
	}
	iapps.close();
	
	}
	}
	break;
	
	
//14.For updating and deleting the data of file (downloads)
case 12:
	{
    string _name,_developer;
	int _srno,_d,_temp;
	/*char check='y';*/
	ifstream igame("Applications_to_download_on_iPhone.txt");
	ofstream _update("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>_d;
	switch(_d)
	{
	case 1:
		cout<<endl<<"Enter serial number to update:";
		cin>>_temp;
		while(igame>>_srno>>_name>>_developer)
		{
			if(_temp==_srno)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>_srno;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,_name);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,_developer);
				fflush(stdin);
			}
			_update<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
		}

		break;
	case 2:
		cout<<endl<<"Enter serial number to delete:";
		cin>>_temp;
		while(igame>>_srno>>_name>>_developer)
		{
			if(_temp!=_srno)
			{
				_update<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
			}

		}
		break;
	}

	igame.close();
	_update.close();

	{
		ifstream _update("update.txt");
		ofstream igame("Applications_to_download_on_iPhone.txt");
		while(_update>>_srno>>_name>>_developer)
		{
			igame<<_srno<<"  "<<_name<<"  "<<_developer<<endl;
		}
	}
	igame.close();
	_update.close();

	//printing fuction
	ifstream igames("Applications_to_download_on_iphone");
	{
	while(igames>>_srno>>_name>>_developer)
	{
		cout<<"\n"<<_srno<<"   "<<_name<<"   "<<_developer<<endl;
	}
	igames.close();
	}
	}
	break;
	//15 Games on iPhone download edit
case 13:
	{
	string ___name,___developer;
	int ___srno,___d,___temp;
	/*char check='y';*/
	ifstream iigame("games_to_download_on_iPhone.txt");
	ofstream ___update("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>___d;
	switch(___d)
	{
	case 1:
		cout<<endl<<"Enter serial number to update:";
		cin>>___temp;
		while(iigame>>___srno>>___name>>___developer)
		{
			if(___temp==___srno)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>___srno;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,___name);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,___developer);
				fflush(stdin);
			}
			___update<<___srno<<"  "<<___name<<"  "<<___developer<<endl;
		}

		break;
	case 2:
		cout<<endl<<"Enter serial number to delete:";
		cin>>___temp;
		while(iigame>>___srno>>___name>>___developer)
		{
			if(___temp!=___srno)
			{
				___update<<___srno<<"  "<<___name<<"  "<<___developer<<endl;
			}

		}
		break;
	}

	iigame.close();
	___update.close();

	{
		ifstream ___update("update.txt");
		ofstream iigame("games_to_download_on_iPhone.txt");
		while(___update>>___srno>>___name>>___developer)
		{
			iigame<<___srno<<"  "<<___name<<"  "<<___developer<<endl;
		}
	}
	iigame.close();
	___update.close();

	//printing fuction
	ifstream iigames("games_to_download_on_iPhone.txt");
	{
	while(iigames>>___srno>>___name>>___developer)
	{
		cout<<"\n"<<___srno<<"   "<<___name<<"   "<<___developer<<endl;
	}
	iigames.close();
	}
	}

//16 games to upload on applstore edit
case 14:
	{
string ____name1,____developer1;
	int ____srno,____aaaa,____temp;
	/*char check='y';*/
	ifstream iiigame("games_to_upload_on_Appstore.txt");
	ofstream ____update("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>____aaaa;
	switch(____aaaa)
	{
	case 1:
		{
		cout<<endl<<"Enter serial number to update:";
		cin>>____temp;
		while(iiigame>>____srno>>____name1>>____developer1)
		{
			if(____temp==____srno)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>____srno;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,____name1);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,____developer1);
				fflush(stdin);
			}
			____update<<____srno<<"  "<<____name1<<"  "<<____developer1<<endl;
		}
		}

		break;
	case 2:
		{
		cout<<endl<<"Enter srno to delete:";
		cin>>____temp;
		while(iiigame>>____srno>>____name1>>____developer1)
		{
			if(____temp!=____srno)
			{
				____update<<____srno<<"  "<<____name1<<"  "<<____developer1<<endl;
			}

		}
		}
		break;
	}

	iiigame.close();
	____update.close();

	{
		ifstream ____update("update.txt");
		ofstream iiigame("games_to_upload_on_Appstore.txt");
		while(____update>>____srno>>____name1>>____developer1)
		{
			iiigame<<____srno<<"  "<<____name1<<"  "<<____developer1<<endl;
		}
	}
	iiigame.close();
	____update.close();

	//printing fuction
	ifstream iiigames("games_to_upload_on_Appstore.txt");
	{
	while(iiigames>>____srno>>____name1>>____developer1)
	{
		cout<<"\n"<<____srno<<"   "<<____name1<<"   "<<____developer1<<endl;
	}
	iiigames.close();
	
	}
	}

			}
			cout<<"Press 0 if you want to exit and any other number is you want to do anything else in the section you are in :"<<endl;
			cin>>x12;

		}
		}
		break;
	case 2:
		{
			andr.set_email_id();
			andr.set_password();
			andr.memory();
			while(x13)
			{
			cout<<"You can do the following things from our platform: "<<endl;
			cout<<"1. Check the games on the PlayStore."<<endl;
			cout<<"2. Check the application on the PlayStore."<<endl;
			cout<<"3. Upload games on the PlayStore."<<endl;
			cout<<"4. Upload apps on the PlayStore."<<endl;
			cout<<"5. Check the games uploaded on PlayStore."<<endl;
			cout<<"6. Check the apps uploaded on PlayStore."<<endl;
			cout<<"7. Download games on your Galaxy." <<endl;
			cout<<"8. Download apps on your Galaxy."<<endl;
			cout<<"9. Check the downloaded games on Galaxy."<<endl;
			cout<<"10. Check the downloaded apps on Galaxy."<<endl;
			cout<<"11. Update and delete the applications uploaded on PlayStore."<<endl;
			cout<<"12. Update and delete the applications downloaded on your galaxy."<<endl;
			cout<<"13. Update and delete the games uploaded on PlayStore."<<endl;
			cout<<"14. Update and delete the games downloaded on your Galaxy."<<endl;
			cout<<"Press any of the above numbers to perform the corresponding operation: "<<endl;
			cin>>choice2;
			switch(choice2)
			{
				//	//17.To open the games on play store file done
	case 1:
		{
ifstream _iff ("games_on_Playstore.txt");
	int ae;
	string be;
	string ce;
if (_iff.is_open())
  {
while ( _iff.good() )
    {
      _iff>>ae;
	  
	  _iff>>be;
	  _iff>>ce;
	  cout<<ae<<"\t";
	  cout<<be<<"\t";
	  cout<<ce<<endl;
    }
    _iff.close();
  }
			

else 
	{
		cout << "Unable to open file";
	}
		}
		break;
		
////18.To open the applications on the play store file Applications_on_Playstore.txt
	case 2:
		{

ifstream __iff ("applications_on_Playstore.txt");
	int af;
	string bf;
	string cf;
if (__iff.is_open())
  {
while ( __iff.good() )
    {
      __iff>>af;
	  
	  __iff>>bf;
	  __iff>>cf;
	  cout<<af<<"\t";
	  cout<<bf<<"\t";
	  cout<<cf<<endl;
    }
    __iff.close();
  }
else 
{
	cout << "Unable to open file";
}
		}
		break;
//19.The games to be uploaded on PlayStore are present here r,s,t,u done
	case 3:
		{
cout<<"Enter the number of games you want to upload: "<<endl;
cin>>r;
ofstream ___f("games_to_upload_on_PlayStore.txt");
	if (___f.is_open())
	{
		for(int is=0;is<r;is++)
	{
		ag.setsrno();
		ag.setname();
		fflush(stdin);
		ag.setdeveloper();
		___f<<ag.getsrno();
		___f<<"\t";
		___f<<ag.getname();
		___f<<"\t";
		___f<<ag.getdeveloper();
		___f<<endl;
		}
	}
	else
	{
		cout<<"Error";
		___f.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Uploaded"<<endl;
	for(int it=0;it<=100;it++)
	{
		cout<<it<<"%";
	}
	cout<<"Upload complete.";
		}
		break;
		//20.The applications to upload on IOS will be present here
	case 4:
		{


	cout<<"Enter the number of applications you want to upload:"<<endl;
	cin>>s;
	ofstream ____f("Applications_to_upload_on_PlayStore.txt");
	if (____f.is_open())
	{
		for(int iu=0;iu<s;iu++)
	{
		aa.setsrno();
		aa.setname();
		fflush(stdin);
		aa.setdeveloper();
		____f<<aa.getsrno();
		____f<<"\t";
		____f<<aa.getname();
		____f<<"\t";
		____f<<aa.getdeveloper();
		____f<<endl;
		}
	}
	else
	{
		cout<<"Error";
		____f.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Uploaded"<<endl;
	for(int iv=0;iv<=100;iv++)
	{
		cout<<iv<<"%";
	}
	cout<<"Upload complete.";
		}
		break;
////21.To open the uploaded games file done
	case 5:
		{
ifstream ___iff ("games_to_upload_on_PlayStore.txt");
	int _ag;
	string bg;
	string cg;
if (___iff.is_open())
  {
while ( ___iff.good() )
    {
      ___iff>>_ag;
	  
	  ___iff>>bg;
	  ___iff>>cg;
	  cout<<_ag<<"\t";
	  cout<<bg<<"\t";
	  cout<<cg<<endl;
    }
    ___iff.close();
  }
			

else cout << "Unable to open file"; 
		}
		break;
		//22.To open the uploaded Applcations file
	case 6:
		{

ifstream ____iff ("Applications_to_upload_on_PlayStore.txt");
	int ah;
	string bh;
	string ch;
if (____iff.is_open())
  {
while ( ____iff.good() )
    {
      ____iff>>ah;
	  
	  ____iff>>bh;
	  ____iff>>ch;
	  cout<<ah<<"\t";
	  cout<<bh<<"\t";
	  cout<<ch<<endl;
    }
    ____iff.close();
  }
		}
		break;
////23.The games to be downloaded on Galaxy s5 are present here
	case 7:
		{
cout<<"Enter the number of games you want to download on iPhone: "<<endl;
cin>>t;
ofstream f_("games_to_download_on_galaxys5.txt");
	if (f_.is_open())
	{
		for(int iw=0;iw<t;iw++)
	{
		ag.setsrno();
		ag.setname();
		fflush(stdin);
		ag.setdeveloper();
		f_<<ag.getsrno();
		f_<<"\t";
		f_<<ag.getname();
		f_<<"\t";
		f_<<ag.getdeveloper();
		f_<<endl;
		}
	}
	else
	{
		cout<<"Error";
		f_.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Downloaded"<<endl;
	for(int ix=0;ix<=100;ix++)
	{
		cout<<ix<<"%";
	}
	cout<<"Download complete.";
		}
		break;
//	
//	//24.The applications to downloaded on galaxys5 will be present here
	case 8:
		{
	cout<<"Enter the number of applications you want to download:"<<endl;
	cin>>q;
	ofstream f__("Applications_to_download_on_galaxys5.txt");
	if (f__.is_open())
	{
		for(int iy=0;iy<q;iy++)
	{
		aa.setsrno();
		aa.setname();
		fflush(stdin);
		aa.setdeveloper();
		f__<<aa.getsrno();
		f__<<"\t";
		f__<<aa.getname();
		f__<<"\t";
		f__<<aa.getdeveloper();
		f__<<endl;
		}
	}
	else
	{
		cout<<"Error";
		f__.close();
	}
	cout<<"Waiting for server to respond..."<<endl;
	cout<<"Downloaded"<<endl;
	for(int iy=0;iy<=100;iy++)
	{
		cout<<iy<<"%";
	}
	cout<<"Download complete.";
		}
		break;
////25.To open the downloaded games file (PS)
	case 9:
		{
ifstream iff_ ("games_to_download_on_galaxys5.txt");
	int ai=0;
	string bi;
	string ci;
if (iff_.is_open())
  {
while ( iff_.good() )
    {
      iff_>>ai;
	  
	  iff_>>bi;
	  iff_>>ci;
	  cout<<ai<<"\t";
	  cout<<bi<<"\t";
	  cout<<ci<<endl;
    }
    iff_.close();
  }
			

else
{
cout << "Unable to open file";
}
		}
		break;

////26.To open the donwload Applcations file(PS)
	case 10:
		{
ifstream iff__ ("Applications_to_download_on_galaxys5.txt");
	int aj;
	string bj;
	string cj;
if (iff__.is_open())
  {
while ( iff__.good() )
    {
      iff__>>aj;
	  
	  iff__>>bj;
	  iff__>>cj;
	  cout<<aj<<"\t";
	  cout<<bj<<"\t";
	  cout<<cj<<endl;
    }
    iff__.close();
  }
		}
		break;
//27.For updating and deleting the data of file (uploads)(PS)(AAPS)
	case 11:
		{
string name_,developer_;
	int srno_,aaaa_,temp_;
	/*char check='y';*/
	ifstream aapp("Applications_to_upload_on_playstore.txt");
	ofstream update_("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>aaaa_;
	switch(aaaa_)
	{
	case 1:
		{
		cout<<endl<<"Enter serial number to update:";
		cin>>temp_;
		while(aapp>>srno_>>name_>>developer_)
		{
			if(temp_==srno_)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>srno_;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,name_);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,developer_);
				fflush(stdin);
			}
			update_<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
		}
		}

		break;
	case 2:
		{
		cout<<endl<<"Enter srno to delete:";
		cin>>temp_;
		while(aapp>>srno_>>name_>>developer_)
		{
			if(temp_!=srno_)
			{
				update_<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
			}

		}
		}
		break;
	}

	aapp.close();
	update_.close();

	
		ifstream update2("update.txt");
		ofstream aapp2("Applications_to_upload_on_playstore.txt");
		while(update2>>srno_>>name_>>developer_)
		{
			aapp2<<srno_<<"  "<<name_<<"  "<<developer_<<endl;
		}
	
	aapp2.close();
	update2.close();
		
		
	//printing fuction
	
		
	ifstream aapps("Applications_to_upload_on_playstore");
	
	while(aapps>>srno_>>name_>>developer_)
	{
		cout<<"\n"<<srno_<<"   "<<name_<<"   "<<developer_<<endl;
	}
	aapps.close();
	
	
		
		
		}
		break;
		//28 For updating and deleting the data of file (downloads)(PS)(AAPS)
	case 12:
		{
	
string name__,developer__;
	int srno__,aaaa__,temp__;
	/*char check='y';*/
	ifstream aapp__("Applications_to_download_on_galaxys5.txt");
	ofstream update__("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>aaaa__;
	switch(aaaa__)
	{
	case 1:
		{
		cout<<endl<<"Enter serial number to update:";
		cin>>temp__;
		while(aapp__>>srno__>>name__>>developer__)
		{
			if(temp__==srno__)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>srno__;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,name__);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,developer__);
				fflush(stdin);
			}
			update__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
		}
		}

		break;
	case 2:
		{
		cout<<endl<<"Enter srno to delete:";
		cin>>temp__;
		while(aapp__>>srno__>>name__>>developer__)
		{
			if(temp__!=srno__)
			{
				update__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
			}

		}
		}
		break;
	}

	aapp__.close();
	update__.close();

	{
		ifstream update__("update.txt");
		ofstream aapp__("Applications_to_download_on_galaxys5.txt");
		while(update__>>srno__>>name__>>developer__)
		{
			aapp__<<srno__<<"  "<<name__<<"  "<<developer__<<endl;
		}
	}
	aapp__.close();
	update__.close();

	//printing fuction
	ifstream aapps__("Applications_to_download_on_galaxys5.txt");
	{
	while(aapps__>>srno__>>name__>>developer__)
	{
		cout<<"\n"<<srno__<<"   "<<name__<<"   "<<developer__<<endl;
	}
	aapps__.close();
	
	}
		}
		break;
//29.void games_on_galaxy_download_edit()
	case 13:
		{
	string aname__,adeveloper__;
	int asrno__,aaaaa__,atemp__;
	/*char check='y';*/
	ifstream aaapp__("games_to_download_on_galaxys5.txt");
	ofstream aupdate__("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>aaaaa__;
	switch(aaaaa__)
	{
	case 1:
		{
		cout<<endl<<"Enter serial number to update:";
		cin>>atemp__;
		while(aaapp__>>asrno__>>aname__>>adeveloper__)
		{
			if(atemp__==asrno__)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>asrno__;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,aname__);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,adeveloper__);
				fflush(stdin);
			}
			aupdate__<<asrno__<<"  "<<aname__<<"  "<<adeveloper__<<endl;
		}
		}

		break;
	case 2:
		{
		cout<<endl<<"Enter srno to delete:";
		cin>>atemp__;
		while(aaapp__>>asrno__>>aname__>>adeveloper__)
		{
			if(atemp__!=asrno__)
			{
				aupdate__<<asrno__<<"  "<<aname__<<"  "<<adeveloper__<<endl;
			}

		}
		}
		break;
	}

	aaapp__.close();
	aupdate__.close();

	{
		ifstream aupdate__("update.txt");
		ofstream aaapp__("games_to_download_on_galaxys5.txt");
		while(aupdate__>>asrno__>>aname__>>adeveloper__)
		{
			aaapp__<<asrno__<<"  "<<aname__<<"  "<<adeveloper__<<endl;
		}
	}
	aaapp__.close();
	aupdate__.close();

	//printing fuction
	ifstream aaapps__("games_to_download_on_galaxys5.txt");
	{
	while(aaapps__>>asrno__>>aname__>>adeveloper__)
	{
		cout<<"\n"<<asrno__<<"   "<<aname__<<"   "<<adeveloper__<<endl;
	}
	aaapps__.close();
	
	}
		}
		break;
//30.void games_on_galaxy_upload_edit()
	case 14:
		{
	string qname_,qdeveloper_;
	int qsrno_,qaaaa_,qtemp_;
	/*char check='y';*/
	ifstream qaapp("games_to_upload_on_PlayStore.txt");
	ofstream qupdate_("update.txt");
	cout<<"1-update Application"<<endl;
	cout<<"2-delete Application"<<endl;
	cin>>qaaaa_;
	switch(qaaaa_)
	{
	case 1:
		{
		cout<<endl<<"Enter serial number to update:";
		cin>>qtemp_;
		while(qaapp>>qsrno_>>qname_>>qdeveloper_)
		{
			if(qtemp_==qsrno_)
			{
				cout<<endl<<"Enter serial number of Application:";
				cin>>qsrno_;
				fflush(stdin);
				cout<<endl<<"Enter name of Application:";
				getline(cin,qname_);
				fflush(stdin);
				cout<<endl<<"Enter name of developer:";
				getline(cin,qdeveloper_);
				fflush(stdin);
			}
			qupdate_<<qsrno_<<"  "<<qname_<<"  "<<qdeveloper_<<endl;
		}
		}

		break;
	case 2:
		{
		cout<<endl<<"Enter srno to delete:";
		cin>>qtemp_;
		while(qaapp>>qsrno_>>qname_>>qdeveloper_)
		{
			if(qtemp_!=qsrno_)
			{
				qupdate_<<qsrno_<<"  "<<qname_<<"  "<<qdeveloper_<<endl;
			}

		}
		}
		break;
	}

	qaapp.close();
	qupdate_.close();

	{
		ifstream qupdate_("update.txt");
		ofstream qaapp("games_to_upload_on_PlayStore.txt");
		while(qupdate_>>qsrno_>>qname_>>qdeveloper_)
		{
			qaapp<<qsrno_<<"  "<<qname_<<"  "<<qdeveloper_<<endl;
		}
	}
	qaapp.close();
	qupdate_.close();

	//printing fuction
	ifstream qaapps("games_to_upload_on_PlayStore.txt");
	{
	while(qaapps>>qsrno_>>qname_>>qdeveloper_)
	{
		cout<<"\n"<<qsrno_<<"   "<<qname_<<"   "<<qdeveloper_<<endl;
	}
	qaapps.close();
	
	}
		}
			}
			cout<<"Press 0 if you want to exit and any other number if you want to continue in the same section you are in right now: "<<endl;
			cin>>x13;
			}
		}
	}
	


	
	

		

	





	getch();

	
	}

	