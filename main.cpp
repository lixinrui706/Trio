#include <iostream>
using namespace std;
//xinrui Li
//swap the two value. Pass by reference

void mSwap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}
//rearrange the value from greatest to the least
void rearrange(int &red,int &green, int &blue)
{
  if(red < green)// if the first smaller than second
     mSwap(red,green);
  if(red < blue)//if the first smaller than third
     mSwap(red,blue);
  if(green < blue)//if the second smaller than third
     mSwap(green,blue);
}     
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


   rearrange(red,green,blue);


  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
