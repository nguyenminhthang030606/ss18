#include <stdio.h> 

	struct Sinhvien{
		int id;
		char name[50];
		int age;
		char phonenumber[20]; 
	};
int main (){
	struct Sinhvien user1 [5];
	for (int i=0;i<5;i++) {
		printf ("id:%d\n",i+1);
		user1[i].id=i+1;
		printf ("Ho ten sinh vien la : ");
		 scanf ("%s",&user1[i].name) ;
		 fflush (stdin); 
		 printf ("tuoi cua sinh vien la : ");
		 scanf ("%d",&user1[i].age);
		 fflush(stdin); 
		 printf ("so dien thoai cua sinh vien la : ");
		 scanf ("%s",&user1[i].phonenumber); 
	}
	return 0; 
}
