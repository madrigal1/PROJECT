#include<iostream.h>
#include<conio.h>
void swap(int& one,int& two) {
  int temp = one;
  one = two;
  two = temp;
}
void bubbleSort(int arr[30],int n) {
  for(int i =0;i<(n-1);i++) {
     for(int j=0;j<(n-i-1);j++) {
       if(arr[j] > arr[j																   ]) {
	 swap(arr[j],arr[j+1]);
       }
     }
  }
}


void main() {
 int arr[30],n;
 clrscr();
 cout << "Enter the size of the array: ";
 cin >> n;
 cout << "Enter the elements of the array: ";
 cout << endl;
 for(int i =0;i<n;i++) {
  cin >> arr[i];
 }
 bubbleSort(arr,n);

 for(int m=0;m<n;m++) {
  cout << arr[m] << " ";
 }
 getch();
}