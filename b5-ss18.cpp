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
    int find=0; 
    printf("Nhap id can tim kiem: ");
	scanf("%d", &find);
	fflush(stdin);
	for(int i=1; i<=5 ; i++){
	    if (i == find){
	    	find=1;
		    printf("Name Doi Thanh: ");
		    fgets(user[i].fullname, sizeof(user[i].fullname), stdin);
		    user[i].fullname[strcspn(user[i].fullname, "\n")]= '0'; 
		    printf("Tuoi doi thanh: ");
		    scanf("%d", &user[i].age);
	    }
    }
    if (!find){
	    	printf("id khong hop le");
	    }
	printf("sau khi thay doi:\n");
	for(int i=0; i<5; i++){
		printf("%d. %s - %d - %s. \n", user[i].id, user[i].fullname, user[i].age, user[i].phone);
		}
	return 0;
}
