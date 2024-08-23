#include <iostream>
using namespace std;
class Base 
{
  public :
   virtual void print ()//void print () 
  {
    cout << "In Base \n";
  }
};
class Derived : public Base 
{
  public :
  void print()
  {
    cout << "In Derived  \n";

  }
};
int main ()
{
  Base b;
  b.print();
  Derived d;
  d.print();
  Base *bp = &d;
  bp->print();
  return 0;
}