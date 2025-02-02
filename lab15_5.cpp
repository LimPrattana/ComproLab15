#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *m1,int *m2,int *m3,int *m4){
	int money[]={*m1,*m2,*m3,*m4};
	int sw,tem;
	for(int i=3;i>0;i--){
		sw=rand()%(i+1);
		tem = money[i];
		money[i]=money[sw];
		money[sw]=tem;
	}
	*m1=money[0];
	*m2=money[1];
	*m3=money[2];
	*m4=money[3];

}