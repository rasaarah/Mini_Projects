#include <iostream>
using namespace std;


int main()
{
	int A[3];
	int max, min;
	for (int i=1; i<=3; i++)	
	{			
					cout<<"masukkan nilai ke - "<<i<<" : ";
					cin>>A[i];
					cout<<endl;
					
		max = A[1];
		min = A[1];
		if ( min > A[i])
		{
			min = A[i];
		}
		
		if ( max < A[i])
		{
			max = A[i];
		}

		
	}
	cout<<"maks : "<<max<<endl;
	cout<<"min : "<<min;
	cout<<endl;
	cout<<"========================="<<endl;
	
	cout<<main();
	
return 0;
	
}
