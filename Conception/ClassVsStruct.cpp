#include <iostream>
#include <string>
#include <vector>

using namespace std;

//first difference between struct and class: default memeber access
struct Point {
  int x;
  int y;
  private:
    int z;
};

class Circle {
  int r;
  public:
    vector<int> center;
};


//second difference between struct and class: default inheritance

class Parent {
  public:
    int a;
    int b;
    Parent(int a, int b) : a(a), b(b){}
};

class Child : Parent {
  public:
    Child(int a, int b): Parent(a, b) {}
    void printData(){
      printf("%d %d\n", a, b);
    }
};

class GrandChild : Child {
  public:
    GrandChild(int a, int b): Child(a, b){}
    void printData(){
      //can't access the data from Child
      //printf("%d %d\n", a, b);
    }
};

struct Parent2 {
  
  int a;
  int b;
  Parent2(int a, int b) : a(a), b(b){}
};

struct Child2 : Parent2 {
  Child2(int a, int b): Parent2(a, b) {}
  void printData(){
    printf("%d %d\n", a, b);
  }
};

struct GrandChild2 : Child2 {
  GrandChild2(int a, int b): Child2(a, b){}
  void printData(){
    //can't access the data from Child
    printf("%d %d\n", a, b);
  }
};



int main(){
  /*first compare*/
  // for struct the default access for member is public
  Point p;
  p.x = 1;
  p.y = 2;
  cout << p.x << endl;
  // for class the default access for member is private
  Circle circle;
  circle.center = {10, 20};
  cout << circle.center[0] << ", " << circle.center[1] << endl;
  /*second compare*/
  cout << "---------------------------------" << endl;
  Child c(10, 20);
  c.printData();
  //in class child can access his parent's member
  //grandchild can't access child's member

  //in struct the default inheritance is public
  GrandChild2 gc2(2, 3);
  gc2.printData();
  return 0;
}
