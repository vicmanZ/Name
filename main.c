#include <stdio.h>
 
 int main(int argc, char **argv)
 {
	printf("Enter your name: ");
	fgets(name, 255, stdin);
	name[strlen(name)-1] = '\0'; /* remove the newline at the end */

     	printf("Hello %s!\n", name);
	printf("Hello %s!\n", name);     
	return 0;
 }
