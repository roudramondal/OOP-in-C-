// #include <iostream>
// using namespace std;
// class Employee;
// class prtinter 
// {
//   public:
//     void printEmp(const Employee & e);
// };
// class Employee 
// {
//   private :
//     int id;
//     string name;

//     public :
//       friend class printer;
//       Employee (int i, string n):id (i),name(n)
//       {

//       }
// };
// void printer :: printEmp(const Employee & e)
// {
//   cout << e.id << " "<< e.name << "\n";
// }
// int main ()
// {
//   printer p;
//   Employee e(101, "ABC");
//   p.printEmp(e);
//   return 0;
// }
#include<iostream>
using namespace std;

class Employee;

class Printer{
public:
    void printEmp(const Employee & e);  
};

class Employee{
private:
    int id;
    string name;
public:
    friend class Printer;
    Employee(int i, string n) : id(i), name(n){}
};

void Printer::printEmp(const Employee & e){
    cout << e.id << ' ' << e.name << '\n';
}

int main()
{
    Printer p;
    Employee e(101, "ABC");
    p.printEmp(e);
    return 0;
}