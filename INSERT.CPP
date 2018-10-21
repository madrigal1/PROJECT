#include<iostream.h>
#include<conio.h>

void main() {
 clrscr();
 int arr[100];
 int n;
 cout <<  "Enter arr size" ;
 cin >> n;
 cout <<endl;
 cout << "Enter array: ";
 cout << endl;
 for(int i =0;i<n;i++) {
  cin >> arr[i];
 }
int insert,pos;
cout << "Enter the element that must be interted and pos: " << endl;
cin >> insert >> pos ;
for(int m=n;m<(pos-1);m--) {
 arr[m] = arr[m-1];
}
arr[pos-1] = insert;

 //print arr
 for(int l=0;l<=n;l++) {
  cout << arr[l] << " ";
 }
 getch();
}