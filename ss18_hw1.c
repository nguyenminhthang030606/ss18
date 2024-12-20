#include <stdio.h>

int main (){
	struct Student {
		char name[100];
		int age ;
		char phonenumber[20]; 
	}; 
	struct Student user01={"Nguyen Minh Thang",18,"033312435"}; 
	printf ("ten day du cua ban la : %s",user01.name);
	printf ("\ntuoi cua ban la : %d",user01.age);
	printf ("\nso dien thoai la : %s",user01.phonenumber); 
	return 0; 
} 
