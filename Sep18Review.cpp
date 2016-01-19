//home/tovantran/Ctest/referencepointer4-const.cpp --> 2015-03-22 by ./.tv  owner: tovantran

#include <iostream>
#include <stdio.h>
using namespace std;

void f(int&) {}
void g(const int&) {}
//C
void increment(int **i) { cout << "**i " << (**i)++ << endl; } //in C
//C++
//void increment1(int &*i) { i++;} //error: cannot declare pointer to 'int&'
void increment1(int *&i) { (*i)++;} //content what it points is incremented
void increment2(int &i) {  i++; cout << i << endl;} //pointer is incremented
//void increment3(int &*i) { i++; }
int main() {

  int j = 0;        //H/W address
    int *jp = (int *)0x4007b0; //*p point to something

    cout << hex << "j = " << jp << endl; //SEGMENT FAULT *jp = address of 0
  increment2(*jp); //jp is address, &jp address of address pointer= **
    cout << "j = " << jp << endl;
} ///:~
