#include <stdio.h>
int main(void)
{
	int num;
	while(1){
		printf("Enter an integer:\n");
		scanf("%d",&num);

		if (num < 1 || num > 1000 ) {
			printf("False!\nPlease enter an integer between 1 and 1000.\n");}
		break;
	}
		
	int array[1000];
	printf("The number of your array is:\n");
	for (int i = 0; i < num; i ++) {
		scanf("%d", &array[i]);}
	
	int Max_num = array[0];
	int Min_num = array[0];
	float sum = 0.0;
	float Average_num = array[0];
	
	for (int i = 0; i < num; i ++) {
		if (array[i] > Max_num) {Max_num = array[i];}
		if (array[i] < Min_num) {Min_num = array[i];}
		sum += array[i];}
		
	printf("The Max_num is: %d\n",Max_num);
    printf("The Min_num is: %d\n",Min_num);
	printf("The average_num is:%.2f\n", sum / num);
	
	return 0;
}