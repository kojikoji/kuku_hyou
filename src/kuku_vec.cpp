#include<vector>
#include<string>
#include<kuku_vec.h>
#include<sstream>
#include<iostream>
using namespace std;
vector<int> Kuku_vec::nnodan(int n){
  vector<int> nvec;
  for(int i = 0;i < 9;i++){
    nvec.push_back((i+1)*n);
  }
  return nvec;
}
vector<int> Kuku_vec::nnodanp(int n){
  vector<int> nvec;
  for(int i = 0;i < 9;i++){
    nvec.push_back((i+1)+n);
  }
  return nvec;
}
Kuku_vec::Kuku_vec(bool pflag){
  for(int i = 0;i < 9;i++){
    if(pflag){
      this->push_back(nnodanp(i+1));
    }else{
      this->push_back(nnodan(i+1));
    }
  }  
}
string Kuku_vec::str(){
  stringstream ss;
  for(vector<vector<int > >::iterator rowit = this->begin();rowit != this->end();++rowit){
    for(vector<int >::iterator colit = rowit->begin();colit != rowit->end();++colit){
      ss.setf(ios::right,ios::adjustfield);
      ss.width(3);
      ss<<*(colit);
    }
    ss <<endl;
  }
  return(ss.str());
}
