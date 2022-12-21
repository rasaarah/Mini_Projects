#include <iostream>
using namespace std ;
 
int main ()
{
    int bil ;
    cout<<"masukan bilangan X = " ;
    cin>> bil ;

    if ( bil%2 == 1 )
    cout<< "bilangan " << bil << " adalah ganjil"<<endl;
    else
    cout<<"bilangan " << bil << " adalah genap "<<endl;
    
    system("pause");
    main() ;
    return 0 ;
}
