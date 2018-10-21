#include<iostream.h>
#include<conio.h>

void main() {
 clrscr();
 int arr[30],n;
 cout << "Enter the size of the arrary";
 cin >> n;
 cout << "Enter the elements of the array";
 for(int m =0;m<n;m++) {
  cin >> arr[m];
 }
 //sort
 int temp,j;
 for(int i =1;i<n;i++) {
  temp = arr[i] ;
  j = i-1;
  while((temp < arr[j]) && (j>=0)) {
     arr[j+1] = arr[j]   ;
     j--;
  }
  arr[j+1] = temp;
 }
 cout << "The array after sorting is:" << endl;
 for(int k=0;k<n;k++) {
  cout << arr[k];
 }
 getch();
}