#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string convertInt(int num){
  string roman="";
  string s="";
  while(num>0){
    if(num>=100){
      num-=100;
      roman+="C";
    }
    else if(num>=50){
      num-=50;
      roman+="L";
    }
    else if(num>=10){
      num-=10;
      roman+="X";
    }
    else if(num>=5){
      num-=5;
      roman+="V";
    }
    else{
      --num;
      roman+="I";
   }
   if(roman.size()>3){
     s = roman.substr(roman.size()-4, roman.size());
     if(s=="IIII"){
       roman.resize (roman.size () - 4);
       roman+="IV";
     }
     else if(s=="XXXX"){
       roman.resize (roman.size () - 4);
       roman+="XL";
     }
   }
  }
  return roman;
}


int main(int argc, char **argv){
  int num;
  cout<<"Enter the integer to be converted"<<endl;
  cin>>num;
  string roman = convertInt(num);
  cout<<"Converted to roman numerals is:\n"<<roman<<endl;
  return 0;

  /*
  Execution Input: 24
  Execution Output: XXIV
  */

}
