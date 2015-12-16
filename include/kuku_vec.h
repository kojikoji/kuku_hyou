#include<vector>
#include<string>
using namespace std;
class Kuku_vec : public vector<vector<int > >{
public:
  vector<int> nnodan(int n);
  vector<int> nnodanp(int n);
  Kuku_vec(bool pflag=false);
  string str();
};
