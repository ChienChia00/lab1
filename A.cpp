#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	cout<<num<<" ";
	while(1)
	{
		if(num==1)
			break;
		else
		{
			if(num%2==1)
				num=3*num+1;
			else if(num%2==0)
				num=num/2;
			cout<<num<<" ";
		}
	}
	cout<<endl;
	return 0;
}
