#include<cmdline.h>
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char *argv[]){
  //test for travis
  cmdline::parser p;
  p.add("plus", 'p', "addtion, not multiply");
  p.add("help", 'h', "print help");
  if (!p.parse(argc, argv)||p.exist("help")){
    cout<<p.error_full()<<p.usage();
    return(0);
  }
  vector<int> table;
  for(int i = 1;i < 10;i++){
    for(int j = 1;j < 10;j++){
      cout.width(3);
      if(p.exist("plus")){
	cout<<i+j<<" ";
      }else{
	cout<<i*j<<" ";
      }
    }
    cout<<endl;
  }
  return(0);
}
