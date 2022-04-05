#include "Mylib.h"

using namespace std;

char fir[6][30] = { "    1. Them Moi Ho So   ","    2. In Danh Sach     ","    3. Sap Xep          ","    4. Tim Kiem         ","    5. Thong Ke         ","    6. Thoat            " };
char sec[2][30] = { "     Them ho so         ","     Chinh sua ho so    " };
char thi[2][30] = { "     Them tu ban phim   ","     Them tu file       " };
char fou[2][30] = { "     In ra man hinh     ","     In ra file         " };
char fif[4][30] = { "     Sap xep chen       ","     Sap xep chon       ","     Sap xep noi bot    ","     Sap xep nhanh      " };
char six[5][30] = { "         Theo ma        ","         Theo ten       ","         Theo lop       ","         Theo diem      ","         Theo ngay sinh " };
char sev[2][30] = { "    Tim kiem tuan tu    ","    Tim kiem nhi phan   " };
char eig[1][30] = { "       Theo ti le       "};

struct SinhVien {
	char maSV[9];
	char hoTen[30];
	char NgaySinh[20];
	char maLop[30];
	double diemTB;
};

struct PhanLoai {
	char tenlop[30];
	int xx;
	int gioi;
	int kha;
	int tb;
	int yeu;
	int tong;
};

vector <SinhVien> ds, ds1, ds2, ds3;

int GetKey(){	
	char key;key = getch();
	if(key==-32 || key==0)
	return -getch();
	else return key;
}

void GhiChu(char c[150], int x, int y, int color, int sleep)
{
	gotoxy(x,y);
	TextColor(color);
	cout<<c;
	Sleep(sleep);
	gotoxy(x,y);
	TextColor(91);
	cout<<"                                                                                       ";
}

void ThongTinChung(){
	SetBGColor(5);
	TextColor(244);
	gotoxy(35,1); printf("                                                  ");	
	gotoxy(35,2); printf("          CHUONG TRINH QUAN LY SINH VIEN          ");	
	gotoxy(35,3); printf("                                                  ");	
	TextColor(199);	gotoxy(35,0); 
	printf(" Lop ANHTTT: Le Thi Thuy Ngan - Ma SV: 2019010076 ");	
	gotoxy(35,4);printf("                                                  ");	
	gotoxy(35,1);printf("  ");gotoxy(83,1);printf("  ");	
	gotoxy(35,2);printf("  ");gotoxy(83,2);printf("  ");
	gotoxy(35,3);printf("  ");gotoxy(83,3);printf("  ");	
	TextColor(244);	
	char s[] = {"        CHUONG TRINH QUAN LY SINH VIEN     "};	
	int m = strlen(s) - 1;	TextColor(244);	
	while( !kbhit() ){      
		for(int i = m; i > 0 ; i-- ){         
			s[i] = s[i-1] ;      	 
			s[0] = s[m-1];	  
		}	   	   
		gotoxy(38,2);       printf("%s",s);       
		gotoxy(38,2);printf(" ");	   Sleep(100); 	 
	} 	 
	TextColor(80);
}

void ToMauMenu3(int color, char MENU3[][30],int vitri )
{
	TextColor(color);
	gotoxy(56, 5 + (vitri + 1 ) *4);	cout<<"                        ";
	gotoxy(56, 6 + (vitri + 1 ) *4);	cout<<MENU3[vitri] ;
	gotoxy(56, 7 + (vitri + 1 ) *4);	cout<<"                        ";
}

void ToMauMenu2(int color, char MENU2[][30],int vitri )
{
	TextColor(color);
	gotoxy(28, 5 + (vitri + 1 ) *4);	cout<<"                        ";
	gotoxy(28, 6 + (vitri + 1 ) *4);	cout<<MENU2[vitri] ;
	gotoxy(28, 7 + (vitri + 1 ) *4);	cout<<"                        ";
}

void ToMauMenuChinh(int color,int vitri)
{
	TextColor(color);
	gotoxy(0,5+vitri*4); cout<<"                        ";
	gotoxy(0,6+vitri*4); cout<<fir[vitri];
	gotoxy(0,7+vitri*4); cout<<"                        ";
}

int Menu3(int item, char MENU3[][30])
{
	char key;
	int vitri = 0;	int color = 188; int color1 = 236;
	while ( 1 )
	{
		ThongTinChung();
		key = GetKey();
		if ( key == ENTER)
			return vitri + 1;
		if ( key == ESC || key == LEFT)
			return 0;
		switch ( key )
		{
		case DOWN:
			{
				if ( vitri == (item -1) ) 
				{
					ToMauMenu3(252,MENU3,vitri);
					vitri = 0 ;
					ToMauMenu3(236,MENU3,vitri);
				}
				else
				{
					ToMauMenu3(252,MENU3,vitri);
					vitri++;
					ToMauMenu3(236,MENU3,vitri);
				}
			}break;
		case UP:
			{
				if ( vitri == 0 ) 
				{
					ToMauMenu3(252,MENU3,vitri);
					vitri = item -1  ;
					ToMauMenu3(236,MENU3,vitri);
				}
				else
				{
					ToMauMenu3(252,MENU3,vitri);
					vitri--;
					ToMauMenu3(236,MENU3,vitri);
				}
			}break;
		}	
	}
}

int Menu2(int item, char MENU2[][30])
{
	char key;
	int vitri = 0;	int color = 188; int color1 = 236;
	while ( 1 )
	{
		ThongTinChung();
		key = GetKey();
		if ( key == ENTER)
			return vitri + 1;
		if ( key == ESC || key == LEFT)
			return 0;
		switch ( key )
		{
		case DOWN:
			{
				if ( vitri == (item -1) ) 
				{
					ToMauMenu2(252,MENU2,vitri);
					vitri = 0 ;
					ToMauMenu2(236,MENU2,vitri);
				}
				else
				{
					ToMauMenu2(252,MENU2,vitri);
					vitri++;
					ToMauMenu2(236,MENU2,vitri);
				}
			}break;
		case UP:
			{
				if ( vitri == 0 ) 
				{
					ToMauMenu2(252,MENU2,vitri);
					vitri = item -1  ;
					ToMauMenu2(236,MENU2,vitri);
				}
				else
				{
					ToMauMenu2(252,MENU2,vitri);
					vitri--;
					ToMauMenu2(236,MENU2,vitri);
				}
			}break;
		}	
	}
}

int MenuCha()
{
	int vitri = 0;
	while ( 1 )
	{
		ThongTinChung();
		char key = GetKey();
		if ( key == ENTER || (key == RIGHT && vitri != 5) ) // vitri!= 4 la ngay tai o Thoát
		{return vitri + 1 ;}
		switch(key)
			{
			case DOWN :
				{
					if ( vitri ==  5  )
					{
					     ToMauMenuChinh(188,vitri);
				    	 vitri = 0 ;
					     ToMauMenuChinh(236,vitri);
					}
					else
					{
						ToMauMenuChinh(188,vitri);
						vitri++;
						ToMauMenuChinh(236,vitri);
					}
				}break;
			case UP :
				{
				if ( vitri == 0 )
					{
						ToMauMenuChinh(188,vitri);
						vitri = ( 6 -1 ) ;
						ToMauMenuChinh(236,vitri);
					}
					else
					{
						ToMauMenuChinh(188,vitri);
						vitri--;
						ToMauMenuChinh(236,vitri);
					}
				}break;
			}
	}
}
//// Lay nút bàn phím do nguoi dùng b?m
/// Tra ve: Mã cua phím
int inputKey()
{
	if (_kbhit()) //true
	{
		int key = _getch();

		if (key == 224)
		{
			key = _getch();
			return key + 1000;
		}

		return key;
	}
	else
	{
		return KEY_NONE;
	}
	return KEY_NONE;
}

