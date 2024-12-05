#include <stdio.h>

void pattern(int N);

int main()
{
	
	int user_input;
	printf("Enter a value: ");
	scanf("%i", &user_input);
	
	pattern(user_input);
	return 0;
}

void pattern(int N)
{
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= i; j++){
			printf("%i", j);
		}			
		for (int j = 1; j <= N * 2 - (i * 2); j++){
			printf(" ");
		}
		
		for (int j = i; j > 0; j--){
			printf("%i", j);
		}
		printf("\n");
	}
}
