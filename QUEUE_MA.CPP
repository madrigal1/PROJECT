#include<iostream.h>
#include<conio.h>
const size = 30;
class Queue {
  int arr[size];
  int front;
  int rear;
public:
  Queue() {
   front =0;
   rear =0;
  }
  int insert(int item);
  int del();
  void display();
};

int Queue:: insert(int item) {
   if(rear == size-1) return -1;
   arr[rear++] = item;
   return 0;
};

int Queue:: del() {
   if(!(rear > front)) return -1;
   front++;
   return 0;
}

void Queue:: display() {
 if(!(rear > front)) cout << "The array is empty";
 cout << endl;
 cout << "The Queue is: " << endl;
 for(int i =front;i<rear;i++) {
    cout << arr[i];
    cout << endl;
 }
}

void main() {
   cout << "Queue operations
}

