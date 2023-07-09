#include<bits/stdc++.h>
using namespace std;
void value(char s[4][4],int a,int t)
{
if (t==1)
	{
		
	
	if (a==1)
	{
		s[0][0]='X';
	}
	if (a==2)
	{
		s[0][1]='X';
	}
	if (a==3)
	{
		s[0][2]='X';
	}
	if (a==4)
	{
		s[1][0]='X';
	}
	if (a==5)
	{
		s[1][1]='X';
	}
	if (a==6)
	{
		s[1][2]='X';
	}
	if (a==7)
	{
		s[1][0]='X';
	}
	if (a==8)
	{
		s[2][1]='X';
	}
	if (a==9)
	{
		s[2][2]='X';
	}
	}
if (t==2)
	{
		if (a==1)
	{
		s[0][0]='O';
	}
	if (a==2)
	{
		s[0][1]='O';
	}
	if (a==3)
	{
		s[0][2]='O';
	}
	if (a==4)
	{
		s[1][0]='O';
	}
	if (a==5)
	{
		s[1][1]='O';
	}
	if (a==6)
	{
		s[1][2]='O';
	}
	if (a==7)
	{
		s[1][0]='O';
	}
	if (a==8)
	{
		s[2][1]='O';
	}
	if (a==9)
	{
		s[2][2]='O';
	}
	}
}
int check(char s)
{
	int x=0;
	if (s=='X')
	{
		cout<<"Player 1(X) WIN"<<endl;
		x++;
		
	}
	else if (s=='O')
	{
		cout<<"Player 2(O) WIN"<<endl;
	    x++;
	}
	return x;

}
int tic(char s[4][4])
{
	int c=0,flag=0;
  for (int i = 0; i < 3; ++i)
 {
	if (s[i][0]==s[i][1]&&s[i][1]==s[i][2])
	{
		c=check(s[i][0]);
		if(c==1) break;
	}
 }
  for (int i = 0; i < 3; ++i)
 {
	if (s[0][i]==s[1][i]&&s[1][i]==s[2][i]&&c==0)
	{
		c=check(s[0][i]);
		if(c==1) break;
	}
 }
 if (s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&c==0)
 {
	c=check(s[0][0]);
 }
 if (s[0][2]==s[1][1]&&s[1][1]==s[2][0]&&c==0)
 {
	c=check(s[0][2]);
 }
  for (int i = 0; i < 3; ++i)
 {
	for (int j = 0; j < 3; ++j)
	{
		if (s[i][j]==' ')
		{
			flag=1;
		}
	}
}
 if (flag==0&&c==0)
 {
	cout<<"DRAW"<<"\n";
	c=1;
 }
 return c;
}
void print(char s[4][4])
{
	for (int i = 0; i < 2; ++i)
	{
		cout<<s[i][0]<<"|"<<s[i][1]<<"|"<<s[i][2]<<endl;
		cout<<"------"<<endl;
	}
	cout<<s[2][0]<<"|"<<s[2][1]<<"|"<<s[2][2]<<endl;
}
int main()
{
	int flag=0;
	int x=0;
	char s[4][4];
	
	s[0][0]='1';
	s[0][1]='2';
	s[0][2]='3';
	s[1][0]='4';
	s[1][1]='5';
	s[1][2]='6';
	s[2][0]='7';
	s[2][1]='8';
	s[2][2]='9';
	cout<<"USE THE NUMBER MARKED ON BOX TO PUT X OR O ON IT";
	
	cout<<"Player 1 use X"<<endl;
	cout<<"Player 2 use O"<<endl;
	print(s);
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			s[i][j]=' ';
		}
	}
	while(flag==0)
	{
		int t=1;
		print(s);
		cout<<"Player 1(X) turn"<<endl;
		cout<<"Enter the box value:"<<endl;
		int a;
		cin>>a;
		value(s,a,t);
		flag=tic(s);
		if (flag==1)
		{
			break;
		}
		t++;
		print(s);
		cout<<"Player 2(O) turn"<<endl;
		cout<<"Enter the box value:"<<endl;
		cin>>a;
		value(s,a,t);
		flag=tic(s);
		
		
		
	}

	
	return 0;
}