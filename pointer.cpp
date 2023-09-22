#include<iostream>
using namespace std;
int main(){
	int x=10,*p;
	p=&x;
	printf("%u",p);
	printf("\n%d",*p);
}

