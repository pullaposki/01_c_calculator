#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2;
    char ope;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter operator: ");
    scanf(" %c", &ope);

    printf("Enter another number: ");
    scanf("%lf", &num2);
    
    switch (ope)
	{
	    case '+':
            printf("%lf\n", num1 + num2);
		    break;

	    case '-':
            printf("%lf\n", num1 - num2);
		    break;

        case '*':
            printf("%lf\n", num1 * num2);
            break;

        case '/':
            printf("%lf\n", num1 / num2);
            break;
	    
	    default:
            printf("Invalid operator\n");
		    break;
	}

    return 0;
}
