#include<stdio.h>
#include<math.h>
void main(){
	int choice;
	float num1,num2,result;
	printf("SImple calculator\n1.to add\n2.to subtract\n3.to multiply\n4.to divide\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	printf("Enter two numbers:");
	scanf("%f%f",&num1.&num2);
	switch(choice){
		case  1:result=num1+num2;
			printf("%f",&result);
			break;
		case 2 :result=num1-num2;
			printf("%f",&result);
			break;
		case  3:result=num1*num2;
			printf("%f",&result);
			break;
		case  4:result=num1/num2;
			printf("%f",&result);
			break;
		case default:printf("Invalid choice");
			break;

		}
	}