void box(int x, int y, int w, int h, int t_color, int focus, string nd) {
	if (focus == 1) {
		DatMauChoChu(11);
	}
		
	if (focus == 2) {
		DatMauChoChu(14);
	}
		
	for (int iy = y + 1; iy <= y + h - 1; iy++) {
		for (int ix = x + 1; ix <= x + w - 1; ix++) {
			gotoxy(ix, iy); cout << " ";
		}
	}
	
	gotoxy(x + 1, y + 1);
	cout << nd;
	
	if (h <= 1 || w <= 1) return;
	for (int ix = x; ix <= x + w; ix++) {
		gotoxy(ix, y);
		cout << char(196);
		gotoxy(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++) {
		gotoxy(x, iy);
		cout << char(179);
		gotoxy(x + w, iy);
		cout << char(179);
	}
	gotoxy(x, y); cout << char(218);
	gotoxy(x + w, y); cout << char(191);
	gotoxy(x, y + h); cout << char(192);
	gotoxy(x + w, y + h); cout << char(217);
}

void ChuanHoa_Ten(SinhVien& s1) {
	while (s1.hoTen[0] == ' ') {
		for(int i = 0; i<=(strlen(s1.hoTen) - 1); i++){
			strcpy(&s1.hoTen[i], &s1.hoTen[i+1]);
		}
		//strcpy(&s1.hoTen[0], &s1.hoTen[1]);
		//s1.hoTen[strlen(s1.hoTen) - 1] = NULL;
	}
	while (s1.hoTen[strlen(s1.hoTen) - 1] == ' ') strcpy(&s1.hoTen[strlen(s1.hoTen) - 1], "\0");
	if (s1.hoTen[0] >= 'a' && s1.hoTen[0] <= 'z') s1.hoTen[0] -= 32;
	for (int i = 1; i < strlen(s1.hoTen); i++)
	{
		if (s1.hoTen[i] == ' ' && s1.hoTen[i + 1] == ' ')
		{
			strcpy(&s1.hoTen[i], &s1.hoTen[i + 1]);
			i--;
		}
		else if (s1.hoTen[i] == ' ' && s1.hoTen[i + 1] != ' ')
		{
			if (s1.hoTen[i + 1] >= 'a' && s1.hoTen[i + 1] <= 'z') s1.hoTen[i + 1] -= 32;
		}
		else if (s1.hoTen[i - 1] != ' ')
		{
			if (s1.hoTen[i] >= 'A' && s1.hoTen[i] <= 'Z') s1.hoTen[i] += 32;
		}
	}
}

bool KiemTra_NgaySinh(SinhVien s1, char* s2)
{
	int ngay = 31, thang = 12, nam = 2016, x = 1;
	while (s1.NgaySinh[0] == ' ') strcpy(&s1.NgaySinh[0], &s1.NgaySinh[1]);
	while (s1.NgaySinh[strlen(s1.NgaySinh)] == ' ') s1.NgaySinh[strlen(s1.NgaySinh)] = '\0';
	int n = strlen(s1.NgaySinh);
	int i = n - 1;
	int k = 9;
	s2[2] = '/'; s2[5] = '/';
	while (i >= 0 && s1.NgaySinh[i] != '/') i--;
	nam = 0;
	for (int j = n - 1; j > i; j--)
	{
		if (s1.NgaySinh[j] < '0' || s1.NgaySinh[j] > '9') return false;
		nam = nam + (s1.NgaySinh[j] - 48) * x;
		s2[k] = s1.NgaySinh[j];
		k--;
		x *= 10;
	} if (nam > 2016 || nam < 1900) return false;
	s2[10] = '\0'; k = 4;
	if (i >= 0) s1.NgaySinh[i] = '\0'; else s1.NgaySinh[0] = '\0';
	n = strlen(s1.NgaySinh);
	i = n - 1;
	while (i >= 0 && s1.NgaySinh[i] != '/') i--;
	thang = 0;
	x = 1;
	for (int j = n - 1; j > i; j--)
	{
		if (s1.NgaySinh[j] < '0' || s1.NgaySinh[j] > '9') return false;
		thang = thang + ((int)s1.NgaySinh[j] - 48) * x;
		s2[k] = s1.NgaySinh[j];
		k--;
		x *= 10;
	} if (thang < 1 || thang > 12) return false;
	if (k == 3) s2[k] = '0'; k = 1;
	if (i >= 0) s1.NgaySinh[i] = '\0'; else s1.NgaySinh[0] = '\0';
	n = strlen(s1.NgaySinh);
	i = n - 1;
	while (i >= 0 && s1.NgaySinh[i] != '/') i--;
	ngay = 0; x = 1;
	for (int j = n - 1; j > i; j--)
	{
		if (s1.NgaySinh[j] < '0' || s1.NgaySinh[j] > '9') return false;
		ngay = ngay + (s1.NgaySinh[j] - 48) * x;
		s2[k] = s1.NgaySinh[j];
		k--;
		x *= 10;
	} if (ngay > 31 || ngay < 1) return false;
	if (k == 0) s2[k] = '0';
	if (i >= 0) s1.NgaySinh[i] = '\0'; else s1.NgaySinh[0] = '\0';
	n = strlen(s1.NgaySinh);
	if (n != 0) return false;
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		if (ngay == 31) return false;
	}
	else
	{
		if (nam % 4 == 0)
		{
			if (thang == 2)
				if (ngay >= 30) return false;
		}
		else
		{
			if (thang == 2)
				if (ngay >= 29) return false;
		}
	}
	return true;
}

void KiemTra_MaSV(SinhVien& s1, int i)
{
	s1.maSV[0] = 'Q';
	s1.maSV[1] = 'S';
	s1.maSV[2] = s1.maLop[0];
	s1.maSV[3] = s1.maLop[1];
	s1.maSV[7] = (i % 10 + 48); //don vi
	s1.maSV[6] = (i % 100) / 10 + 48; //chuc
	s1.maSV[5] = ((i % 1000) / 100 + 48); //tram
	s1.maSV[4] = (i / 1000 + 48); //nghin
	s1.maSV[8] = '\0';
}

bool KiemTra_Diem(SinhVien& s1)
{
	if (s1.diemTB >= 0 || s1.diemTB <= 10) return true;
}

void Output_File(vector<SinhVien>& ds2);
void inBang();
void Input_file(vector<SinhVien>& ds2, vector<SinhVien>& ds3);
void Menu(int key);

