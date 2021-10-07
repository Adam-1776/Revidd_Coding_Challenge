#include <iostream>
using namespace std;

void printArray(int arr[],int cnt){
    for(int i=0;i<cnt;++i) cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

void swap(int &one, int &two){
  int temp=one;
  one=two;
  two=temp;
  return;
}

int partition(int arr[], int start, int end){
  int pivot=arr[end];
  int j=start-1;
  for(int i=start;i<=end-1;++i){
    if(arr[i]<pivot)
      swap(arr[++j],arr[i]);
  }
  swap(arr[++j],arr[end]);
  return j;
}

void quickSort(int arr[], int start, int end){
  if(start>end) return;
  int p=partition(arr,start,end);
  quickSort(arr,start,p-1);
  quickSort(arr,p+1,end);
  return;
}


int main(int argc, char **argv){
  int length=9;
  int arr[length]={4,3,5,2,0,9,1,5,1};
  cout<<"Array Before Sorting:\n";
  printArray(arr,length);
  quickSort(arr,0,length-1);
  cout<<"Array After Sorting:\n";
  printArray(arr,length);

  return 0;

}
