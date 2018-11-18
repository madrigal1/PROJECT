#include<iostream.h>
#include<conio.h>
#include<process.h>

class stack {
  int top;
  int arr[30];
  public:
  stack() {
   top = -1;
  }
  void push(int x);
  void pop();
  void display();
};

void stack::push(int x) {
    top++;
    if(top >= 29) {
      cout << "\n Stack Overflow";
    } else {
      arr[top] = x;
    }
}

void stack::pop() {
    if(top == -1) {
     cout << "Stack underflow";
    } else {
    cout << "\n Top element is: " << arr[top] ;
    }
    top--;
}
void stack::display() {
 cout << "Stack is: \n" ;
 for(int i =0;i<=top;i++) {
  cout << arr[i] << " ";
 }
}

void menu(stack &st) {
  clrscr();
  cout << "Stack operations: \n" ;
  cout << "1.Push \n" ;
  cout << "2.Pop \n" ;
  cout << "3.Display \n";
  cout << "4. Exit \n" ;
  int ch;
  cout << "Enter choice: ";
  cin >> ch;
  if(ch ==4) abort();
  switch(ch) {
    case 1: int v;
	    cout << "\n Input a value: ";
	    cin >> v;
	    st.push(v);
	    break;
    case 2: st.pop();
	    break;
    case 3: st.display();
	    break;
    default: cout << "\n Invalid option.";
	     menu(st);
	     break;
  };
}

void main() {
 stack one;
 char ch;
 do {
   menu(one);
   cout << "\n Do you want to continue: ";
   cin>> ch;
   getch();
 }while(ch != 'n');
}