void input(vector<SinhVien>& ds2, vector<SinhVien>& ds3)
{
	SinhVien a;
	int i = 0;

	system("cls");
	box(1, 1, 10, 2, 11, 2, "   STT");
	box(11, 1, 40, 2, 11, 2, "         Ho va ten");
	box(51, 1, 20, 2, 11, 2, "     Ma lop");
	box(71, 1, 15, 2, 11, 2, " Ma sinh vien");
	box(86, 1, 20, 2, 11, 2, "   Ngay sinh");
	box(106, 1, 10, 2, 11, 2, "   Diem");
	do {
		deleteDrawed(3, 30, 100);
		int n = ds2.size();
		box(1, 3 * i + 4, 10, 2, 11, 2, " ");
		box(11, 3 * i + 4, 40, 2, 11, 2, " ");
		box(51, 3 * i + 4, 20, 2, 11, 2, " ");
		box(71, 3 * i + 4, 15, 2, 11, 2, " ");
		box(86, 3 * i + 4, 20, 2, 11, 2, " ");
		box(106, 3 * i + 4, 10, 2, 11, 2, " ");
		gotoxy(2, 3 * i + 5);
		printf("%5d", i + 1);
		// nhap ten
		cin.ignore();
		gotoxy(18, 3 * i + 5);
		gets(a.hoTen); ChuanHoa_Ten(a);
		gotoxy(18, 3 * i + 5);
		printf("%s", a.hoTen);
		// nhap lop
		gotoxy(55, 3 * i + 5);
		gets(a.maLop); strupr(a.maLop);
		gotoxy(55, 3 * i + 5);
		printf("%s", a.maLop);
		// nhap maSV
		KiemTra_MaSV(a, n + 1);
		gotoxy(74, 3 * i + 5);
		printf("%s", a.maSV);
		// nhap ngay sinh
		gotoxy(90, 3 * i + 5);
		gets(a.NgaySinh);
		char s1[20];
		while (!KiemTra_NgaySinh(a, s1))
		{
			GhiChu(" Ban da nhap sai ngay sinh. Vui long nhap lai ",35,27,74,1500);
			gotoxy(90, 3 * i + 5);
			for (int j = 0; j < 15; j++) cout << " ";
			gotoxy(90, 3 * i + 5);
			gets(a.NgaySinh);
		}
		deleteDrawed(1, 30, 100);
		gotoxy(90, 3 * i + 5);
		printf("%s", s1);
		// nhap diem
		gotoxy(109, 3 * i + 5);
		cin >> a.diemTB;
		while (!KiemTra_Diem(a))
		{
			GhiChu(" Ban da nhap sai diem. Vui long nhap lai ",35,27,74,1500);
			gotoxy(109, 3 * i + 5);
			for (int j = 0; j < 6; j++) cout << " ";
			gotoxy(109, 3 * i + 5);
			cin >> a.diemTB;
		}
		deleteDrawed(1, 30, 100);
		gotoxy(109, 3 * i + 5);
		cout << a.diemTB;
		ds2.push_back(a);
		ds3.push_back(a);
		i++;
		fflush(stdin);
		Output_File(ds2);
		GhiChu(" Ban da nhap thanh cong, nhan ESC de thoat, nhan phim bat ki de tiep tuc ",20,27,74,1500);
	} while (getch() != 27);
	system("cls");
	Menu(0);
}

void Input_file(vector<SinhVien>& ds2, vector<SinhVien>& ds3)
{
	FILE* f1;
	f1 = fopen("Out.txt", "rb");
	SinhVien sv1;
	fseek(f1, 0L, SEEK_END); //doi con tro ve cuoi tap tin
	int s = ftell(f1);
	int n = s / sizeof(SinhVien);
	rewind(f1);
	while (n > 0)
	{
		fread(&sv1, sizeof(SinhVien), 1, f1);
		n--;
		ds2.push_back(sv1);
		ds3.push_back(sv1);
	}
	fclose(f1);
	getch();
}

void Menu();

void Output_1SV(SinhVien& sv, int x, int y, int focus)
{
	if (focus == 1)
	{
		char s1[20];
		box(1, 3 * x + 4 + 2, 10, 2, 11, 2, " ");
		SetColor(10);
		gotoxy(2, 3 * x + 5 + 2);
		printf("%5d", y + 1);
		box(11, 3 * x + 4 + 2, 40, 2, 11, 2, " ");
		SetColor(10);
		gotoxy(18, 3 * x + 5 + 2);
		printf("%s", sv.hoTen);
		box(51, 3 * x + 4 + 2, 20, 2, 11, 2, " ");
		SetColor(10);
		gotoxy(55, 3 * x + 5 + 2);
		printf("%s", sv.maLop);
		box(71, 3 * x + 4 + 2, 15, 2, 11, 2, " ");
		SetColor(10);
		gotoxy(74, 3 * x + 5 + 2);
		printf("%s", sv.maSV);
		box(86, 3 * x + 4 + 2, 20, 2, 11, 2, " ");
		bool kt = KiemTra_NgaySinh(sv, s1);
		SetColor(10);
		gotoxy(90, 3 * x + 5 + 2);
		printf("%s", s1);
		box(106, 3 * x + 4 + 2, 10, 2, 11, 2, " ");
		SetColor(10);
		gotoxy(109, 3 * x + 5 + 2);
		cout << sv.diemTB;
		SetColor(15);
	}
	else
	{
		char s1[20];
		box(1, 3 * x + 4 + 2, 10, 2, 11, 2, " ");
		//draw(1, 3 * x + 4 + 2, " ", 1, 10, 3, 2);
		gotoxy(2, 3 * x + 5 + 2);
		printf("%5d", y + 1);
		box(11, 3 * x + 4 + 2, 40, 2, 11, 2, " ");
		//draw(11, 3 * x + 4 + 2, " ", 1, 40, 3, 2);
		gotoxy(18, 3 * x + 5 + 2);
		printf("%s", sv.hoTen);
		box(51, 3 * x + 4 + 2, 20, 2, 11, 2, " ");
		//draw(51, 3 * x + 4 + 2, " ", 1, 20, 3, 2);
		gotoxy(55, 3 * x + 5 + 2);
		printf("%s", sv.maLop);
		box(71, 3 * x + 4 + 2, 15, 2, 11, 2, " ");
		//draw(71, 3 * x + 4 + 2, " ", 1, 15, 3, 2);
		gotoxy(74, 3 * x + 5 + 2);
		printf("%s", sv.maSV);
		box(86, 3 * x + 4 + 2, 20, 2, 11, 2, " ");
		//draw(86, 3 * x + 4 + 2, " ", 1, 20, 3, 2);
		bool kt = KiemTra_NgaySinh(sv, s1);
		gotoxy(90, 3 * x + 5 + 2);
		printf("%s", s1);
		box(106, 3 * x + 4 + 2, 10, 2, 11, 2, " ");
		//draw(106, 3 * x + 4 + 2, " ", 1, 10, 3, 2);
		gotoxy(109, 3 * x + 5 + 2);
		cout << sv.diemTB;
	}
}

