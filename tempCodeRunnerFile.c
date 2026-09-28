#include <stdio.h>
int main(){
	int choice;
	float length, breadth, radius, area;
	printf("1. Area of rectangle:\n");
	printf("2. Area of circle:\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("Enter the length:\n");
			scanf("%f", &length);
			printf("Enter the breadth:\n");
			scanf("%f", &breadth);
			area= length*breadth;
			printf("Area of rectangle : %.2f\n", area);
			break;
			
		case 2:
			printf("Enter the radius of circle:\n");
			scanf("%f", &radius);
			area=radius*radius;
			printf("Area of circle: %.2f\n", area);
			break;
			
		default:
			printf("This is not the choice bro\n");
	}
return 0;
}