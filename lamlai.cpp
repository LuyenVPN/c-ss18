#include <stdio.h>
#include <string.h>

struct Dish{
	int id;
	char name[50];
	double price;
}; 

int main(){
	
	struct Dish menu[100]={
	{1, "Com Trang", 90000},
	{2, "Nuoc Loc", 80000},
	{3, "Nuoc Mam", 50000},
	{4, "Thit Suon", 70000},
	{5, "Canh Chua", 60000}
    };

	int luachon;
	int n=5; 
	while(1){
		printf("\n------------------MENU------------------\n");
		printf("1. In ra gia tri cac phan tu co trong menu mon an. \n");
		printf("2. Them phan tu vao vi tri cuoi.\n");
		printf("3. Sua mot phan tu vao vi tri chi dinh.\n");
		printf("4. Xoa phan tu vi tri cuoi. \n");
		printf("5. Sap xep cac phan tu. \n");
		printf("6. Tim kiem phan tu theo name nhap vao. \n");
		printf("7. Thoat.\n");
		printf("Moi Nhap Lua Chon: ");
		scanf("%d", &luachon);
		fflush(stdin);
		printf("\n");
		switch (luachon){
			case 1: {
				printf("Cac Phan Tu Co Trong Menu: \n");
				for(int i=0; i< n; i++){
					printf("%d. %s: %.lf \n", menu[i].id, menu[i].name, menu[i].price);
				}
				break;
			}
			case 2:{  
			    menu[n].id= n+1; 
			   	printf("Nhap ten mon an can them: ");
		       	fgets(menu[n].name, sizeof (menu[n].name), stdin);
		       	menu[n].name[strcspn(menu[n].name, "\n")]='\0'; 
		       	printf("Nhap gia tien cua mon can them: ");
		       	scanf("%lf", &menu[n].price); 
			    printf("menu sau khi them la: \n");
			    n++; 
			    for(int i=0; i< n; i++){
				    printf("%d. %s: %.lf \n", menu[i].id, menu[i].name, menu[i].price);
		        	}
			    break;
			}
			case 3:{
				int vitri;
				printf ("nhap vi tri mon: ");
				scanf("%d", &vitri);
				fflush(stdin);
				if (vitri<=0 || vitri>n){
					printf("vi tri khong hop le");
					break;
				}
				printf("Nhap ten mon an can sua: ");
			    fgets(menu[vitri-1].name, sizeof (menu[vitri-1].name), stdin);
			    menu[vitri-1].name[strcspn(menu[vitri-1].name, "\n")] = '\0'; 
				printf("Nhap gia tien cua mon can sua: ");
			    scanf("%lf", &menu[vitri-1].price);
			    printf("Menu sau khi sua la: \n");
				for(int i=0; i< n; i++){
					printf("%d. %s: %.lf \n", menu[i].id, menu[i].name, menu[i].price);
			        }
				break;
			}
			case 4:{
				printf("Menu sau khi xoa la: \n");
				n--; 
				for(int i=0; i< n; i++){
				    printf("%d. %s: %.lf \n", menu[i].id, menu[i].name, menu[i].price);
			        }
				break;
			} 
			case 5:{
				for (int i=0 ; i < n-1 ; i++){
					for(int j=0; j< n-i-1 ; j++){
						if (menu[j].price >menu[j+1].price){
							struct Dish temp = menu[j];
							menu[j] = menu[j+1];
							menu[j+1]=temp; 
						}
					}
				} 
				printf("Menu sau khi sap xep la: \n");
				for(int i=0; i< n; i++){
				    printf("%d. %s: %.lf \n", menu[i].id, menu[i].name, menu[i].price);
			        }
				break;
			}
			case 6:{
				char mon[50];
				int check=0; 
				printf("nhap ten mon an: ");
				fgets(mon,sizeof(mon),stdin);
				mon[strcspn(mon, "\n")] = '\0'; 
				for(int i=0; i< n; i++){
					if (strcmp(menu[i].name, mon) == 0){
						check=1; 
				        printf("%d. %s: %.lf \n", menu[i].id, menu[i].name, menu[i].price);
						}
			        }
			        if (!check) {  
      					  printf("Mon an khong co trong menu.\n");
   						 }
				break;
			} 
			case 7:{
				printf("Thoat"); 
				return 0;
			} 
		}
		
    }

return 0;
}
