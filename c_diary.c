#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char name[200];
	printf("Enter the name of this entry.\n");
	scanf("%s", &name);
	strcat(name, ".txt");
	FILE *file = fopen(name, "w");
	char text[1000];
	printf("Enter text.");
	scanf("%s", &text);
	fprintf(file, text);
	fclose(file);
	return 0;
}
