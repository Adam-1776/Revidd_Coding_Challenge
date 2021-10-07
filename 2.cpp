#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

void printArray(int arr[],int cnt){
    for(int i=0;i<cnt;++i) cout<<arr[i]<<" ";
    cout<<endl;
    return;
}

bool isContiguous(int arr[], int begin, int last){
  int arr2[last-begin+1];
  int j=0;
  for(int i=begin;i<last;++i){
    arr2[j]=arr[i];
    ++j;
  }
  sort(arr2,arr2+j);
  for(int i=0;i<j-1;++i){
    if((arr2[i+1]-arr2[i])>1)
      return false;
  }
  return true;
}

int start=0;
int final=0;

int longestContiguous(int arr[], int n){
  for(int i=0;i<n;++i){
    for(int j=i+1;j<n;++j){
      if(isContiguous(arr,i,j)){
        if((j-i)>(final-start)){
          start=i;
          final=j;
        }
      }
    }
  }
  return (final-start);
}

int main(int argc, char **argv){
  int length=10;
  int arr[length]={1,56,58,57,90,92,94,93,91,45};
  cout<<"Array to be checked:\n";
  printArray(arr,length);
  cout<<"Length of longest subarray with contiguous elements is:\n"<<longestContiguous(arr,length)<<endl;
  cout<<"The subarray is:\n";
  for(int i=start;i<final;++i){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;

  /*
  Execution Output:
  Length of longest subarray is 5
  The subarray is 90 92 94 93 91
  */
}
