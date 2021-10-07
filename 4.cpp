#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fibonacci[1000]={0};
int generatedUntil=0;
//Using these global variables so that we don't have to re-generate the entire series if the function is called again

void generateFibonacci(int num){ //Using dynamic programming approach
  if(generatedUntil<2){
    fibonacci[generatedUntil++]=1;
    fibonacci[generatedUntil++]=1;
  }
  while(num>generatedUntil){
    fibonacci[generatedUntil]=fibonacci[generatedUntil-1]+fibonacci[generatedUntil-2];
    ++generatedUntil;
  }
  return;
}

int main(int argc, char **argv){
  int num;
  cout<<"Enter the number of elements of the Fibonacci series to generate"<<endl;
  cin>>num;
  generateFibonacci(num);
  for(int i=0;i<num;++i){
    cout<<fibonacci[i]<<" ";
  }
  cout<<endl;
  return 0;
}

/*
Execution Input: 9
Execution Output: 1 1 2 3 5 8 13 21 34
*/
