//Inverted half pyramid
/* This program produces the output in the following fashion

*****
****
***
**
*

Input is number of lines
*/

#include<iostream>
#include<conio>

void main ()
{
int n;
cout<<"Enter the number of lines: ";
cin>>n;

for(int i=0;i<n;i++)
{
for(int j=0;j<n-i;j++)
cout<<"*";
cout<<endl;
}
getch();
}

