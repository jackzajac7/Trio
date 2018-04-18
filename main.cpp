#include <iostream>
#include <utility>
using namespace std;

void leastToGreatest(int &, int &, int &);


int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  leastToGreatest(red, green, blue);



  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

void leastToGreatest(int &one, int &two, int &three)
{
    if (one > two) {
        std::swap(one, two);
    }
    if (one > three) {
        std::swap(one, three);
    }
    if (two > three) {
        std::swap(two, three);
    }
}

