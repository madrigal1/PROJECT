#include<iostream.h>
#include<conio.h>
const st_size = 50;

class stack {
  int st[30];
  int top;
  public:
  stack() {
   top = -1;
  }
  int push(int item);
  void display();
  int pop();
};

int stack::pop() {
 if(top == -1) {
  return -1;
 }else {
  top--;
  return 0;
 }
}

int stack::push(int item) {
  top++;
  if(top == st_size-1) {
    return -1;
  } else {
    st[top] = item;
    return 0;
  }
}

void stack::display() {
   cout << "Top element is -> " << st[top] << endl;
   for(int i =top-1;i>=0;i--) {
    cout << st[i] <<endl; ;
   }
}
void main() {
 clrscr();
  stack st1;
  st1.push(3);
  st1.push(4);
  st1.push(5);
  st1.display();
  st1.pop();
  st1.display();
  getch();

}