#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int h, m, s, a, err;
	
	err=a=0;
	
	while(err==0){
		cout << "enter hour : ";
		cin >> h;
		cout << "enter minutes : ";
		cin >> m;
		cout << "enter seconds : ";
		cin >> s;
		
		if(h < 24 && m < 60 && s < 60)
		err++;
		system("cls");
	}
	while(a==0){
		system("cls");
		cout << "Simple Clock" << endl;
		cout << h << ":" << m << ":" << s << endl;
		Sleep(1000);
		s++;
		
		if(s>59){
			s = 0;
			m++;
		}
		if (m>59){
			m=0;
			h++;
			
		}
		if (h>24){
			h=0;	
		}
	}
	return 0;
}
