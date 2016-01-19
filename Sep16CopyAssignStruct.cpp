#include <iostream>
#include <stdio.h>
#include <memory.h>

using namespace std;
#define AF_INET 2;

typedef struct sockaddr {
  int family;
  char address;
} sockaddr;
struct sockaddr_tipc {
  int family;
  char address;
};
struct sockaddr destination = {
    destination.family = 2, destination.address = 0x41,
};

struct msghdr {
    void	*	msg_name;	/* Socket name			*/
    int		msg_namelen;	/* Length of name		*/
};

class Address {
public:
  int family;
  char address;
};

int main() {

  //    sockaddr_tipc *t; // sockaddr_tipc *t = &test;
    struct msghdr m = { NULL};

    sockaddr_tipc *t = new sockaddr_tipc;  //has to be beginning

  struct sockaddr *dest;
  dest->family = 1;
  dest->address = 0x35;
  sockaddr_tipc *dst = (struct sockaddr_tipc *)dest;
  printf("%d %c\n", dst->family, dst->address);

  struct sockaddr test;
  test.family = 2;
  test.address = 0x36;
  //    struct sockaddr_tipc test1 = (struct sockaddr_tipc)test;
  struct sockaddr_tipc test1;
  memcpy(&test1, &test, sizeof(sockaddr));
  printf("%d %c\n", test1.family, test1.address);

  memcpy(&test1, &destination, sizeof(sockaddr));
  printf("%d %c\n", test1.family, test1.address);

  t->family = 11;
  t->address = 'c';
  printf("%d %c\n", t->family, t->address);
  delete t;

  sockaddr s;
  s.family = 9;
  s.address = 'd';
  printf("%d %c\n", s.family, s.address);

  Address a; //= new Address;
  a.family = 12;
  a.address = 'r';
  printf("%d %c\n", a.family, a.address);


  m.msg_name = dest;
  m.msg_namelen = dest->address;
  printf("%p\n", m.msg_name);
}
