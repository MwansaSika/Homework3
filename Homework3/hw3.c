#include <stdio.h>

int main() //Indicates start
{
	int rec_area, radi, area, wid, leng, hei;
	float circ_area, trian_area;
	const double PI = 3.14;
	 int rec_area = wid * leng;

	printf("enter 1 for the radious circle"); //Outputting to screen
	printf("Enter 2 for the width of the rectangle"); //Outputting to screen
	printf("Enter 3 for the length of the triangle"); //outputting to screen
	printf("Enter 4 for the program to quit"); //Outputting to screen

	while (1 == 1) {
		printf("Choose Your option : ");
		scanf("%i", &area);

		switch (area) {
		case 1:
			printf("enter the radious of a circle\n");
			scanf("%i", &radi);
			printf(" enter the area of a circle. \n");
			circ_area = PI * radi * radi;
			printf("area of the circle is %f", &circ_area);
			break;

		case 2:
			printf("enter the width of a rectangle");
			scanf("%i", &wid);
			printf("enter the length of the rectangle");
			scanf("%i", &leng);
			printf("enter the area of the rectangl");

			printf("Rectangular Area =%d", &trian_area);
			break;

		case 3:
			printf("enter the length of a triangle");
			scanf("%i", &leng);
			printf("enter the height of a triangle");
			printf("%i", &hei);

			trian_area = leng * hei / 2;

			printf("Triangle Area=%5.2f", &trian_area);

			break;

		case 4:
			printf("program quit");
			return 0;
		}
	}

}