void Output(vector<SinhVien>& ds2)
{
	int i = 0, trang = 0;
	if (ds2.size() == 0)
	{
		system("cls");
		box(5, 5, 40, 2, 11, 2, " Khong co sinh vien nao ");
		//draw(5, 5, " Khong co sinh vien nao", 1, 40, 3, 2);
	}
	else
	{
		inBang();
		gotoxy(3, 1);
		printf("So sinh vien hien co la: %d", ds2.size());
		int dau = 0, cuoi = 9;
		if (cuoi > ds2.size() - 1) cuoi = ds2.size() - 1;
		for (i = dau; i <= cuoi; i++)
		{
			Output_1SV(ds2[i], i, i, 0);
		}
		gotoxy(45, 38);
		printf("-----Trang %d-----", trang + 1);
		while (1)
		{
			if (_kbhit())
			{
				char c = _getch();
				if (c == 77)
				{
					trang++;
					dau += 10;
					cuoi += 10;
					if (cuoi > ds2.size() - 1)
						if (dau < ds2.size() - 1) cuoi = ds2.size() - 1;
						else
						{
							dau = 0;
							cuoi = 9;
							trang = 0;
						}
					system("cls");
					inBang();
					for (i = dau; i <= cuoi; i++)
					{
						Output_1SV(ds2[i], i % 10, i, 0);
					}
					gotoxy(45, 38);
					printf("-----Trang %d-----", trang + 1);
					gotoxy(3, 1);
					printf("So sinh vien hien co la: %d", ds2.size());
				}
				else if (c == 75)
				{
					trang--;
					dau -= 10;
					cuoi -= 10;
					if (dau < 0)
					{
						cuoi = ds2.size() - 1;
						dau = cuoi - cuoi % 10;
						trang = ds2.size() / 10;
					}
					else
						if (cuoi % 10 < 9)
						{
							cuoi = (cuoi / 10) * 10 + 9;
						}
					system("cls");
					inBang();
					for (i = dau; i <= cuoi; i++)
					{
						Output_1SV(ds2[i], i % 10, i, 0);
					}
					gotoxy(45, 38);
					printf("-----Trang %d-----", trang + 1);
					gotoxy(3, 1);
					printf("So sinh vien hien co la: %d", ds2.size());
				}
				else if (c == 27)
				{
					system("cls");
					Menu(1);
					break;
				}
			}
		}
		_getch();
	}
}

void Output_File(vector<SinhVien>& ds2)
{
	FILE* f1;
	f1 = fopen("Out.txt", "wb");
	for (int i = 0; i < ds.size(); i++)
	{
		fwrite(&ds2[i], sizeof(SinhVien), 1, f1);
	}
	fclose(f1);
	getch();
}

void Output_File1(vector<SinhVien> &s)
{
	ofstream outf;
	outf.open("Output.txt");
	if (!outf)
	{
		cout << "Khong the mo file";
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
		{
			outf << s[i].maLop << ", "
				 << s[i].maSV << ", "
				 << s[i].hoTen << ", "
				 //<< s[i].hoTen << ", "
				 << s[i].NgaySinh << "/";
				 //<< s[i].nSinh.thang << "/"
				 //<< s[i].nSinh.nam << ", ";
			if (int(s[i].diemTB * 10) % 10 != 0)
			{
				outf << s[i].diemTB << endl;
			}
			else
			{
				outf << s[i].diemTB << ".0" << endl;
			}
		}
	}
}

void inBang()
{
	system("cls");
	box(1, 3, 10, 2, 11, 2, "   STT");
	box(11, 3, 40, 2, 11, 2, "         Ho va ten");
	box(51, 3, 20, 2, 11, 2, "       Lop");
	box(71, 3, 15, 2, 11, 2, " Ma sinh vien");
	box(86, 3, 20, 2, 11, 2, "   Ngay sinh");
	box(106, 3, 10, 2, 11, 2, "   Diem");
	//draw(1, 3, "  STT", 1, 10, 3, 2);
	//draw(11, 3, "          Ho va ten", 1, 40, 3, 2);
	//draw(51, 3, "       Lop", 1, 20, 3, 2);
	//draw(71, 3, " Ma Sinh Vien", 1, 15, 3, 2);
	//draw(86, 3, "     Ngay sinh", 1, 20, 3, 2);
	//draw(106, 3, "  Diem", 1, 10, 3, 2);

}

void HoanVi(SinhVien& sv1, SinhVien& sv2)
{
	SinhVien temp = sv1;
	sv1 = sv2;
	sv2 = temp;
}

//>0: 1>2

int cmp_ma(SinhVien sv1, SinhVien sv2)
{
	return strcmp(sv1.maSV, sv2.maSV);
}

int cmp_ten(SinhVien sv1, SinhVien sv2)
{
	int key = 0;
	int a[30], b[30], u = 0, v = 0;
	for (int x = strlen(sv1.hoTen) - 1; x >= 0; x--)
	{
		if (sv1.hoTen[x - 1] == ' ' && sv1.hoTen[x] != ' ')
		{
			int y = x;
			while (y < strlen(sv1.hoTen) && sv1.hoTen[y] != ' ')
			{
				a[u] = sv1.hoTen[y];
				u++;
				y++;
			}
		}
		if (x == 0)
		{
			int y = x;
			while (y < strlen(sv1.hoTen) && sv1.hoTen[y] != ' ')
			{
				a[u] = sv1.hoTen[y];
				u++;
				y++;
			}
		}
	}
	for (int z = strlen(sv2.hoTen) - 1; z >= 0; z--)
	{
		if (sv2.hoTen[z - 1] == ' ' && sv2.hoTen[z] != ' ')
		{
			int t = z;
			while (sv2.hoTen[t] != '\0' && sv2.hoTen[t] != ' ')
			{
				b[v] = sv2.hoTen[t];
				v++;
				t++;
			}
		}
		if (z == 0)
		{
			int t = z;
			while (sv2.hoTen[t] != '\0' && sv2.hoTen[t] != ' ')
			{
				b[v] = sv2.hoTen[t];
				v++;
				t++;
			}
		}
	}
	int k = 0;
	while (key != 1 && key != -1)
	{
		if (a[k] > b[k]) key = 1;
		else
			if (a[k] < b[k]) key = -1;
			else k++;
	}
	return key;
}

int cmp_lop(SinhVien sv1, SinhVien sv2)
{
	return strcmp(sv1.maLop, sv2.maLop);
}

int cmp_diem(SinhVien sv1, SinhVien sv2)
{
	if (sv1.diemTB < sv2.diemTB) return 1;
	else return -1;
}

