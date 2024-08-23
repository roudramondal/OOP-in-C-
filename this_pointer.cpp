#include <iostream>
using namespace std;
class point 
{
  int x, y;
  public :
  point (int x, int y )
  {
    this ->x = x;
    this->y = y;

  }
  point & setX (int x)
  {
    this->x = x;
    return *this;
  }
  point & setY(int y)
  {
    this->x = x;
    return *this;
  }
};
int main ()
{
  point p1(10, 20);
  p1.setX(5).setY(5);
  return 0;
}