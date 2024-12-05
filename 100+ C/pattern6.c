// This has to be the hardest pattern that I learnt
#include <stdio.h>

int min (int x, int y);
void pattern(int N);

int main()
{
	int user_input;
	printf("Enter a value: ");
	scanf("%i", &user_input);
	
	pattern(user_input);
	return 0;
}
void pattern(int N) {
    for (int i = 0; i < 2 * N - 1; i++) {
        for (int j = 0; j < 2 * N - 1; j++) {
            int top = i;
            int bottom = j;
            int right = (2 * N - 2) - j;
            int left = (2 * N - 2) - i;
            int answer = N - min(min(top, bottom), min(left, right));
            printf("%d ", answer);
        }
        printf("\n");
    }
}

int min(int x, int y){
	return x > y ? y : x;
}
