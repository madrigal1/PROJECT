#include<iostream.h>
#include<conio.h>
#include<process.h>


void insert(int arr[30],int& n,int pos,int x) {
  for(int i =n-1;i>=pos-1;i--) {
   arr[i+1] =arr[i];
  }
  arr[pos-1] = x;
  n++;
}

void del(int arr[30],int& n,int pos) {
    for(int i =pos-1;i<n-1;i++) {
     arr[i] = arr[i+1];
    }
    n--;
}

void menu(int arr[30],int n) {
 clrscr();
  cout << "Array manuplations: " ;
  cout << "\n 1.Insert element into array";
  cout << "\n 2.Delete element into an array";
  cout << "\n 3.Exit";
  cout << "\n Input the desired option";
  int ch ;
  cin >> ch;
  if(ch == 3) abort();
  switch(ch) {
    case 1: int x,pos;
	    cout << "Input the value to be inserted" << endl;
	    cin >>x;
	    cout << "Input the position the value is inserted at:" << endl;
	    cin >> pos;
	    insert(arr,n,x,pos);
	    break;
    case 2: int p;
	    cout << "Input the postion to be deleted" << endl;
	    cin >> p;
	    del(arr,n,p);
	    break;
    default: cout << "Invalid option" << endl;
	     menu(arr,n);
	     break;
  }
  cout << "The changed array: " << endl;
  for(int m=0;m<n;m++) {
    cout << arr[m] << " ";
  }
  getch();
}

void main() {
 clrscr();
 char cnt;
 int n,arr[30] ;
 do {
    cout << "Enter the size of the array";
    cin >> n ;
    cout << "Enter the elements of an array";
    for(int v=0;v<n;v++) {
     cin >> arr[v];
    }
    menu(arr,n);
    cout << endl << "Do you want to continue[y/n]: " << endl;
    cin >> cnt;
 } while(cnt != 'n');
}