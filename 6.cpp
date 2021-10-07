#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string compress(string input){
  string output="";
  int i=0;
  int numFound=1;
  while(i<input.size()){
    while(input[i]==input[i+1]){
      ++numFound;
      ++i;
    }
    output+=input[i];
    if(numFound>1){
      output+=to_string(numFound);
    }
    numFound=1;
    ++i;
  }
  return output;
}

int main(int argc, char **argv){
  string input;
  cout<<"Enter the string to be compressed"<<endl;
  cin>>input;
  string output=compress(input);
  cout<<"Compressed string is:\n"<<output<<endl;
  return 0;
}

/*
Execution Input: aaabbcdddddddefwwwaaa
Execution Output: a3b2cd7efw3a3
*/
