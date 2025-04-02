#include <stdio.h>
#include <string.h>

int main(){
	struct emp{
		char name[20];
		char des[20];
		int gender;
		struct date{
			int d, m, y;
		} jd;
		float salary;
	};
	
	int num = 0;
	char yn = 'y';
	struct emp db[50];
	while(yn == 'y'){
		printf("enter first and last name\n");
		scanf(" %[^\n]", db[num].name);
		printf("enter designation\n");
		scanf(" %[^\n]", db[num].des);
		printf("enter gender, 0 for f, 1 for m, 2 for other\n");
		scanf("%d", &db[num].gender);
		printf("enter joining date mm dd yyyy\n");
		scanf("%d %d %d",&db[num].jd.d, &db[num].jd.m, &db[num].jd.y);
		printf("enter salary\n");
		scanf("%f", &db[num].salary);
		
		num++;
		
		printf("add another employee? y/n\n");
		scanf(" %c", &yn);
		if(yn != 'y'){
			break;
		}
	}
	
	yn = 'y';
	while(yn == 'y'){
		printf("What do you want to do? press\n");
		printf("1 for total employees\n");
		printf("2 for male and female employees\n");
		printf("3 for employees with salary more than 10,000\n");
		printf("4 for employee that is \"Asst Manager\"\n");
		
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("there are %d employees in the company\n", num);
				break;
			case 2:
				int m = 0;
				int f = 0;
				for(int i = 0; i < num; i++){
					if(db[i].gender){
						m++;
					}
					else{
						f++;
					}
				}
				printf("there are %d males and %d females\n", m, f);
			case 3:
			int t = 0;
				for(int i = 0; i < num; i++){
					if(db[i].salary >= 10000){
						t++;
					}
				}
				printf("there are %d employees earning more than 10000\n", t);
				break;
			case 4:
				int found = 0;
				for(int i = 0; i < num; i++){
					if(strcmp(db[i].des,"Asst Manager") == 0){
						found++;
						printf("the employee who is an assistant manager is %s\n", db[i].name);
						break;
					}
					if(!found){
						printf("no such employee\n");
					}
				}
				break;
		}
		printf("another operation? y/n\n");
		scanf(" %c", &yn);
	}
	
	return 0;
}
