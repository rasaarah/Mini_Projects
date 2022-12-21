#include <iostream>
#include <stdlib.h>
using namespace std;

template <class vType> class vClass { 
vType X[5];
public:
	void readX() { for(int n=0; n<5; n++){cin>>X[n];} }
	void sortX() 
	{	  
	 vType temp; int pa, index; index=1;
     while(index<5)
       {
		temp=X[index]; pa=index-1;
    	while(pa>=0&&X[pa]>temp)
    	{X[pa+1]=X[pa]; pa=pa-1;}
    	X[pa+1]=temp; index=index+1;
	   }
    }
	void writeX(){ cout<<"Hasil Pengurutan : "<<endl<<"\t"; for(int n=0; n<5; n++){cout<<X[n]<<" ";} cout<<endl; }
};
int main()
{
	vClass <char> A; vClass <int> B; vClass <double> C;  
	cout << "Input Bilangan char (5 Huruf) : " ;
	A.readX(); A.sortX(); A.writeX();
	
	cout << "Input Bilangan Integer (5 angka) : " ;
	B.readX(); B.sortX(); B.writeX();
	
	cout << "Input Bilangan Double (5 angka) : " ;
	C.readX(); C.sortX(); C.writeX();
	
	system ("Pause");
    return 0;    
}
