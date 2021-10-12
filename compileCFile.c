#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMAND_MAX_LENGTH 4

int main(void) {
	char* command = malloc(sizeof(char));
	char gccArr[COMMAND_MAX_LENGTH] = {'g', 'c', 'c', ' '};
	
	printf("(SPACES ARE EQUAL TO \\0 IF YOU KNOW THAT DRILL)\nFile name: ");
	scanf("%s", command+4);
	
	for(int i = 0; i < COMMAND_MAX_LENGTH; i++) 
		*(command + i) = gccArr[i];
	
	printf("I recieved: \"%s\"\n\n", command);
	
	system(command);
	system("pause");
}