#include<iostream.h>
#include<conio.h>
#include<process.h>

void sf(int nl,int s) {
 for(int i=0;i<nl;i++) {
  cout << endl;
 }
 for(int j =0;j<s;j++) {
  cout << " ";
 }
}
void swap(int &a,int &b) {
 int temp = a;
  a=b;
  b=temp;
}

void sort (int *arr,int n) {
 for(int i=0;i<n;i++) {
  for(int j=i+1;j<n;j++) {
    if(arr[i] > arr[j]) {
      swap(arr[i],arr[j]);
    }
  } //end of second for
 }// end of first for
}

void lsearch(int *arr,int n,int sp) {

 int flag =0;
 int i;
 for(i =0;i<n;i++) {
  if(arr[i] == sp) {
   flag=1;
   break;
  }
 }// end of outer for
 if(flag == 1) {
   sf(1,0);
   cout << "The Element has been found at " << i+1;
 } else {
   sf(1,0);
   cout << "The Element has not been found";
 }

}


void bsearch(int *arr,int n,int sp) {
  int mid = n/2;
  int beg =0;
  int end =n;
  int flag=0;
  while(beg <= end) {
   if(arr[mid] == sp) {
     flag =1;
     break;
   }else if(arr[mid] >sp) {
    end = mid-1;
   } else {
    beg = mid+1;
   }
   mid = (beg+end)/2;
  }  // end of  while
  if(flag) {
  sf(1,0);

   cout << "Element found at" << mid+1;
  } else {
  sf(1,0);
   cout << "Element not found" ;
  }
}

void menu(int *arr,int n) {
clrscr();
int ch,sp;
 cout << "Searchs:" ;    sf(1,0);
 cout << "1.Linear Search ";    sf(1,0);
 cout << "2.Binary Search ";    sf(1,0);
 cout << "3.Exit";             sf(1,0);
 cout << "Input the desired option:" ;
 cin >> ch; sf(1,0);
 cout << "Input the search parameter: " ;
cin >> sp;  sf(1,0);
if(ch == 3) abort();
 switch(ch) {
   case 1:  lsearch(arr,n,sp);
	    break;
   case 2:  sort(arr,n);
	    bsearch(arr,n,sp);
	    break;
   default: cout << "Invalid option." ;
	    break;
 };
 getch();
}
void main() {
   clrscr();
   int arr[30];
   int size;
   cout << "Input the size of the array(<=30): " ;
   cin >> size; sf(1,0);
   cout << "Input the array: "; sf(1,0);
   for(int i =0;i<size;i++) {
     cin >> arr[i];
   }
   menu(arr,size);
}