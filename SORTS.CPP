#include<iostream.h>
#include<conio.h>
void prt_arr(int arr[30],int n);
void insertionSort(int arr[30],int n) {
   int temp,j;
   for(int i=1;i<n;i++) {
     temp = arr[i];
     j = i-1;
     while((arr[j] > temp) && (j>=0)) {
       arr[j+1] =arr[j];
       j--;
     }
     arr[j+1] = temp;
   }
}
void swap(int& a,int& b) {
    int temp = a;
    a=b;
    b=temp;
}
void bubbleSort(int arr[30],int n) {
  for(int i=0;i<(n-1);i++) {
    for(int j=0;j<(n-i-1);j++) {
     if(arr[j] > arr[j+1]) {
       swap(arr[j],arr[j+1]);
     }
    }
  }
}
void selectionSort(int arr[30],int n) {
  int temp;
   for(int i=0;i<n;i++) {
      for(int j=i+1;j<n;j++) {
	  if(arr[i] > arr[j]) {
	   swap(arr[i],arr[j]);
	  }
      }
   }
}


void prt_arr(int arr[30],int n) {
 cout << endl;
 for(int i =0;i<n;i++) {
  cout << arr[i] <<" ";
 }
}

void main() {
 clrscr();
 int n,arr[30];
 cout << "Enter size of array";
 cin >> n;
 cout << "Enter the elements of the array"<< endl;
 for(int i =0;i<n;i++) {
  cin >> arr[i];
 }
 cout << endl;
 int ch;
 cout << "Collection of Sorts." << endl;
 cout << "1.Selection Sort" << endl;
 cout << "2.Bubble Sort" << endl;
 cout << "3.Insertion Sort" << endl;
 cout << "Input choice:";
 cin >> ch;
 switch(ch) {
  case 1 : selectionSort(arr,n);
	   break;
  case 2 : bubbleSort(arr,n);
	   break;
  case 3: insertionSort(arr,n);
	   break;
  default: cout << "Invalid choice";
	   break;
 }
 prt_arr(arr,n);
 getch();
}