#include <iostream>
using namespace std;
class Test 
{
  int x;
  public :
  Test (int i): x(i)
  {
    cout << "case" << x << "\n";

  }
  ~Test ()
  {
    cout << "disCase " << x << "\n";
  }
};
int main ()
{
  Test t1(10);
  Test t2(20);
  return 0; 
}