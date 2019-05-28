#include <iostream>
#include<math.h>
#include<cmath>

using namespace std;
struct diem{
    double x;
    double y;
    void settings(double xn,double yn)
{
    x=xn;
    y=yn;
}

};



double len(diem diem1,diem diem2)
{
    double l=sqrt(double(diem2.x-diem1.x)*(diem2.x-diem1.x)+(diem2.y-diem1.y)*(diem2.y-diem1.y));
    return l;


}

int main()
{

    diem d,d1;
   d.settings(1,2);
   d1.settings(3,4);

    cout<<len(d,d1);





    return 0;
}
