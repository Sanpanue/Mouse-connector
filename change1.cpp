#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
using namespace std;   使用命名空间std；
int p;
int main(){
	system("title 速度设置");
	while(1){
		system("cls");
		printf("CPS(/s): ");
		cin >> p;
		if(!(1 <= p && p <= 100)){
			printf("CPS 必须是一个在 1 和 100 之间的整数!\n");
			Sleep(1000);
		}else break;
	}
	freopen("CPS.ini","w",stdout);
	cout << p;
	fclose(stdout);
	system("start 鼠标连点器v2.0.exe");
	return 0;
}
