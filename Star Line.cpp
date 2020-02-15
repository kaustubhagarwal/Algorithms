//Star Line Pattern
/* This code print the following pattern
*
**
***
****
*****
Input is the number of lines
*/

#include<iostream>
#include<conio>
void main()
{
int n;
cout<<"Enter the number of lines you require in this code: ";
cin>>n;
for(int i =0;i<n;i++)
{
for(int j=0;j<=i;j++)
cout<<"*";
cout<<endl;
}
getch();
}