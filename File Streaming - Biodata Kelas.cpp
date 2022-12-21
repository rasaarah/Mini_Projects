#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Biodata
{
	string NIM;
	string Nama;
	string Kota;
	string Usia;
	
};

int main()
{
	Biodata Mahasiswa;
	cout<<"<<----Input Data Mahasiswa---->>>"<<endl;
	
	ofstream output; 
	output.open("C:/Biodata.txt");
   	if (!output)
	   {cout<<"File can't be created !!! "<<endl; return 1;}
   	
	for (int n=0; n<5; n++)
	{
	cout<<endl<<"Input Data Mahasiswa "<<n<<endl;
	output<<"Data ke Mahasiswa ke-"<<n<<endl;
		cout<<"NIM  : "; getline(cin, Mahasiswa.NIM); 
		output<<"NIM  : "<<Mahasiswa.NIM<<endl;
		cout<<"Nama : "; getline(cin, Mahasiswa.Nama);
		output<<"Nama : "<<Mahasiswa.Nama<<endl;
		cout<<"Kota : "; getline(cin, Mahasiswa.Kota);
		output<<"Kota : "<<Mahasiswa.Kota<<endl;
		cout<<"Usia : "; getline(cin, Mahasiswa.Usia);
		output<<"Usia : "<<Mahasiswa.Usia<<endl<<endl;
		
	}
	
	/*
	for (int n=0; n<5; n++)
	{
			
	}
	*/
	output.close();
	return 0;
}
