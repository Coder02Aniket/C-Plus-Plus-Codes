#include<iostream>

using namespace std;
class triangle
{
   public:
   int side1,side2,side3;

      
   };



      
int main()
{
  triangle tri1;
  tri1.side1 = 1.0;
  tri1.side2 = 2.0 ;
  tri1.side3 = 3.0;
  int perimeter = tri1.side1 + tri1.side2 +tri1.side3;
  cout<<perimeter<<endl;

   return 0;