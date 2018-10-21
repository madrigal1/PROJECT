#include<iostream.h>
#include<conio.h>


void main() {
 int n,arr[30];
 clrscr();
 cout << "Enter the size of the array: ";
 cin  >> n;
 cout << endl;
 for(int i =0;i<n;i++) {
  cout << "Enter the element " << i+1 << " :  ";
  cin >> arr[i];
 }
 cout << "Enter the number to be searched:";
 int num;
 cin >> num;
 int flag=0;
 int beg =0;
 int end = n-1;
 int mid = (beg +end)/2;
 while(beg <= end) {
   if(arr[mid] < num) {
    beg = mid+1;
   } else if(arr[mid] == num) {
    cout << "Element found at " << mid+1;
    flag =1;
    break;
   } else {
    end = mid-1;
   }
   mid = (beg+end)/2;
 }
 if(flag == 0) {
  cout << "Element not found";
 }
 getch();
}