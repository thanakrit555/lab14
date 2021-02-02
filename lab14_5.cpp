#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d){
	int N = 5;
	for(int i = 0;i<N;i++){
		int temp = rand()%12+1;
		switch(temp){
			case 1:
			swap(*a,*b);
			break;
		case 2:
			swap(*a,*c);
			break;
		case 3:
			swap(*a,*d);
			break;
		case 4:
			swap(*b,*a);
			break;
		case 5:
			swap(*b,*c);
			break;
		case 6:
			swap(*b,*d);
			break;
		case 7:
			swap(*c,*a);
			break;
		case 8:
			swap(*c,*b);
			break;
		case 9:
			swap(*c,*d);
			break;
		case 10:
			swap(*d,*a);
			break;
		case 11:
			swap(*d,*b);
			break;
		case 12:
			swap(*d,*c);
			break;
		}
	}
}
void shuffle( int &x,int &y){
	int temp = x;
	x = y;
	y = temp;
}
