#include<iostream.h>
#include<conio.h>
#include<process.h>

void main() {
 clrscr();
 int mat1[10][10],r1,c1,r2,c2;
 cout << "Input the rows and the columns ofthe first matrix: ";
 cin >> r1 >> c1;
 cout << "Input the rows and the colums of the second matrix";
 cin >> r2 >> c2;
 if(c1 != r2) {
  cout << "These matrices cannot be multiplied";
  getch();
  abort();
 }
 cout << "Input the elements of the first matrix";
 for(int i=0;i<r1;i++) {
    for(int j=0;j<c1;j++) {
      cin >> mat1[i][j];
    }
 }
//mat2
int mat2[10][10];
int mat3[10][10];
cout << endl;
cout << "Enter matrix 2";
 for(int m=0;m<r2;m++) {
    for(int l=0;l<c2;l++) {
      cin >> mat2[m][l];
    }
 }
 int sum;
 for(int f=0;f<r1;f++) {
    for(int d=0;d<c2;d++) {
      sum=0;
      for(int k=0;k<c1;k++) {
       sum += (mat1[f][k] * mat2[k][d]);
      }
      mat3[f][d] = sum;
    }
 }
 cout << endl;
 cout << "The result:" << endl;
 for(int z=0;z<r1;z++) {
    for(int x=0;x<c2;x++) {
      cout <<  mat3[z][x] << " ";
    }
    cout << endl;
 }




 getch();
}