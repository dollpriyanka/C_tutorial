#include<iostream>
using namespace std;

void enter();
void check(int);
void prime(int);

int main() {
	enter();
	return 0;
}
void check(int num)
{
	if(num<0) {
		cout<<"invalid input enter value again"<<endl;
		enter();
	}
	else{
		prime(num);
	}
}
void enter()
{
	int num;
	cout<<"Enter number:";
	cin>>num;
	check(num);
}
void prime(int num)
{
	int i,div = 0;
	for(i=1;i<=num;i++){
		if(num%i==0)
		{
			div++;
		}
	}
	if(div==2)
	{
		cout<<num<<"is a prime number";
	}
	else
	{
		cout<<"is not a prime number";
	}
}
