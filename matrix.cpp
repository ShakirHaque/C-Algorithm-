#include<bits/stdc++.h>
using namespace std;

int **Matrix(int r, int c)
{

    int **m= new int *[r];
    for(int i=0; i<c; i++)
    {
        m[i]=new int [c];
    }
    for(int i=0; i<r; i++)
    {

        for(int j=0; j<c; j++)
        {
            m[i][j]=rand()%10;
        }
    }
    return m;


}
void print(int **m,int rows, int column)
{
    for(int i =0 ; i<rows; i++)
    {
        for(int j=0; j<column; j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<" "<<endl;
    }

}

void sum( int **s,int r,int c, int **p, int **q)
{

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            s[i][j]= p[i][j]+q[i][j];
        }
    }


}

void substruction( int **b,int r,int c, int **p, int **q)
{

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            b[i][j]= p[i][j]-q[i][j];
        }
    }

}

void multi(int **m1,int **m2,int **R,int r, int c, int c1)
{
    if(r==c)
    {
        int s=0;
        cout<<" matrix multi is possible ";
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                for(int k=0; k<c1; k++)
                {
                    //int s=0;
                    s=s+m1[i][k]*m2[k][j];
                }
                R[i][j]=s;
                s=0;
            }
        }

    }
    else
    {
        cout<<" matrix multi is not possible ";
    }
}


int main()
{
    int **A= Matrix(3,4);
    print(A,3,4);
    cout<<endl;
    int **B= Matrix(3,4);
    print(B,3,4);
    cout<<endl;
    cout<<"Sum : ";
    cout<<endl;
    int **x=Matrix(3,4);
    sum(x,3,4,A,B);
    print(x,3,4);
    cout<<endl;
    cout<<"Substruction : ";
    cout<<endl;
    int **b=Matrix(3,4);
    substruction(b,3,4,A,B);
    print(b,3,4);
    int **C=Matrix(3,3);
    int **D=Matrix(3,3);
    int **R=Matrix(3,3);
    multi(C,D,R,3,3,3);
    cout<<endl;
    print(R,3,3);





}
