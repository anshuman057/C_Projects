#include <stdio.h>
#include <time.h>

int main(){
    time_t s, val = 0;
    struct tm* current_time;
    
    s = time(NULL);
    
    current_time = localtime(&s);
    
    printf("%02d : %02d : %02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
    return 0;
}

/*
if you want the timer to always run the below code will work
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
	time_t s, val = 0;
	struct tm* current_time;
	
	while(1){
		system("clear"); //system("cls"); if windows
		s = time(NULL);
		current_time = localtime(&s);

        // for 12hr format use:  current_time->tm_hour > 12 ? current_time->tm_hour -12 : current_time->tm_hour 
		printf("%02d : %02d : %02d", current_time->tm_hour, current_time->tm_min, current_time->tm_sec); 
        fflush(stdout);
		sleep(1);
	}
	return 0;
}
*/