int cmp_ngaysinh(SinhVien sv1, SinhVien sv2)
{
	int key = 0;
	int nam1 = 0, nam2 = 0, thang1 = 0, thang2 = 0, ngay1 = 0, ngay2 = 0, power = 1;
	char s1[20], s2[20];
	bool kt1 = KiemTra_NgaySinh(sv1, s1);
	bool kt2 = KiemTra_NgaySinh(sv2, s2);
	for (int x = 9; x > 5; x--)
	{
		nam1 = nam1 + (s1[x] - '0') * power;
		nam2 = nam2 + (s2[x] - '0') * power;
		power *= 10;
	}
	power = 1;
	for (int x = 4; x > 2; x--)
	{
		thang1 = thang1 + (s1[x] - '0') * power;
		thang2 = thang2 + (s2[x] - '0') * power;
		power *= 10;
	}
	power = 1;
	for (int x = 1; x >= 0; x--)
	{
		ngay1 = ngay1 + (s1[x] - '0') * power;
		ngay2 = ngay2 + (s2[x] - '0') * power;
		power *= 10;
	}
	if (nam1 > nam2) key = 1;
	else if (nam1 < nam2) key = -1;
	else
	{
		if (thang1 > thang2) key = 1;
		else if (thang1 < thang2) key = -1;
		else
		{
			if (ngay1 > ngay2) key = 1;
			else key = -1;
		}
	}
	return key;
}
//bat dau tu phan tu i, trong mang con lai, chon ptu lon hon phan tu i va doi cho j cho i, lan luot se co gia tri lon nhat
void Selection_Sort(vector<SinhVien> ds2, vector<SinhVien> ds3, int sel)
{
	for (int i = 0; i < ds2.size(); i++)
		for (int j = i + 1; j < ds2.size(); j++)
		{
			int key;
			switch (sel)
			{
			case 0: key = cmp_ma(ds2[i], ds2[j]); break;
			case 1: key = cmp_ten(ds2[i], ds2[j]); break;
			case 2: key = cmp_lop(ds2[i], ds2[j]); break;
			case 3: key = cmp_diem(ds2[i], ds2[j]); break;
			case 4: key = cmp_ngaysinh(ds2[i], ds2[j]); break;
			}
			if (key > 0)
			{
				HoanVi(ds2[i], ds2[j]);
			}
		}
	Output(ds2);
}

// chay tu phan tu i, trong mang con lai, chon phan tu lon hon xep sang vi tri ben trai
void Insertion_Sort(vector<SinhVien>& ds2, vector<SinhVien>& ds3, int sel)
{
	for (int i = 0; i < ds2.size(); i++)
		for (int j = i; j > 0; j--)
		{
			int key;
			switch (sel)
			{
			case 0: key = cmp_ma(ds2[j - 1], ds2[j]); break;
			case 1: key = cmp_ten(ds2[j - 1], ds2[j]); break;
			case 2: key = cmp_lop(ds2[j - 1], ds2[j]); break;
			case 3: key = cmp_diem(ds2[j - 1], ds2[j]); break;
			case 4: key = cmp_ngaysinh(ds2[j - 1], ds2[j]); break;
			}
			if (key > 0)
			{
				HoanVi(ds2[j - 1], ds2[j]);
			}
		}
	Output(ds2);
}
//bublesort xep vi tri dau tien va vi tri cuoi cung
void Buble_Sort(vector<SinhVien> ds2, vector<SinhVien> ds3, int sel)
{
	for (int i = 0; i < ds2.size(); i++)
		for (int j = ds2.size() - 1; j > i; j--)
		{
			int key;
			switch (sel)
			{
			case 0: key = cmp_ma(ds2[j - 1], ds2[j]); break;
			case 1: key = cmp_ten(ds2[j - 1], ds2[j]); break;
			case 2: key = cmp_lop(ds2[j - 1], ds2[j]); break;
			case 3: key = cmp_diem(ds2[j - 1], ds2[j]); break;
			case 4: key = cmp_ngaysinh(ds2[j - 1], ds2[j]); break;
			}
			if (key > 0)
			{
				HoanVi(ds2[j - 1], ds2[j]);
			}
		}
	Output(ds2);
}
void Quick_Sort(vector<SinhVien>& ds2, vector<SinhVien>& ds3, int l, int r, int sel)
{
	int i, j;
	SinhVien chot;
	if (l < r)
	{
		i = l + 1;
		j = r;
		chot = ds2[l];
		do
		{
			switch (sel)
			{
			case 0: {
				while (cmp_ma(ds2[i], chot) <= 0 && i <= j) i++;
				while (cmp_ma(ds2[j], chot) > 0 && i <= j) j--;
				break;
			}
			case 1: {
				while (cmp_ten(ds2[i], chot) <= 0 && i <= j) i++;
				while (cmp_ten(ds2[j], chot) > 0 && i <= j) j--;
				break;
			}
			case 2: {
				while (cmp_lop(ds2[i], chot) <= 0 && i <= j) i++;
				while (cmp_lop(chot, ds2[j]) < 0 && i <= j) j--;
				break;
			}
			case 3: {
				while (cmp_diem(ds2[i], chot) < 0 && i <= j) i++;
				while (cmp_diem(chot, ds2[j]) < 0 && i <= j) j--;
				break;
			}
			case 4: {
				while (cmp_ngaysinh(ds2[i], chot) < 0 && i <= j) i++;
				while (cmp_ngaysinh(chot, ds2[j]) < 0 && i <= j) j--;
				break;
			}
			}
			if (i < j)
			{
				HoanVi(ds2[i], ds2[j]);
				i++;
				j--;
			}
		} while (i <= j);
		HoanVi(ds2[j], ds2[l]);
		Quick_Sort(ds2, ds3, l, j - 1, sel);
		Quick_Sort(ds2, ds3, j + 1, r, sel);
	}
}
void TimKiem_TuanTu(vector<SinhVien>& ds2, int n, int sel)
{
	system("cls");
	char maSV[10], lop[15], ten[30], ngaysinh[3], thangsinh[3], namsinh[5];
	double diem;
	switch (sel)
	{
	case 0:
		box(5, 5, 30, 2, 11, 2, "   Nhap ma sinh vien");
		box(37, 5, 30, 2, 11, 2, " ");
		//draw(5, 5, "   Nhap ma SV ", 1, 30, 3, 2);
		//draw(37, 5, " ", 1, 30, 3, 2);
		gotoxy(40, 6);
		gets(maSV);
		break;
	case 1:
		box(5, 5, 30, 2, 11, 2, "   Nhap ten sinh vien");
		box(37, 5, 30, 2, 11, 2, " ");
		//draw(5, 5, "   Nhap ten SV ", 1, 30, 3, 2);
		//draw(37, 5, " ", 1, 30, 3, 2);
		gotoxy(40, 6);
		gets(ten);
		break;
	case 2:
		box(5, 5, 30, 2, 11, 2, "     Nhap lop");
		box(37, 5, 30, 2, 11, 2, " ");
		//draw(5, 5, "   Nhap lop", 1, 30, 3, 2);
		//draw(37, 5, " ", 1, 30, 3, 2);
		gotoxy(40, 6);
		gets(lop);
		break;
	case 3:
		box(5, 5, 30, 2, 11, 2, "     Nhap diem");
		box(37, 5, 30, 2, 11, 2, " ");
		//draw(5, 5, "   Nhap diem", 1, 30, 3, 2);
		//draw(37, 5, " ", 1, 30, 3, 2);
		gotoxy(40, 6);
		cin >> diem;
		break;
	case 4:
		box(5, 5, 30, 2, 11, 2, "     Nhap ngay sinh");
		box(37, 5, 30, 2, 11, 2, " ");
		//draw(5, 5, "Nhap ngay sinh", 1, 30, 3, 2);
		//draw(37, 5, " ", 1, 30, 3, 2);
		gotoxy(40, 6);
		gets(ngaysinh);
		box(5, 9, 30, 2, 11, 2, "     Nhap thang sinh");
		box(37, 9, 30, 2, 11, 2, " ");
		//draw(5, 9, "Nhap thang sinh", 1, 30, 3, 2);
		//draw(37, 9, " ", 1, 30, 3, 2);
		gotoxy(40, 10);
		gets(thangsinh);
		box(5, 13, 30, 2, 11, 2, "     Nhap nam sinh");
		box(37, 13, 30, 2, 11, 2, " ");
		//draw(5, 13, "Nhap nam sinh ", 1, 30, 3, 2);
		//draw(37, 13, " ", 1, 30, 3, 2);
		gotoxy(40, 14);
		gets(namsinh);
		break;
	}
	if (ds2.size() == 0)
	{
		box(5, 5, 30, 2, 11, 2, " Chua co sinh vien nao ");
		//draw(5, 5, "  Chua co sinh vien nao", 1, 30, 3, 2);
		_getch();
		return;
	}
	vector<SinhVien> ds3;
	int dem = 0;
	for (int i = 0; i < ds2.size(); i++)
	{
		switch (sel)
		{
		case 0:
		{
			strupr(maSV);//in hoa
			if (strstr(ds2[i].maSV, maSV) != NULL) //strstrc dua ra chuoi tu vi tri thu maSV, neu giong 1 ky tu c?ng xuat ra
			{
				ds3.push_back(ds2[i]);
			}
			break;
		}
		case 1:
		{
			char s[30];
			strcpy(s, ds2[i].hoTen);//strcpy sao chep 1 chuoi sang chuoi khac
			strupr(s);
			strupr(ten);
			if (strstr(s, ten) != NULL) 
				ds3.push_back(ds2[i]);
			break;
		}
		case 2:
		{
			char s[30];
			strcpy(s, ds2[i].maLop);
			strupr(s);
			strupr(lop);
			if (strstr(s, lop) != NULL)
			{
				ds3.push_back(ds2[i]);
			}
			break;
		}
		case 3:
		{
			if (ds2[i].diemTB == diem)
			{
				ds3.push_back(ds2[i]);
			}
			break;
		}
		case 4:
		{
			char s[20];
			bool kt = KiemTra_NgaySinh(ds2[i], s);
			char s1[5];
			s1[0] = s[0];
			s1[1] = s[1];
			s1[2] = '\0';
			if (ngaysinh[0] != '\0' && strcmp(s1, ngaysinh) != 0) break;
			char s2[5];
			s2[0] = s[3];
			s2[1] = s[4];
			s2[2] = '\0';
			if (thangsinh[0] != '\0' && strcmp(s2, thangsinh) != 0) break;
			char s3[10];
			s3[0] = s[6];
			s3[1] = s[7];
			s3[2] = s[8];
			s3[3] = s[9];
			s3[4] = '\0';
			if (namsinh[0] != '\0' && strcmp(s3, namsinh) != 0) break;
			ds3.push_back(ds2[i]);
			break;
		}
		}
	}
	Output(ds3); //danh sach 3 la danh sach rong, xuat ds3 ra.
}

