#include<iostream.h>
#include<conio.h>
#include<process.h>

void sum(int a[30][30],int b[30][30],int c[30][30],int m,int n) {
  for(int i=0;i<m;i++) {
   for(int j=0;j<n;j++) {
     c[i][j] = a[i][j] + b[i][j];
   }
  }
}

void diff(int a[30][30],int b[30][30],int c[30][30],int m,int n) {
  for(int i=0;i<m;i++) {
   for(int j=0;j<n;j++) {
     c[i][j] = a[i][j] - b[i][j];
   }
  }
}

void mul(int a[30][30],int b[30][30],int c[30][30],int m,int n,int q) {
   for(int i=0;i<m;i++) {
     for(int j=0;j<q;j++) {
      c[i][j] = 0;
      for(int k=0;k<n;k++) {
	c[i][j] += (a[i][k] * b[k][j]);
      }
     }
   }
}

void menu() {
 int c[30][30],a[30][30],b[30][30];
 int r1,c1,r2,c2;
 cout << "Input dimensions of first array: "  << endl;
 cin >> r1 >> c1;
 cout << "Input the first array:  " << endl;
 for(int i=0;i<r1;i++) {
  for(int j =0;j<c1;j++) {
   cin >> a[i][j];
  }
 }
 cout << "Input the dimensions of second array" << endl;
 cin >> r2 >> c2;
 cout << "Input the second matrix" << endl;
 for(int l=0;l<r2;l++) {
  for(int m =0;m<c2;m++) {
   cin >> b[l][m];
  }
 }

clrscr();
cout << "Operations: " << endl;
cout << "1.Addition: " << endl;
cout << "2. Subtraction:" << endl;
cout << "3. Multiplication:" << endl;
cout << "4.Exit" << endl;
int ch;
cout << "Enter your desired option: ";
cin >> ch;
if(ch == 4) abort();
 switch(ch) {
  case 1: if((r1 == r2) && (c1 == c2)) {
	   sum(a,b,c,r1,c1);
	  } else {
	   cout << "Matrices cannot be added" << endl;
	  }
	  break;
  case 2:  if((r1 == r2) && (c1 == c2)) {
	   diff(a,b,c,r1,c1);
	  } else {
	   cout << "Matrices cannot be subtracted" << endl;
	  }
	  break;
  case 3: if(c1 == r2) {
	   mul(a,b,c,r1,c1,c2);
	  }else {
	   cout << "Matrices cannot be multiplied " << endl;
	  }
	  break;
  default: cout << "Invalid option" << endl;
	   menu();
	   break;
 }
 cout << "the result is:" << endl;
 if(ch == 1 || ch == 2) {
    for(int i =0;i< r1;i++) {
     for(int j=0;j<c1;j++) {
      cout << c[i][j] << " ";
     }
     cout << endl;
    }
 } else {
   for(int i=0;i<r1;i++) {
    for(int j=0;j<c2;j++) {
     cout << c[i][j] << " ";
    }
    cout << endl;
   }
 }
 getch();
}
void main() {
 char cnt;
 do {
  clrscr();
   menu();
   cout << "Do you want to continue ? ";
   cin >> cnt;
   getch();
 }while(cnt != 'n');
}