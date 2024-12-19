#include <stdio.h>
#include <string.h>

struct student{
	char fullname[50];
	int age;
	char phone[20];
};

struct student user[5];

int main(){
	for(int i=1; i<=5 ; i++){
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
		printf("Ho Va Ten Nguoi Thu %d: %s",i, user[i].fullname);
		printf("Tuoi Nguoi Thu %d: %d\n",i, user[i].age);
		printf("Phone Nguoi Thu %d: %s\n", i, user[i].phone);
    }
	return 0;
}
