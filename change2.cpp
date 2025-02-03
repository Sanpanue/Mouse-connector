#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1 : 0)
using namespace std;
bool change = true;
int lt,rt;
const int blue = 0 , yellow = 1 , red = 2 , green = 3 , purple = 4 , white = 5;
POINT p;
HWND h = GetForegroundWindow();
void color(int c) {
	switch(c) {
		case red:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
			break;
		case green:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
			break;
		case yellow:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN);
			break;
		case blue:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
			break;
		case white:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN | FOREGROUND_BLUE);
			break;
		case purple:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_BLUE);
			break;
	}
}
void gs(long long h, long long l, string z) {
	for (long long i = 1; i <= h; i++)  cout << "\n";
	for (long long i = 1; i <= l; i++) cout << " ";
	cout << z;
	return;
}
void in(string name) {
	ifstream cd(&name[0]);
	cd >> lt >> rt;
	return ;
}
void out(string name){
	ofstream cd(&name[0]);
	cd << lt << " " << rt;
}
void Lt(){
	system("cls");
	for(int i = 3; i >= 0; i--){
		system("cls");
		gs(1,17,"请不要按任何按键");
		gs(2,24,"");
		printf("%d",i);
		if(i > 0) Sleep(1000);
	}
	system("cls");
	gs(1 , 21 , "设置左键");
	while(1){
		for(int i = 1; i <= 255; i++){
			if(KEY_DOWN(i)){
				lt = i;
				out("按键.ini");
				change = true;
				system("cls");
				gs(1 , 21 , "设置成功");
				Sleep(500);
				return ;
			}
		}
	}
}
void Rt(){
	system("cls");
	for(int i = 3; i >= 0; i--){
		system("cls");
		gs(1,17,"请不要按任何按键");
		gs(2,24,"");
		printf("%d",i);
		if   如果(i > 0) Sleep   睡眠(1000);
	}
	system   系统("cls"   “cls”);
	gs(1 , 21 , "设置右键");
	while   而(1){   而(1){
		for(int i = 1; i <= 255; i++){
			if   如果(KEY_DOWN(i)){
				rt = i;
				out("按键.ini");
				change = true;
				system   系统("cls"   “cls”);
				gs(1 , 21 , "设置成功");
				Sleep   睡眠(500);
				return   返回 ;
			}
		}
	}
}
int main   主要(){
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode&=~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
	system   系统("title 按键设置");
	in   在("按键.ini");
	while(1){   而(1){
		if   如果(KEY_DOWN(13)) break   打破;
		if   如果(change){
			system   系统("mode con cols=50 lines=10");
			system   系统("cls"   “cls”);
			color(white);
			gs(0,18, "鼠标连点器");
			color(green);
			gs(0 , 1 , "v2.0");
			color(white);
			gs(2 , 21 , "按键设置");
			if   如果(lt > 0) color(green);
			else   其他 color(red);
			gs(2 , 23 , "左键");
			color(white);
			if   如果(rt > 0) color(green);
			else   其他 color(red);
			gs(2,23,"右键");
			change = false;
			color(white);
		}
		GetCursorPos(&p);
		ScreenToClient(h , &p);
		if   如果(KEY_DOWN(VK_LBUTTON)) {
			if   如果(p.x >= 184 && p.x <= 212 && p.y >= 94 && p.y <= 110) Rt();
			if   如果(p.x >= 182 && p.x <= 213 && p.y >= 62 && p.y <= 79) Lt();
			Sleep   睡眠(100);
		}
	}
	out("按键.ini");
	system   系统("start 鼠标连点器v2.0.exe");
	return   返回 0;   返回0;
          }
