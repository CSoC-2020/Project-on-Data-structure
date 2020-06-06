#include<iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
  int pivot=arr[high];
  cout<<"\n\npivot element is:-> "<<pivot;
  int i=low-1;
  cout<<"\ni is:-> "<<i;
  for(int j=low;j<high;j++)
  {
    if(arr[j]<=pivot)
    {
      i++;
      cout<<"\nswapping arr[i] and arr[j]:-> "<<arr[i]<<" -> "<<arr[j];
      int t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;
    }
  }
cout<<"\nswapping arr[i+1] and arr[high] "<<arr[i+1]<<" -> "<<arr[high];
  int p=arr[i+1];
  arr[i+1]=arr[high];
  arr[high]=p;
  return i+1;
}
void quicksort(int arr[],int low,int high)
{
  if(low<high)
  {
    int pi=partition(arr,low,high);
    quicksort(arr,low,pi-1);
    quicksort(arr,pi+1,high);
  }
}

int main()
{
  int arr[]={8, 7, 6, 1, 0, 9, 2};
  quicksort(arr,0,6);
  for(int i=0;i<7;i++)
  {
    cout<<arr[i]<<"\n";
  }
  return  0;
}