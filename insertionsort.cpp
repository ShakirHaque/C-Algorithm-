#include<bits/stdc++.h>
using namespace std;



void insertionsort(int A[], int n)
{
    for(int i=1;i<n;i++)
    {
        int temp= A[i];
        int j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;
    }

    for(int k=0;k<n;k++)
    {
        cout<<A[k] <<" ";
    }


}

int main()
{
    int n=5;
     int *A = new int[n];
    srand(time(0));
 for(int i=0;i<n;i++)
 {
      A[i]=rand()%10000;
 }

    insertionsort(A,5);


}
