#include<iostream.h>
#include<conio.h>
#include<process.h>

int lsearch(int arr[30],int n,int x) {
  for(int i =0;i<n;i++) {
   if(arr[i] == x) {
    return i;
   }
  }
  return -1;
}

int bsearch(int arr[30],int n,int x) {
 int beg =0;
 int end = n-1;
 int mid = (beg+end)/2;
 while(beg <= end) {
   if(arr[mid]  > x) {
      end = mid -1;
   } else if(arr[mid] == x) {
      return mid;
   } else {
      beg = beg +1;
   }
   mid = (beg+end)/2;
 }
 return -1;
}

void menu() {
 clrscr();
 cout << "  Array Search:";
 cout << "\n 1.Linear search";
 cout << "\n 2.Binary search";
 cout << "\n 3.Exit";
 cout << "\n Input the required option: " ;
 int ch;
 cin >> ch;
 if(ch == 3) abort();
 int arr[30];
 int n ;
 cin.ignore();
 cout << "\n Input the size of the array: ";
 cin >>  n;
 cout << "\n Input the array: \n"  ;
 for(int i =0;i<n;i++) {
   cin >> arr[i];
 }
 cin.ignore();
 int x;
 cout << "\n Input the search parameter: ";
 cin >> x;

 switch(ch) {
   case 1: int lr = lsearch(arr,n,x);
	   if(lr == -1)
	       cout << "\n Search parameter not found at:";
	   else
	       cout << "\n Search Parameter found at: " << lr+1 << " pos" ;
	   break;
   case 2: int br = bsearch(arr,n,x);
	   if(br == -1)
		cout << "\n Search parameter not found at: ";
	   else
		cout << "\n Search Parameter found at: " << br+1 << "pos";
	   break;
   default: cout << "\n Invalid option";
	    menu();
	    break;
   }
   getch();
 }

 void main() {
  char cnt;
  do {
   menu();
   cout << "\n Do you want to continue ? [y\n]";
   cin >> cnt;
  }while(cnt != 'n');
 }
