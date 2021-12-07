// Name : Ojus Mamatha Srikanth
// ID : 1001444073
// References -> https://www.tutorialspoint.com/how-to-write-a-simple-calculator-program-using-c-language
// https://www.geeksforgeeks.org/switch-statement-cc/
#include <stdio.h>
int main() {
	
		int op, num1, num2, st, result = 0, store=0;
		while (1)
		{
		printf("\n Choose an operation :\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Modulus \n6.Retrieve stored value \n7.Clear stored value \n.Enter choice -> ");
		scanf_s("%d", &op);
		if (op < 6)
		{
			printf("Enter the value of the 1st number \n : ");
			scanf_s("%d", &num1);
			printf("Enter the value of the 2nd number \n : ");
			scanf_s("%d", &num2);
		}
		switch (op) {
		case 1: result = num1 + num2;
			printf("The value is %d", result);
			printf("\nDo you want to store this value? 1 for yes/ 0 for no");
			scanf_s("%d", &st);
			if (st == 1)
			{
				store = result;
				printf("\nThe value has been stored");
			}
			else if (st == 0)
				printf("Not stored");
			else
				printf("invalid input");
			break;
		case 2: result = num1 - num2;
			printf("The value is %d", result);
			printf("\nDo you want to store this value? 1 for yes/ 0 for no");
			scanf_s("%d", &st);
			if (st == 1)
			{
				store = result;
				printf("\nThe value has been stored");
			}
			else if (st == 0)
				printf("Not stored");
			else
				printf("invalid input");
			break;
		case 3: result = num1 * num2;
			printf("The value is %d", result);
			printf("\nDo you want to store this value? 1 for yes/ 0 for no");
			scanf_s("%d", &st);
			if (st == 1)
			{
				store = result;
				printf("\nThe value has been stored");
			}
			else if (st == 0)
				printf("Not stored");
			else
				printf("invalid input");
			break;
		case 4: result = num1 / num2;
			printf("The value is %d", result);
			printf("\nDo you want to store this value? 1 for yes/ 0 for no");
			scanf_s("%d", &st);
			if (st == 1)
			{
				store = result;
				printf("\nThe value has been stored");
			}
			else if (st == 0)
				printf("Not stored");
			else
				printf("invalid input");
			break;
		case 5: result = num1 % num2;
			printf("The value is %d", result);
			printf("\nDo you want to store this value? 1 for yes/ 0 for no");
			scanf_s("%d", &st);
			if (st == 1 )
			{
				store = result;
				printf("\nThe value has been stored");
			}
			else if (st == 0)
				printf("Not stored");
			else
				printf("invalid input");
			break;
		case 6: printf("\nThe stored value is %d", store);
			break;
		case 7: store = 0;
			break;
		default: printf("\n Invalid Operator ");
		}
		

		//return 0;
	}
}