#include <stdio.h>
#include <string.h>

struct student{
	int id;
	char fullname[50];
	int age;
	char phone[20];
};

struct student user[50];

int main(){
	for(int i=1; i<=5 ; i++){
		user[i].id=i;
		printf("Moi nhap ho va ten nguoi thu %d: ",i);
		fgets(user[i].fullname, sizeof(user[i].fullname), stdin);
		printf("Moi nhap tuoi nguoi thu %d: ",i);
		scanf("%d", &user[i].age);
		fflush(stdin);
		printf("Moi nhap sdt nguoi thu %d: ",i);
		fgets(user[i].phone, sizeof(user[i].phone), stdin);
		
	}
	printf("\n");
	for(int i=1; i<=5 ; i++){
		printf("%d. %s\t %d \t %s\n", user[i].id, user[i].fullname, user[i].age, user[i].phone);
	}
	return 0;
}
