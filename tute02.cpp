/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double salary,netsalary;
  int etype, otHrs,otRate;

  cout<<"enter employee type:";
  cin>> etype;
  cout<<" enter salary";
  cin>> salary;
  cout<< "enter ot hours:";
  cin>> otHrs;

  switch (etype){
    case 1:
       otRate=1000;
    break;
      case 2:
      otRate=1500;
       break;
    default:
    otRate=1700;
    break;
    netsalary=salary+ otHrs*otRate;
    cout<< "net salary is "<< netsalary<<endl;

    return 0;
    
        
  }
  
  
  
  
}