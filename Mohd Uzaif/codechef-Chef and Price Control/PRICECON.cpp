#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,k;
        int sum=0;
        cin>>n>>k;
        int A[n];
        for(int j=0;j<n;j++)
        {
            cin>>A[j];
            if(A[j]>k){sum+=A[j]-k;}
        }
        cout<<sum<<endl;
    }
    return 0;
}
