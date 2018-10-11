#include<cmdline.h>
#include<iostream>
#include<vector>
#include<kuku_vec.h>
using namespace std;  
int main(int argc, char *argv[]){
  // command line parse
  cmdline::parser p;
  p.add("plus", 'p', "addtion, not multiply");
  p.add("help", 'h', "print help");
  if (!p.parse(argc, argv)||p.exist("help")){
    cout<<p.error_full()<<p.usage();
    return(0);
  }
  // calculate
  bool pflag = p.exist("plus");
  Kuku_vec kvec(pflag);
  cout<<kvec.str();
  return(0);
}
