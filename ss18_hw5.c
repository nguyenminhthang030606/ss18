#include <stdio.h>

 struct  Sinhvien{
 	int id ; 
	 char name;
	 int age;
	 char phone; 
 };
 int main (){
 	struct Sinhvien user[50]={
 		{1,"nguyen minh thang",18,"03366666"},
		{2,"Truong Phuong Linh",20,"042352455"}, 
		{3,"Nguyen Tri Thang",18, "457973584"}
	 };
	 int Student=3;
	 int TimID,timthay=0;
	 printf ("\nthong tin sinh vien\n");
	 for(int i=0;i<5;i++){
	 	fflush(stdin); 
	 	printf ("ID:%d, Ho va ten : %s, So tuoi: %d, So dien thoai: %s",user[i].id,user[i].name,user[i].age,user[i].phone); 
	 } 
	  
 	
 	return 0; 
 } 
