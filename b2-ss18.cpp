#include <stdio.h>
#include <string.h>

struct student{
	char fullname[50];
	int age;
	char phone[20];
};
struct student user;

int main(){
	printf("Moi nhap ho va ten: ");
	fgets(user.fullname, sizeof(user.fullname), stdin);
	printf("Moi nhap tuoi: ");
	scanf("%d", &user.age);
	fflush(stdin);
	printf("Moi nhap sdt: ");
	fgets(user.phone, sizeof(user.phone), stdin);
	printf("\n");
	printf("Ho Va Ten: %s", user.fullname);
	printf("Tuoi: %d\n", user.age);
	printf("Phone: %s\n", user.phone);
	
	return 0;
} 
