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
		if (i == 1 || i == N){
			for (int j = 1; j <= N; j++) {
				printf("*");
			}
		}else{
			for (int j = 1; j <= N; j++){
			char str = (j == 1 || j == N) ? '*' : ' ';
			printf("%c", str);
			}
		}
		printf("\n");
	}
}
