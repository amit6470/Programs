#include<iostream>
using namespace std;
int main()
{
    int a[2][2], b[2][2],c[2][2], i,j, P,Q,R,S,T,U,V;

    cout<<"enter the elements in the 2*2 matrix A: ";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cin>>a[i][j];

    cout<<"enter the elements in the 2*2 matrix B: ";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cin>>b[i][j];

    P = (a[0][0]+ a[1][1]) * (b[0][0]+b[1][1]);
    Q = (a[1][0]+ a[1][1]) * b[0][0];
    R = a[0][0] * (b[0][1]- b[1][1]);
    S = a[1][1]* (b[1][0]- b[0][0]);
    T = (a[0][0]+ a[0][1])*b[1][1];
    U = (a[1][0]-a[0][0])* (b[0][0]+ b[0][1]);
    V = (a[0][1]- a[1][1])* (b[1][0]+b[1][1]);

    c[0][0]= P+S-T+V;
    c[0][1]= R+T;
    c[1][0]= Q+S;
    c[1][1]= P+R-Q+U;

    cout<<"The Starsen Matrix is :\n";
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            cout<<c[i][j]<<"\t";
        cout<<"\n";
    return (0);
}
