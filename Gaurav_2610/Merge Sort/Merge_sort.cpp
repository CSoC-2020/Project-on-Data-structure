#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int h)
{
	int n = m-l+1;
	int N = h-m;
	cout << "n1 = " << n << " n2 = " << N << endl;  
	int L[n], R[N];
	int i, j, k;
	
	for(int i = 0; i<n; i++)
		L[i] = a[l+i];
		
	for(int i = 0; i<N; i++)
		R[i] = a[m+i+1];
		
		i=0, j=0, k=l;
	
	while(i<n && j<N)
	{
		if(L[i] < R[j])
			a[k] = L[i] , i++;
		else
			a[k] = R[j], j++;
			
		k++;
	}
	
		while(i<n)
		{
			a[k] = L[i];
			k++;
			i++;
		}

		while(j<N)
		{
			a[k] = R[j];
			k++;
			j++;
		}
	
}

void mergeSort(int a[], int l, int h)
{
	if(l<h)
	{
		int mid = (l+h)/2;
		mergeSort(a, l, mid);
		mergeSort(a, mid+1, h);
		merge(a, l, mid, h);
	}
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++)
		cin >> a[i];
		
	mergeSort(a, 0, n-1);
	for(int i = 0; i<n; i++)
		cout << a[i] << " ";
		
		cout << endl;
	return 0;
}
