#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"masukkan bilangan : "; cin>>n;
	
	for (int x=1; x<=n; x++ )
	{
		for (int z=n; z>=x; z--)
		{
			cout<<" ";
		}
		for (int z=x; z<(2*x); z++)
		{
			cout<<"*";
		}
		for (int z=2*(x-1); z>=x; z--)
		{
			cout<<"*";
		}
		cout<<'\n';
		
	}
	main();
	return 0;
}
