#include <iostream>
using namespace std;
class Test
{
  public :
  Test ()
  {
    cout << "Constructor " << "\n";

  }
  ~Test()
  {
    cout << "Distructor " << "\n";
  }
};
int  main ()
{
  {
    Test t1;
  }
  Test t2;
  return 0;
}
