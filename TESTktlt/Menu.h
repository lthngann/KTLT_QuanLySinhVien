#include"SinhVien.h"

void Menu(int key) {
	int chonMenu2;
	int chonMenu3;
	while (1) 
	{
		system("cls");
		for (int i = 0; i < 6; i++)
		{
			if(i == 0)	{TextColor(236);}				else{TextColor(188);}
			gotoxy(0,5+i*4); cout<<"                        ";
			gotoxy(0,6+i*4); cout<<fir[i];
			gotoxy(0,7+i*4); cout<<"                        ";
		}
		gotoxy(24,7);
		int chon = MenuCha();
		switch(chon){
			case 1:
			{		//Them moi ho so
				for(int i = 0; i < 2; i++)
				{
					if(i == 0)	{TextColor(236);}		else{TextColor(252);}
					gotoxy(28, 5 + (i + 1 ) *4);	cout<<"                        ";
					gotoxy(28, 6 + (i + 1 ) *4);	cout<<sec[i] ;
					gotoxy(28, 7 + (i + 1 ) *4);	cout<<"                        ";
				}
				gotoxy(48,7);
				chonMenu2 = Menu2(2, sec);
				TextColor(91);
				switch(chonMenu2){
					case 1:
						{ //them sv tu ban phim va file
							for(int i = 0; i < 2; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<thi[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							//gotoXY(72,7);
							chonMenu3 = Menu3(2, thi);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	input(ds, ds1);	break;			}
								case 2:		{	Input_file(ds, ds1);break;			}
							}
							break;
						}
					case 2:
					{ // chinh sua sinh vien:
						CapNhat_DSSV(ds, ds1, 0);
						break;
					}	
				}
				break;
			}
			case 2:
			{ //In Danh Sach
				for(int i = 0; i < 2; i++)
				{
					if(i == 0)	{TextColor(236);}		else{TextColor(252);}
					gotoxy(28, 5 + (i + 1 ) *4);	cout<<"                        ";
					gotoxy(28, 6 + (i + 1 ) *4);	cout<<fou[i] ;
					gotoxy(28, 7 + (i + 1 ) *4);	cout<<"                        ";
				}
				chonMenu2 = Menu2(2, fou);
				TextColor(91);
				system("cls");
				switch ( chonMenu2 )
				{
					case 1:		{	Output(ds);	break;			}
					case 2:		{	Output_File(ds);	Output_File1(ds);	break;			}
				}break;
			}
			case 3:
			{		//Sap xep theo 4 cach
				for(int i = 0; i < 4; i++)
				{
					if(i == 0)	{TextColor(236);}		else{TextColor(252);}
					gotoxy(28, 5 + (i + 1 ) *4);	cout<<"                        ";
					gotoxy(28, 6 + (i + 1 ) *4);	cout<<fif[i] ;
					gotoxy(28, 7 + (i + 1 ) *4);	cout<<"                        ";
				}
				gotoxy(48,7);
				int chon2 = Menu2(4, fif);
				TextColor(91);
				switch(chon2){
					case 1:
						{ //sx cach 1:
							for(int i = 0; i < 5; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<six[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							chonMenu3 = Menu3(5, six);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	Insertion_Sort(ds1, ds, 0);	break;			}
								case 2:		{	Insertion_Sort(ds1, ds, 1);	break;			}
								case 3:		{	Insertion_Sort(ds1, ds, 2);	break;			}
								case 4:		{	Insertion_Sort(ds1, ds, 3);	break;			}		
								case 5:		{	Insertion_Sort(ds1, ds, 4);	break;			}
							}
							break;
						}
					case 2:
					{ //sx cach 1:
							for(int i = 0; i < 5; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<six[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							chonMenu3 = Menu3(5, six);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	Selection_Sort(ds1, ds, 0);	break;			}
								case 2:		{	Selection_Sort(ds1, ds, 1);	break;			}
								case 3:		{	Selection_Sort(ds1, ds, 2);	break;			}
								case 4:		{	Selection_Sort(ds1, ds, 3);	break;			}
								case 5:		{	Selection_Sort(ds1, ds, 4);	break;			}
							}
						break;
					}
					case 3:
					{ //sx cach 1:
							for(int i = 0; i < 5; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<six[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							chonMenu3 = Menu3(5, six);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	Buble_Sort(ds1, ds, 0);	break;			}
								case 2:		{	Buble_Sort(ds1, ds, 1);	break;			}
								case 3:		{	Buble_Sort(ds1, ds, 2);	break;			}
								case 4:		{	Buble_Sort(ds1, ds, 3);	break;			}
								case 5:		{	Buble_Sort(ds1, ds, 4);	break;			}
							}
						break;
					}
					case 4:
					{ //sx cach 1:
							for(int i = 0; i < 5; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<six[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							chonMenu3 = Menu3(5, six);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 0); 
												Output(ds1);
												break;
								}
								case 2:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 1); 
												Output(ds1);
												break;
								}
								case 3:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 2); 
												Output(ds1);
												break;
								}
								case 4:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 3); 
												Output(ds1);
												break;
								}
								case 5:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 4); 
												Output(ds1);
												break;
								}
							}
						break;
					}
				
				break;
				}
			}
			case 4:
			{		//Sap xep theo 2 cach
				for(int i = 0; i < 2; i++)
				{
					if(i == 0)	{TextColor(236);}		else{TextColor(252);}
					gotoxy(28, 5 + (i + 1 ) *4);	cout<<"                        ";
					gotoxy(28, 6 + (i + 1 ) *4);	cout<<sev[i] ;
					gotoxy(28, 7 + (i + 1 ) *4);	cout<<"                        ";
				}
				gotoxy(48,7);
				int chon1 = Menu2(2, sev);
				TextColor(91);
				switch(chon1){
					case 1:
						{ //sx cach 1:
							for(int i = 0; i < 5; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<six[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							chonMenu3 = Menu3(5, six);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	TimKiem_TuanTu(ds, ds.size(), 0);	break;			}
								case 2:		{	TimKiem_TuanTu(ds, ds.size(), 1);	break;			}
								case 3:		{	TimKiem_TuanTu(ds, ds.size(), 2);	break;			}
								case 4:		{	TimKiem_TuanTu(ds, ds.size(), 3);	break;			}
								case 5:		{	TimKiem_TuanTu(ds, ds.size(), 4);	break;			}
							}
							break;
						}
					case 2:
					{ //sx cach 1:
							for(int i = 0; i < 5; i++)
							{
								if(i == 0)	{TextColor(236);}		else{TextColor(252);}
								gotoxy(56, 5 + (i + 1 ) *4);	cout<<"                        ";
								gotoxy(56, 6 + (i + 1 ) *4);	cout<<six[i] ;
								gotoxy(56, 7 + (i + 1 ) *4);	cout<<"                        ";
							}
							chonMenu3 = Menu3(5, six);
							TextColor(91);
							system("cls");
							switch ( chonMenu3 )
							{
								case 1:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 0);
												TimKiem_NhiPhan(ds1, ds1.size(), 0);	
												break;	}
								case 2:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 1);
												TimKiem_NhiPhan(ds1, ds1.size(), 1);	
												break;	}
								case 3:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 2);
												TimKiem_NhiPhan(ds1, ds1.size(), 2);	
												break;	}
								case 4:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 3);
												TimKiem_NhiPhan(ds1, ds1.size(), 3);	
												break;	}
								case 5:		{	Quick_Sort(ds1, ds, 0, ds.size() - 1, 4);
												TimKiem_NhiPhan(ds1, ds1.size(), 4);	
												break;	}
							}
							break;
					}
					
				}
				break;
			}
			case 5:
			{ //Thong ke
				for(int i = 0; i < 1; i++)
				{
					if(i == 0)	{TextColor(236);}		else{TextColor(252);}
					gotoxy(28, 5 + (i + 1 ) *4);	cout<<"                        ";
					gotoxy(28, 6 + (i + 1 ) *4);	cout<<eig[i] ;
					gotoxy(28, 7 + (i + 1 ) *4);	cout<<"                        ";
				}
				chonMenu2 = Menu2(1, eig);
				TextColor(91);
				system("cls");
				switch ( chonMenu2 )
				{
					case 1:		{	ThongKeTiLe(ds1, ds, ds1.size());			}
				}
			}
			
		}
	
	}
}
