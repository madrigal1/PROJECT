#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main() {
 clrscr();
 ifstream src;
 src.open("story.txt",ios::in);
 char s[60];
 int n=0;
 while(!src.eof()) {
   src.getline(s,60);
   if(s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' || s[0] == 'A' || s[0] == 'E' || s[0] == 'I' || s[0] == 'O' || s[0] == 'U') {
    n++;
    cout << s << endl;
   }
 }
  cout << "No of lines:" << n;
 getch();
}