#include<iostream.h>
#include<conio.h>
#include<process.h>

class queue {
 int arr[30], front,rear;
 public:
 queue() {
  front = -1;
  rear = -1;
 }
 void push(int x);
 void pop();
 void display();
};

void queue::push(int x) {
 if((rear-front+1) >= 30) {
  cout << "\n Stack overflow";
 }else {
   if(front == -1) {
    front =0;
   }
   arr[++rear] = x;
 }
}

void queue::pop() {
  if(front== -1) {
   cout << "\n Stack underflow";
  } else {
   cout << "\n The first element in queue is: " << arr[front];
   front++;
  }
}

void queue::display() {
cout << endl;
  for(int i=front;i<=rear;i++){
    cout << arr[i] << " ";
  }
}

void menu(queue &qu) {
 clrscr();
  cout << "Queue operations: \n";
  cout << "1.Push \n" ;
  cout << "2.Pop \n ";
  cout << "3.Display \n";
  cout << "4.Exit \n";
  int ch;
  cin.ignore();
  cout << "enter your choice: ";
  cin  >> ch;
  if(ch == 4) abort();
  switch(ch) {
   case 1: int x;
	   cout << "\n Input your value:" ;
	   cin >> x;
	   qu.push(x);
	   break;
   case 2:  qu.pop();
	    break;
   case 3: qu.display();
	   break;
   default: cout << "invalid option";
	    break;
  }
  };
  void main() {
   char ch;
   queue one;
   do {
     menu(one);
     cin.ignore();
     cout << "Do you want to continue? : ";
     cin >>ch;
     getch();
   }while(ch != 'n');
  }
