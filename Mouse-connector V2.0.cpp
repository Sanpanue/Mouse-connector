#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1 : 0)
using namespace std;
int n,a,lt,rt;
POINT p;
HWND h = GetForegroundWindow();
bool Enter,use,change,mv;
const int blue = 0 , yellow = 1 , red = 2 , green = 3 , purple = 4 , white = 5;
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
	return ;
}
void in1(string name) {
	ifstream cd(&name[0]);
	cd >> a;
	return ;
}
void in2(string name){
	ifstream cd(&name[0]);
	cd >> lt >> rt;
	return;
}
void CN() {
	bool OP = true;
	while(1) {
		if(OP) {
			system("mode con cols=50 lines=10");
			system("cls");
			color(white);
			gs(0,18, "鼠标连点器");
			color(green);
			gs(0 , 1 , "v2.0");
			color(white);
			gs(2 , 21 , "连点设置");
			gs(2 , 23 , "按键");
			gs(2,23,"速度\n");
			OP = 0;
		}
		GetCursorPos(&p);
		ScreenToClient(h , &p);
		if(KEY_DOWN(13)) break;
		if(KEY_DOWN(VK_LBUTTON)) {
			if(p.x >= 184 && p.x <= 212 && p.y >= 94 && p.y <= 110) {
				system("start change1.exe");
				exit(0);
			}
			if(p.x >= 182 && p.x <= 213 && p.y >= 62 && p.y <= 79) {
				system("start change2.exe");
				exit(0);
			}
		}
	}
	change = true;
}
int main() {
	CONSOLE_CURSOR_INFO cursor_info = {1, 0};
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
	HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hStdin, &mode);
	mode&=~ENABLE_QUICK_EDIT_MODE;
	SetConsoleMode(hStdin, mode);
	system   系统("title 鼠标连点器");
	change = true;
	in1("CPS.ini");
	if   如果(!(1 <= a && a <= 100)){
		printf("请初始化连点速度(CPS)\n");
		Sleep   睡眠(1000);
		system   系统("start change1.exe");
		exit(0);
	}
	in2("按键.ini");
	if   如果(lt == 0 || rt == 0){
		printf("请初始化触发按键\n");
		Sleep   睡眠(1000);
		system   系统("start change2.exe");
		exit(0);
	}
	color   颜色(white);
	srand(time(NULL));
	while   而(1) {
		if   如果(change) {
			system   系统("mode con cols=50 lines=10"" cols模式=50 line =10");System ("mode concols =50 lines=10")；
			system   系统("cls");   系统(cls);
			color(white);   颜色(白色);
			gs(0,18, "鼠标连点器");
			color(green);   颜色(绿色);
			gs(0 , 1 , "v2.0"   “版本”);g（0,1，“v2.0”）；
			color(white);   颜色(白色);
			gs(2 , 21 , "连点设置");
			if   如果(use) color   颜色(green) , gs(2 , 23 , "启用");
			else   其他 color   颜色(red) , gs(2 , 23 , "关闭");
			color   颜色(white);   颜色(白色);
			if   如果(mv) gs(2 , 23 , "波动");
			else   其他 gs(2 , 23 , "稳定");
			change = false   假;   更改= false   假；
		}
		GetCursorPos(&p);   GetCursorPos(拟定);
		ScreenToClient(h , &p);   ScreenToClient(h, &p)；
		if   如果(KEY_DOWN(VK_LBUTTON)) {如果(KEY_DOWN (VK_LBUTTON)) {
			if   如果(p.x >= 167 && p.x <= 229 && p.y >= 32 && p.y <= 45) CN();如果(p。x > = 167 & & p.x < = 229 & & p.y > = 32 & & p.y < = 45) CN ();
			if   如果(p.x >= 184 && p.x <= 212 && p.y >= 94 && p.y <= 110) mv = !mv , change = true;如果(p。x > = 184 & & p.x < = 212 & & p.y > = 94 & & p.y < = 110) mv = ! mv,改变= true;
			if   如果(p.x >= 182 && p.x <= 213 && p.y >= 62 && p.y <= 79) use = !use , change = true;如果(p。X >= 182 && p X <= 213 && p y >= 62 && p y <= 79) use = !use, change = true；
			Sleep   睡眠(100);   睡眠(100);
		}
		if(use) {   如果(使用){
			if   如果(KEY_DOWN(rt)) {   如果(KEY_DOWN (rt)) {
				mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);
				mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0);
			}
			if   如果(KEY_DOWN(lt)) {   如果(KEY_DOWN (lt)) {
				mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
				mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			}
			int p = rand() % 2;
			if   如果(!p) p--;
			if   如果(mv) Sleep   睡眠(1000 / (a + (p * a / (3 + rand() % 2))));
			else   其他 Sleep   睡眠(1000 / a);
		}
	}
	return   返回 0;   返回0;
                            }
