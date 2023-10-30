#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
int main(){
	 char s1[9], s2[10];
	 printf("\chao");
	 scanf ("%s", &s1);
	 printf("ban %s", s1);
	 return 0;
	 }
	 void xoa(char s[90],int vitrixoa)
	 {
	 	int n=strlen(s);
	 	for (int i=vitrixoa; i<n; i++)
	 	s[i]= s[i+1];
        s[n-1]= '\0';
        }
        
        
