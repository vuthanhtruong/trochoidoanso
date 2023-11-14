#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	srand(time(NULL));
	int solannhap=0;
	int x=1+rand()%5;
	while(true){
		int a;
		cout<<"\n nhap gia tri cua a: ";
		cin>>a;
		if(a==x){
			while(true){
			cout<<" so cua nguoi choi nhap dung roi";
			cout<<"\n nguoi choi co muon choi tiep khong, ok thi nhap 1, ko thi nhap 0: ";
		int n;
		cin>>n;
		cout<<"\n";
		if(n == 0){
			cout<<" tam biet ban nhe";
			break;
		}
		else if(n==1){
			cout<<" nhap tiep nao: ";
		}
		}
		}
		
		else{
			if(a!=x && a>x){
				cout<<" so nguoi choi nhap sai va a > x";
				solannhap++;
			}
			else if(a!=x && a<x){
				cout<<" so nguoi choi nhap sai va a<x";
				
			}
			else{
				cout<<" so nguoi choi nhap khong trong khoang 1 den 100";
			}
				
			}
				
			
		if(solannhap>7){
			cout<<" game over";
			cout<<"\n nguoi choi co muon choi tiep khong, ok thi nhap 1, ko thi nhap 0: ";
		int m;
		cin>>m;
		cout<<"\n";
		if(m == 0){
			cout<<" tam biet ban nhe";
			break;
		
		}
		else if(m==1){
			cout<<" nhap tiep nao: ";
		}
		
	    }
	    
		}
	return 0;
}