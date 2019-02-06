#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void swap(int &a,int &b) {
 int temp = a ;
 a=b;
 b=temp;
}
void sf(int nl,int s) {
  for(int i=0;i<nl;i++) {
    cout << endl;
  }
  for(int j=0;j<s;j++) {
   cout << " ";
  }
}

void print(int *arr,int n) {
  sf(1,0);
  for(int i=0;i< n;i++) {
    cout << arr[i]; sf(0,1);
  }
}

void sort(int *arr,int n) {
  for(int i =0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      if(arr[i] > arr[j]) {
       swap(arr[i],arr[j]);
      }
    }
  }
}

void bsort(int *arr,int n) {
  for(int i=0;i<n-1;i++) {
    for(int j=0;j<(n-i-1);j++) {
     if(arr[j] > arr[j+1]) {
       swap(arr[j],arr[j+1]);
     }
    }
  }
}

void isort(int *arr,int n) {
   int i,j,key;
   for(i = 1;i<n;i++) {
      int key = arr[i];
      int j = i-1;
      while(j >=0 && arr[j] > key) {
       swap(arr[j+1],arr[j]);
       j--;
      }
      arr[j+1] = key;
   }
}

void menu(int *arr,int n) {
  clrscr();
  int ch;
  cout << "Sorts: "; sf(1,0);
  cout << "1.Selection Sort " ; sf(1,0);
  cout << "2.Buble Sort " ; sf(1,0);
  cout << "3.Insertion Sort "; sf(1,0);
  cout << "4.Exit"; sf(1,0);
  cout << "Input the choice: ";
  cin >> ch;
  if(ch==4) exit(1);
  switch(ch) {
    case 1: sort(arr,n);
	    break;
    case 2: bsort(arr,n);
	    break;
    case 3: isort(arr,n);
	    break;
    default: sf(1,0);
	     cout << "Invalid option" ;
	     break;
  }
  print(arr,n);
  getch();
}

void main() {
clrscr();
int n,arr[30];
 cout << "Enter the size of the array (<30) : " ;
 cin >> n;                                   sf(1,0);
 cout << "Enter the array: " ;                sf(1,0);
 for(int i =0;i<n;i++) {
  cin >> arr[i];
 }
 menu(arr,n);
}