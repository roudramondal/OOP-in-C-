#include<iostream>
using namespace std;
class complex
{
  private:
    int real;
    int imag;

    public:
    void print ()
    {
      cout << real << " +i " << imag << "\n";
    }
    complex (int r,int i)
    {
      real = r;
      imag = i;
    }
};
int main ()
{
  complex cl(10, 17);
  cl.print();
  return 0;
}