void TimKiem(vector<SinhVien>& ds2, vector<SinhVien>& ds3, int x, int n, char* maSV)
{
	strupr(maSV); //in hoa
	int k = strcmp(maSV, ds2[n / 2].maSV);
	if (strcmp(maSV, ds2[n / 2].maSV) > 0) TimKiem(ds2, ds3, n / 2 + 1, n, maSV);
	else if (strcmp(maSV, ds2[n / 2].maSV) < 0) TimKiem(ds2, ds3, 0, n / 2 - 1, maSV);
	else
	{
		ds3.push_back(ds2[n / 2]);
	}
}

void TimKiem_NhiPhan(vector<SinhVien>& ds2, int n, int sel)
{
	system("cls");
	char maSV[10], lop[15], ten[30], ngaysinh[3], thangsinh[3], namsinh[5];
	double diem;
	switch (sel)
	{
	case 0:
		box(5, 5, 30, 2, 11, 2, "     Nhap ma sinh vien");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 6);
		gets(maSV);
		while (strlen(maSV) < 8)
		{
			GhiChu(" Ban da nhap sai ma, moi nhap lai dung 8 ki tu ",1,20,74,1500);
			gotoxy(40, 6);
			printf("         ");
			gotoxy(40, 6);
			gets(maSV);
		}
		deleteDrawed(1, 20, 80);
		break;
	case 1:
		box(5, 5, 30, 2, 11, 2, "   Nhap ten sinh vien");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 6);
		gets(ten);
		break;
	case 2:
		box(5, 5, 30, 2, 11, 2, "   Nhap lop");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 6);
		gets(lop);
		break;
	case 3:
		box(5, 5, 30, 2, 11, 2, "   Nhap diem");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 6);
		cin >> diem;
		break;
	case 4:
		box(5, 5, 30, 2, 11, 2, "   Nhap ngay sinh");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 6);
		gets(ngaysinh);
		box(5, 5, 30, 2, 11, 2, "   Nhap thang sinh");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 10);
		gets(thangsinh);
		box(5, 5, 30, 2, 11, 2, "   Nhap nam sinh");
		box(37, 5, 30, 2, 11, 2, " ");
		gotoxy(40, 14);
		gets(namsinh);
		break;
	}
	if (ds2.size() == 0)
	{
		box(5, 5, 30, 2, 11, 2, " Chua co sinh vien nao");
		_getch();
		return;
	}
	vector<SinhVien> ds3;
	if (sel == 0) TimKiem(ds2, ds3, 0, n, maSV);
	for (int i = 0; i < ds2.size(); i++)
	{
		switch (sel)
		{
		case 1:
		{
			char s[30];
			strcpy(s, ds2[i].hoTen);
			strupr(s);
			strupr(ten);
			if (strstr(s, ten) != NULL)
				ds3.push_back(ds2[i]);
			break;
		}
		case 2:
		{
			char s[30];
			strcpy(s, ds2[i].maLop);
			strupr(s);
			strupr(lop);
			if (strstr(s, lop) != NULL)
			{
				ds3.push_back(ds2[i]);
			}
			break;
		}
		case 3:
		{
			if (ds2[i].diemTB == diem)
			{
				ds3.push_back(ds2[i]);
			}
			break;
		}
		case 4:
		{
			char s[20];
			bool kt = KiemTra_NgaySinh(ds2[i], s);
			char s1[5];
			s1[0] = s[0];
			s1[1] = s[1];
			s1[2] = '\0';
			if (ngaysinh[0] != '\0' && strcmp(s1, ngaysinh) != 0) break;
			char s2[5];
			s2[0] = s[3];
			s2[1] = s[4];
			s2[2] = '\0';
			if (thangsinh[0] != '\0' && strcmp(s2, thangsinh) != 0) break;
			char s3[10];
			s3[0] = s[6];
			s3[1] = s[7];
			s3[2] = s[8];
			s3[3] = s[9];
			s3[4] = '\0';
			if (namsinh[0] != '\0' && strcmp(s3, namsinh) != 0) break;
			ds3.push_back(ds2[i]);
			break;
		}
		}
	}
	
	Output(ds3);
}

