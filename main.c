#include <stdio.h>

int main(){
	struct employee{
		char name[20];
		char des[20];
		int gender;
		struct date{
			int day;
			int month;
			int year;
		};
		int salary;
	};
	
	struct employee db[5];
	printf("enter first and last name\n");
	scanf(" %s", &db[0].name);
	printf("enter designation\n");
	scanf(" %s", &db[0].des);
	printf("enter gender, 0 for f, 1 for m, 2 for other\n");
	scanf("%d", &db[0].gender);
	printf("enter salary\n");
	scanf("%d", &db[0].salary);
	
	return 0;
}
