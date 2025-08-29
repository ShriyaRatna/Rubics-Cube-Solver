#include <bits/stdc++.h>
#include "3dimplementation.cpp"

using namespace std;

int main()
{

    RubiksCube3d cube3d;
    cube3d.print();

    cube3d.l();
    cube3d.print();

    cube3d.lPrime();
    cube3d.print();

    cube3d.l2();
    cube3d.print();

    cube3d.u();
    cube3d.print();

    cube3d.uPrime();
    cube3d.print();

    cube3d.u2();
    cube3d.print();

    return 0;
}