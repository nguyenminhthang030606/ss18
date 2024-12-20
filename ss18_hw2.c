#include <stdio.h>

int main () {
	struct Sinhvien{
		char name[100];
		int age;
		char phonenumber[20]; 
	}; 
	struct Sinhvien user01={};
	printf ("ten day du cua ban la : ");
	scanf("%s",&user01.name);
	fflush(stdin); 
	printf ("tuoi cua ban la : ");
	scanf ("%d",&user01.age);
	printf ("so dien thoai cua ban la : ");
	scanf ("%s",&user01.phonenumber); 
	printf ("ten day du cua ban la : %s",user01.name);
	printf ("\ntuoi cua ban la : %d",user01.age);
	printf ("\nso dien thoai cua ban la : %s",user01.phonenumber);
	return 0; 
} 
