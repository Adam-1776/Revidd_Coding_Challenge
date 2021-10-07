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

int findoddElement(int arr[],int n){
  int num=0;
  for(int i=0;i<n;++i)
      num=num^arr[i];
  return num;
}

int main(int argc, char **argv){
  int length=9;
  int arr[length]={1,2,3,3,2,1,4,4,1};
  cout<<"Array to be checked:\n";
  printArray(arr,length);
  cout<<"The integer present an odd number of times is:\n"<<findoddElement(arr,length)<<endl;
  return 0;

  /*
  Execution Output:
  Odd element is 1
  */
}
