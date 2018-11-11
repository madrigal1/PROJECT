#include<iostream.h>
#include<conio.h>
#include<process.h>
void swap(int &a,int &b) {
  int temp = a;
  a=b;
  b =temp;
}

void selsort(int arr[30],int n) {
  for(int i=0;i<n-1;i++) {
    for(int j=i+1;j<n;j++) {
       if(arr[i] > arr[j])
	  swap(arr[i],arr[j]);
    }
  }
}

void bubsort(int arr[30],int n) {
   for(int i=0;i<n-1;i++) {
      for(int j = 0;j<(n-i-1);j++) {
	if(arr[j+1] < arr[j])  {
	 swap(arr[j+1],arr[j]);
	}
      }
   }
}

void inssort(int arr[30],int n) {
    for(int i=1;i<n;i++){
     int key = arr[i];
     int j=i-1;
      while(j >=0 && arr[j] > key) {
       arr[j+1] = arr[j];
       j--;
      }
      arr[j+1] = key;
    }
}


void menu(int arr[30],int n) {
   cout << "Sorting:" << endl;
   cout << "1.Selection Sort" << endl;
   cout << "2.Buble Sort" << endl;
   cout << "3.Insertion sort " << endl;
   cout << "4.Exit" << endl;
   cout << "Input the option required: " << endl;
   int ch ;
   cin >> ch;
   if(ch == 4) abort();
   switch(ch) {
     case 1: selsort(arr,n);
	     break;
     case 2: bubsort(arr,n);
	     break;
     case 3: inssort(arr,n);
	     break;
     default: cout << "invalid option";
	      menu(arr,n);
	      break;
   }
   getch();
}

void main() {
  char cnt;
  int arr[30],n;
  do {
   clrscr();
    cout << "Input the size of the array; ";
    cin >> n;
    cout << "Input the elements of the array: ";
    for(int i=0;i<n;i++) {
     cin >> arr[i];
    }
    menu(arr,n);
    cout << endl << "The new array is: " << endl;
    for(int h=0;h<n;h++) {
      cout << arr[h] << " ";
    }
    cout << "\n Do you want to continue[y/n]";
    cin >> cnt;
  }while(cnt != 'n') ;

}


