#include <stdio.h>
struct Person {
  char name[40];
  int age;
};

 struct Tuple {
  struct Person friend1;
  struct Person* friend2Pointer;
};

struct Tuple ageOne(struct Person friend1, struct Person* friend2Pointer) {
  friend1.age += 1;
  friend2Pointer -> age += 1;
  struct Tuple r = {friend1, friend2Pointer};
  return r;
}

int main(void) {

  struct Person myFriend = {"Martin", 57};
  struct Person myOtherFriend = {"Michelle", 27};
  struct Tuple myfriends = ageOne(myFriend, &myOtherFriend);

myFriend = myfriends.friend1;
myOtherFriend = *myfriends.friend2Pointer;

  printf("Hello my name is %s and I am %d years old.\n", myFriend.name, myFriend.age);
  printf("Hello my name is %s and I am %d years old.\n", myOtherFriend.name, myOtherFriend.age);
}