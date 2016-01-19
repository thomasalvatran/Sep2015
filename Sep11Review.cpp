#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  const char *p = "This is a string";
  //	i = *reinterpret_cast<int *> (p); // cast pointer to integer
  //	cout << i << endl;
  //	char * const s = "test";

  //	s = "tran";  //error: assignment of read-only variable ‘s’
  //	*s = (*(const_cast<char *>("ttt")));
  //	*s = (*const_cast<char *>("ttt"));
  //	*s = *(char *)("tran");
  //	char *j = const_cast<char *> (s);  //cast const
  //  j = "tt";
  //	cout << j << endl;
  const int i = 0;

  int *j = (int *)&i;
  j = const_cast<int *>(&i);
  //        j = &i;
  //        cout << *j << endl;
  char *s1 = "abc";
  //        s1 = "def";
  //        s1 = const_cast<char *>("def");
  //        cout << s1 << endl;
  int *s2 = (int *)s1;
  //        char *s3 = const_cast<char *>(s1);

  //        *s2 = const_cast<int *>(s1);
  char *a = "abcd";
  int *ip = (int *)&*a;
  //             ip = const_cast<int *>(&*a);
  char *aa = (char *)ip;
  cout << hex << *ip << endl; // 64636261
  cout << hex << (char *)ip << endl; // abcd
  cout << hex << aa << endl; // abcd
  cout << hex << (char)*ip << endl; // a
  cout << hex << ip << endl; // 0x400d31
  printf("%x\n", *ip); // 64636261
  printf("%x\n", ip[0]); // 64636261
  printf("%x\n", ip[1]); // a782500

  unsigned int x = 0x61626364;
  unsigned int *p1 = &x;
  printf("1st: 0x%x\n", *&x);
  printf("2st: 0x%x\n", *(char *)&x); // pointer of (char *)&x
  printf("0x%x\n",(char)*p1);

  //        int aa = 5;
  //        int *ipp = &aa;
  //        cout << *ipp << endl;
  return 0;
}
