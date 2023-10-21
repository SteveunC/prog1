#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char username[16], passwordp[30], user[] = "admin", pwd[] = "12345";
int n = 1;

void welcome(){
	system("@cls||clear");
	printf("\t\tWELCOME TO MY SITE\n");
}

void pwdastr(char password[30]){
	int i = 0;
	char ch;
	
	memset(passwordp, 0, sizeof(passwordp));
	
	while (ch != 13) {
		ch = _getch();
		
        if (ch != 13){
			password[i] = ch;
        	printf("*");
		}
        else{
        	break;
		}
		
        i++;
	}	
	
}

int main(){	
	while(n<=3){
		welcome();
		printf("\n\nLOGIN HERE!");
		printf("\n\nUSERNAME: ");
		scanf("%s", &username);
		
		printf("PASSWORD: ");
		pwdastr(passwordp);
		
		if (strcmp(username, user) != 0){
			switch(n){
			case 1:
				system("cls");
				welcome();
				printf("\n\nUSER DOESN'T EXIST. You have %d attempt/s left...", n + 1);
				break;	
			case 2:
				system("cls");
				welcome();
				printf("\n\nUSER DOESN'T EXIST. You have %d attempt/s left...", n - 1);
				break;
			default:
				break;		
			}
		}
		else if (strcmp(passwordp, pwd) != 0){
			switch(n){
			case 1:
				system("cls");
				welcome();
				printf("\n\nINCORRECT PASSWORD. You have %d attempt/s left...", n + 1);
				break;	
			case 2:
				system("cls");
				welcome();
				printf("\n\nINCORRECT PASSWORD. You have %d attempt/s left...", n - 1);
				break;
			default:
				break;		
			}	
		}
		else {
			break;
		}			
		_getch();
		n++;
}

	if (n <= 3){
		system("cls");
		welcome();
		printf("\n\nYOU'VE LOGIN SUCCESSFULLY.");
	}
	else {
		system("cls");
		welcome();
		printf("\n\nSORRY! YOU CAN'T LOGIN.");
	}
	
	return 0;
}
