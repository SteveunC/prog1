#include <stdio.h>
#include <stdlib.h>
#define pincode 123456
#define balance 1000

char choice;
int pin;
float bal, deposit, withdrawal;

void welcome(){
	printf("Welcome to ATM Program\n");
	printf("Enter Your six-digit PIN: ");
	scanf("%d", &pin);
}

void incpin(){
	while (pin != pincode) {
		printf("\nIncorrect PIN\n");
		printf("Re-enter pin: ");
		scanf(" %d", &pin);
	}
	system("cls");
}

void corPIN(){
	printf("PIN Code CORRECT!\n\n\nMenu: \n");
	printf("[A]-BALANCE INQUIRY\n[B]-DEPOSIT\n[C]-WITHDRAW\n[X]-EXIT!\n");
	printf("Please Enter your Choice:\n");
	scanf(" %c", &choice);
}
	
void choices(){
	switch (choice) {
		case 'A':
		case 'a':
			printf("\nYour Balance is:\t%d Php", balance);
			break;
		case 'B':
		case 'b':
			printf("\nDeposit amount: ");
			scanf("%f", &deposit);
			
			bal = (balance + deposit);
			
			printf("\nYour Balance is:\t%0.2f Php\n", bal);
			printf("Thank you for banking with us");
			break;
		case 'C':
		case 'c':
			printf("\nWithdrawal amount: ");
			scanf("%f", &withdrawal);
			
			if (withdrawal > balance) {
				while (withdrawal > balance){
					printf("\nInsufficient funds\n");
					printf("Please re-enter amount: ");
					scanf("%f", &withdrawal);
				}
			}
			
			bal = (balance - withdrawal);
			
			printf("\nYour Balance is:\t%0.2f Php\n", bal);
			printf("Thank you for banking with us");
			break;
		case 'X':
		case 'x':
			break;
		default:
			printf("Invalid option.\n");
			break;
	}	
}

int main(){
	welcome();
	incpin();
	corPIN();
	choices();
	return 0;
}
