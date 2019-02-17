#include <iostream>
using namespace std;
class XYZ 
{
private:
   int num=22;
   char ch='P';
public:
   friend void disp(XYZ obj);
};
//Global Function
void disp(XYZ obj)
{
   cout<<obj.num<<endl; 
   cout<<obj.ch<<endl;
}
int main()
 {
   XYZ obj;
   disp(obj);
   return 0;
}
