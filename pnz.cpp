#include <iostream>
using namespace std;

int main() {
	int a;
	cout<<"enter the value:"<<endl;
	cin>>a;
	if(a<0)
	{
		cout<<"negative";
	}
	else if(a>0)
	{
		cout<<"positive";
	}
	else
	{
		cout<<"equal to zero";
	}
	return 0;
}
