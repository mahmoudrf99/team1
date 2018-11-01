#include <iostream>
#include "matrix.h"
using namespace std;
istream&    operator >> (istream& in,MATRIX &obj)
{
    cout<<"enter your rows: ";
    in>>obj.row1;
    cout<<"\nenter your cols: ";
    in>>obj.col1;
    obj.data1 = new int [obj.row1 * obj.col1];
    cout<<"the elements of your matrix: ";
    for(int i=0; i<obj.col1*obj.row1; i++)
        in>>obj.data1[i];
    return in;
}
ostream& operator <<(ostream& out,MATRIX &obj)
{
    for(int i=0; i<obj.col1*obj.row1; i++)
        out<<obj.data1[i]<<" ";
    cout<<endl;
}





int main()
{

    int scal;
    MATRIX x;
    MATRIX y;
    MATRIX z;
    while(true)
    {
        cout<<"enter your first matrix  \n";
        cin>>x;
        cout<<"enter your second  matrix  \n";
        cin>>y;
        cout<<"enter your scalar : \n";
        cin>>scal;
        cout<<"your first matrix is \n";
        cout<<x;
        cout<<"your second matrix is \n";
        cout<<y;
        cout<<"your scalar is \n";
        cout<<scal;


        x.test(y);

        if (x.v==1)
        {
            z=x+y ;
            cout<<endl;
            cout<<z;


            z=x-y;
            cout<<z;
        }


        z=x+scal;
        cout<<z;
        z= x-scal;
        cout<<z;
        z=x*scal;
        cout<<z;

        if (x.v==1)
        {
            x+= y;
            cout << x;
            x-= y;
            cout << x;
        }
        x+= scal;
        cout << x;
        x-= scal;
        cout<<x;
        x*= scal;
        cout << x;
        x++;
        x--;


    }

    return 0;

}