void ThongKeTiLe(vector<SinhVien>& ds2, vector<SinhVien>& ds3, int n)
{
	//system("cls");
	Quick_Sort(ds2, ds3, 0, n - 1, 2);
	int xuatsac = 0, gioi = 0, kha = 0, TB = 0, yeu = 0, tong = 0;
	int tongxx = 0, tongg = 0, tongk = 0, tongtb = 0, tongy = 0, tongt = 0;
	vector<PhanLoai> ds4;
	box(1, 3, 5, 5, 11, 2, "STT");
	box(6, 3, 15, 5, 11, 2, "     LOP ");
	box(21, 3, 16, 2, 11, 2, "   Xuat Sac");
	box(21, 6, 8, 2, 11, 2, "So SV");
	box(29, 6, 8, 2, 11, 2, "Ti le");
	box(37, 3, 16, 2, 11, 2, "    Gioi");
	box(37, 6, 8, 2, 11, 2, "So SV");
	box(45, 6, 8, 2, 11, 2, "Ti le");
	box(53, 3, 16, 2, 11, 2, "   Kha");
	box(53, 6, 8, 2, 11, 2, "So SV");
	box(61, 6, 8, 2, 11, 2, "Ti le");
	box(69, 3, 16, 2, 11, 2, "  Trung Binh");
	box(69, 6, 8, 2, 11, 2, "So SV");
	box(77, 6, 8, 2, 11, 2, "Ti le");
	box(85, 3, 16, 2, 11, 2, "  Yeu");
	box(85, 6, 8, 2, 11, 2, "So SV");
	box(93, 6, 8, 2, 11, 2, "Ti Le");
	box(101, 3, 10, 5, 11, 2, "   TONG  ");
	SinhVien s1;
	s1 = ds2[0];
	int i = 0;
	while (i <= n)
	{
		SinhVien s2;
		s2 = ds2[i];
		if (i != n && cmp_lop(s1, ds2[i]) == 0)
		{
			if (ds2[i].diemTB >= 9) xuatsac++;
			else if (ds2[i].diemTB >= 8) gioi++;
			else if (ds2[i].diemTB >= 7) kha++;
			else if (ds2[i].diemTB >= 5) TB++;
			else yeu++;
		}
		else
		{
			PhanLoai x;
			strcpy(x.tenlop, s1.maLop);
			tong = xuatsac + gioi + kha + TB + yeu;
			x.xx = xuatsac; x.gioi = gioi; x.kha = kha; x.tb = TB; x.yeu = yeu; x.tong = tong;
			tongxx += xuatsac; tongg += gioi; tongk += gioi; tongtb += TB; tongy += yeu; tongt += tong;
			ds4.push_back(x);
			xuatsac = gioi = kha = TB = yeu = tong = 0;
			if (i < n)
			{
				s1 = s2; i--;
			}
		}
		i++;
	}
	for (int j = 0; j < ds4.size(); j++)
	{
		box(1, 3 * j + 6 + 3, 5, 2, 11, 2, " ");
		//draw(1, 3 * j + 6 + 3, " ", 1, 5, 3, 2);
		gotoxy(3, 3 * j + 7 + 3);
		cout << j + 1;
		box(6, 3 * j + 9, 15, 2, 11, 2, " ");
		//draw(6, 3 * j + 9, " ", 1, 15, 3, 2);
		gotoxy(7, 3 * j + 7 + 3);
		cout << ds4[j].tenlop;
		box(21, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(21, 3 * j + 9, "  ", 1, 8, 3, 2);
		gotoxy(22, 3 * j + 10);
		cout << ds4[j].xx;
		box(29, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(29, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(30, 3 * j + 10);
		printf("%.2f", (float)ds4[j].xx * 100 / ds4[j].tong);
		box(37, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(37, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(38, 3 * j + 10);
		cout << ds4[j].gioi;
		box(45, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(45, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(46, 3 * j + 10);
		printf("%.2f", (float)ds4[j].gioi * 100 / ds4[j].tong);
		box(53, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(53, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(54, 3 * j + 10);
		cout << ds4[j].kha;
		box(61, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(61, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(62, 3 * j + 10);
		printf("%.2f", (float)ds4[j].kha * 100 / ds4[j].tong);
		box(69, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(69, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(70, 3 * j + 10);
		cout << ds4[j].tb;
		box(77, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(77, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(78, 3 * j + 10);
		printf("%.2f", (float)ds4[j].tb * 100 / ds4[j].tong);
		box(85, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(85, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(86, 3 * j + 10);
		cout << ds4[j].yeu;
		box(93, 3 * j + 9, 8, 2, 11, 2, " ");
		//draw(93, 3 * j + 9, " ", 1, 8, 3, 2);
		gotoxy(94, 3 * j + 10);
		printf("%.2f", (float)ds4[j].yeu * 100 / ds4[j].tong);
		box(101, 3 * j + 9, 10, 2, 11, 2, " ");
		//draw(101, 3 * j + 9, "   ", 1, 10, 3, 2);
		gotoxy(104, 3 * j + 10);
		cout << ds4[j].tong;
	}
	box(1, 3 * ds4.size() + 9, 8, 2, 11, 2, " Tong");
	//draw(1, 3 * ds4.size() + 9, " Tong", 1, 8, 3, 2);
	box(9, 3 * ds4.size() + 9, 12, 2, 11, 2, " ");
	//draw(9, 3 * ds4.size() + 9, " ", 1, 12, 3, 2);
	gotoxy(14, 3 * ds4.size() + 10);
	cout << ds4.size();
	box(21, 3 * ds4.size() + 9, 8, 2, 11, 2, "   ");
	//draw(21, 3 * ds4.size() + 9, "   ", 1, 8, 3, 2);
	gotoxy(22, 3 * ds4.size() + 10);
	cout << tongxx;
	box(29, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(29, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(30, 3 * ds4.size() + 10);
	printf("%.2f", (float)tongxx * 100 / tongt);
	box(37, 3 * ds4.size() + 9, 8, 2, 11, 2, "   ");
	//draw(37, 3 * ds4.size() + 9, "   ", 1, 8, 3, 2);
	gotoxy(38, 3 * ds4.size() + 10);
	cout << tongg;
	box(45, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(45, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(46, 3 * ds4.size() + 10);
	printf("%.2f", (float)tongg * 100 / tongt);
	box(53, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(53, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(54, 3 * ds4.size() + 10);
	cout << tongk;
	box(61, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(61, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(62, 3 * ds4.size() + 10);
	printf("%.2f", (float)tongk * 100 / tongt);
	box(69, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(69, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(70, 3 * ds4.size() + 10);
	cout << tongtb;
	box(77, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(77, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(78, 3 * ds4.size() + 10);
	printf("%.2f", (float)tongtb * 100 / tongt);
	box(85, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(85, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(86, 3 * ds4.size() + 10);
	cout << tongy;
	box(93, 3 * ds4.size() + 9, 8, 2, 11, 2, " ");
	//draw(93, 3 * ds4.size() + 9, " ", 1, 8, 3, 2);
	gotoxy(94, 3 * ds4.size() + 10);
	printf("%.2f", (float)tongy * 100 / tongt);
	box(101, 3 * ds4.size() + 9, 10, 2, 11, 2, " ");
	//draw(101, 3 * ds4.size() + 9, " ", 1, 10, 3, 2);
	gotoxy(104, 3 * ds4.size() + 10);
	cout << tongt;
	getch();
	//Sleep(3000) ;
}

void Change_SV(vector<SinhVien>& ds2, vector<SinhVien>& ds3, int i, int j)
{
	int x = 18, y = 3 * j + 7;
	box(1, 40, 80, 2, 11, 2, " Bam tab de sang o ke tiep, bam enter de sua ");
	//draw(1, 40, "Bam tab de sang o ke tiep, bam enter de sua", 1, 80, 3, 2);
	gotoxy(18, 3 * j + 7);
	SinhVien sv1 = ds2[i];
	while (1)
	{
		if (kbhit())
		{
			char k = getch();
			if (k == 9)
			{
				if (x == 18)
				{
					x = 55;
					gotoxy(x, y);
				}
				else if (x == 55)
				{
					x = 90;
					gotoxy(x, y);
				}
				else if (x == 90)
				{
					x = 109;
					gotoxy(x, y);
				}
				else if (x == 109)
				{
					ds2[i] = sv1;
					ds3[i] = ds2[i];
					deleteDrawed(1, 40, 80);
					return;
				}
			}
			if (k == 13)
			{
				gotoxy(x, y);
				if (x == 18)
				{
					cout << "                        ";
					gotoxy(x, y);
					gets(sv1.hoTen);
					ChuanHoa_Ten(sv1);
					gotoxy(x, y);
					cout << sv1.hoTen;
					//				gotoxy(55,y);
					k = 9; continue;
				}
				if (x == 55)
				{
					cout << "          ";
					gotoxy(x, y);
					gets(sv1.maLop);
					strupr(sv1.maLop);
					gotoxy(x, y);
					cout << sv1.maLop;
					KiemTra_MaSV(sv1, i + 1);
					gotoxy(74, y);
					cout << sv1.maSV;
					//				gotoxy(90,y);
					k = 9; continue;
				}
				if (x == 90)
				{
					cout << "          ";
					gotoxy(x, y);
					gets(sv1.NgaySinh);
					char s1[20];
					while (!KiemTra_NgaySinh(sv1, s1))
					{
						box(1, 40, 100, 2, 11, 2, "Ban da nhap sai ngay sinh. Moi ban nhap lai");
						//draw(1, 40, "Ban da nhap sai ngay sinh. Moi ban nhap lai", 1, 100, 3, 2);
						gotoxy(x, y);
						gets(sv1.NgaySinh);
					}
					deleteDrawed(1, 40, 100);
					gotoxy(x, y);
					printf("%s", s1);
					strcpy(sv1.NgaySinh, s1);
					//				gotoxy(109,y);
					k = 9; continue;
				}
				if (x == 109)
				{
					cout << "    ";
					gotoxy(x, y);
					cin >> sv1.diemTB;
					while (!KiemTra_Diem(sv1))
					{
						box(1, 40, 100, 2, 11, 2, "Ban da nhap sai diem. Moi ban nhap lai");
						//draw(1, 40, "Ban da nhap sai diem. Moi ban nhap lai", 1, 100, 3, 2);
						gotoxy(x, y);
						cin >> sv1.diemTB;
					}
					deleteDrawed(1, 40, 100);
					gotoxy(x, y);
					cout << sv1.diemTB;
					k = 9; continue;
				}
			}
		}
	}
	deleteDrawed(1, 40, 80);
}

void CapNhat_DSSV(vector<SinhVien>& ds2, vector<SinhVien>& ds3, int trang)
{
	int i = 0, _pointer;
	int dau, cuoi;
	_pointer = trang * 10;
	while (1)
	{
		if (ds2.size() == 0)
		{
			system("cls");
			box(5, 5, 40, 2, 11, 2, " Khong co sinh vien nao");
			//draw(5, 5, " Khong co sinh vien nao", 1, 40, 3, 2);
		}
		else
		{
			inBang();
			gotoxy(3, 1);
			printf("So sinh vien hien co la: %d", ds2.size());
			dau = 0 + trang * 10, cuoi = 9 + trang * 10;
			if (cuoi > ds2.size() - 1) cuoi = ds2.size() - 1;
			for (i = dau; i <= cuoi; i++)
			{
				if (_pointer == i)
				{
					Output_1SV(ds2[i], i % 10, i, 1);
				}
				else
				{
					Output_1SV(ds2[i], i % 10, i, 0);
				}
			}
			gotoxy(45, 38);
			printf("-----Trang %d-----", trang + 1);
			box(1, 40, 80, 2, 11, 2, " Bam delete de xoa, bam enter de sua");
			//draw(1, 40, "Bam delete de xoa, bam enter de sua", 1, 80, 3, 2);
			while (1)
			{
				if (kbhit())
				{
					char z = getch();
					if (z == 77)
					{
						if (trang < (ds2.size() - 1) / 10)
							CapNhat_DSSV(ds2, ds3, trang + 1);
						else
							CapNhat_DSSV(ds2, ds3, 0);
						break;
					}
					if (z == 75)
					{
						if (trang > 0) CapNhat_DSSV(ds2, ds3, trang - 1);
						else CapNhat_DSSV(ds2, ds3, (ds2.size() - 1) / 10);
						break;
					}
					if (z == 27)
					{
						system("cls");
						Menu(0);
						break;
					}
					if (z == 80)
					{
						if (_pointer < cuoi)
						{
							++_pointer;
						}
						else
						{
							if (cuoi == ds2.size() - 1)
							{
								CapNhat_DSSV(ds2, ds3, 0);
							}
							else
							{
								CapNhat_DSSV(ds2, ds3, trang + 1);
							}
						}
						break;
					}
					if (z == 72)
					{
						if (_pointer > dau)
						{
							--_pointer;
						}
						else
						{
							if (dau == 0)
							{
								CapNhat_DSSV(ds2, ds3, (ds2.size() - 1) / 10);
							}
							else
							{
								CapNhat_DSSV(ds2, ds3, trang - 1);
							}
						}
						break;
					}
					if (z == 13)
					{
						Change_SV(ds2, ds3, _pointer, _pointer % 10);
						Output_File(ds2);
						break;
					}
					if (z == 83) // nhan delete
					{
						ds2.erase(ds2.begin() + _pointer);
						ds3.erase(ds3.begin() + _pointer);
						Output_File(ds2);
						gotoxy(3, 1);
						printf("So sinh vien hien co la: %d", ds2.size());
						break;
					}
				}
			}
		}
	}
}

