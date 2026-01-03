#include <stdio.h>
int main(void)
{
	int n;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	
	if (n < 1 || n > 100) {
		printf("Wrong! Please enter n between 0 and 100.\n");
		return 0;}
	
	int array[100];
	int i;
	printf("The number of your integer are :%d\n",n);
	printf("The integers are:\n");
		
	for (int i = 0; i < n; i++) {scanf("%d", &array[i]);}
	int Max_array = array[0];
	int Min_array = array[0];
		
	for (int i = 0; i < n; i++) {
		if (array[i] > Max_array) {Max_array = array[i];}}
	printf("The max integer is: %d\n", Max_array);
	
	for (int m = 0; m < n; m++) {
		if (array[m] < Min_array) {Min_array = array[m];}}
		
	printf("The min integer is: %d\n", Min_array);
	printf("The gap between max and min integer is:%d\n",Max_array - Min_array);
}
