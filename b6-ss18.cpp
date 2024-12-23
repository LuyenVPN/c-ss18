#include <stdio.h>
#include <string.h>

struct student{
	int id;
	char fullname[50];
	int age;
	char phone[20];
};

struct student user[50]={
	{1,"Dang Van Luyen 1",18,"09887761"},
	{2,"Dang Van Luyen 2",18,"09887762"},
	{3,"Dang Van Luyen 3",18,"09887763"},
	{4,"Dang Van Luyen 4",18,"09887764"},
	{5,"Dang Van Luyen 5",18,"09887765"}
}; 

int main(){
	int n=5;
	user[n].id= n+1;
	printf("Nhap ho va ten: ");
	fgets(user[n].fullname, sizeof(user[n].fullname), stdin);
	user[n].fullname[strcspn(user[n].fullname, "\n")]='0';
	printf("Nhap tuoi: ");
	scanf("%d", &user[n].age);
	fflush(stdin);
	printf("nhap sdt: ");
	fgets(user[n].phone,sizeof(user[n].phone),stdin);
	n++;
	for(int i=0; i<n;i++){
		printf("%d. %s - %d - %s", user[i].id, user[i].fullname, user[i].age, user[i].phone);
		printf("\n");
	}
	return 0;
}
