#include <cstdint>
#include <cassert>
#include <iostream>
using namespace std;

int main()
{
int value = 0x12345678; // assume a 32-bits int
printf("%x\n", *(unsigned char *)&value);

cout  << hex << *(unsigned char *)&value << endl;

cout  << hex << (int)*(unsigned char *)&value << endl;

cout << hex << 0x78 << endl;
cout << "Value’s first byte has value: " << hex << (*reinterpret_cast<unsigned char *>(&value)) << endl;
cout << "Value’s first byte has value: " << hex << static_cast<int>(*reinterpret_cast<unsigned char *>(&value)) << endl;
}
