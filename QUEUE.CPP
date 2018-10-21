#include<iostream.h>
#include<conio.h>
const size =50;
class queue {
 int front,rear;
 int q[size];
 public:
 queue() {
  front =-1;
  rear = -1;
 }
 int push(int item) {
  if(rear == size-1) {
    return -1;
  } else if(rear == -1) {
    front =0;
    rear =0;
    q[rear] = item;
    return 0;
  }  else {
    rear++;
    q[rear] = item;
    return 0;
  }
 }
 void display() {
   for(int m=front;m<(rear+1);m++) {
    cout << q[m] << " ";
   }
 }
};




void main() {
 clrscr();
 queue q1;
 q1.push(13);
 q1.push(15);
 q1.display();
 getch();
}