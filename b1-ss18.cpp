#include <stdio.h>
#include <string.h>
struct student{
	char fullname[50];
	int age;
	char phone[20]; 
}; 
struct student user01={"Dang Van Luyen",18,"0333JQK"}; 
int main(){
	printf("%s\n", user01.fullname);
	printf("%d\n", user01.age);
	printf("%s\n", user01.phone);
	return 0; 
}  
