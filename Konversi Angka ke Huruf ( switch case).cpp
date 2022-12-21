#include <iostream>
using namespace std ;

int main ()
{
    int nilai ;
    cout<<"masukan nilai : ";
    cin>> nilai ;
    
    switch( nilai>=85 && nilai <=100 ) 
    {case true: cout << "Nilai = " << nilai << " memperoleh A" <<endl;
    break ; }
    switch (nilai>=75 && nilai <85 )
    {case true: cout << "Nilai = "<< nilai << " memperoleh B+" <<endl ;
    break ; }
    switch ( nilai >=65 && nilai <75 )
    {case true : cout << "Nilai = " << nilai << " memperoleh B "<<endl ;
    break ; }
    switch (nilai >=55 && nilai <65 )
    {case true: cout << "Nilai = " << nilai << " memperoleh C+ " <<endl ;
    break ; }
    switch ( nilai >=45 && nilai <55 )
    {case true: cout << "Nilai = " << nilai << " memperoleh C " <<endl ;
    break ;}
    switch ( nilai <45 )
    {case true: cout << "Nilai = " << nilai << " memperoleh D " <<endl ;
    break ;}
    
    

    system ("pause");
    main () ;
    return 0 ;
    
    
      }
