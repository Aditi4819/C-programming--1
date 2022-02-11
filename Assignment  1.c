#include <stdio.h>

int main() {
    int redg;
    char nam[20];
	char br[20];
	char hobies[20];
	printf("Give your name\n");
    scanf("%s", &nam);
	printf("Give your branch\n");
    scanf("%s", &br);
    printf("Give your hobbies\n");
    scanf("%s", &hobies);
	printf("Give your redg\n");
    scanf("%d", &redg);
    printf("Name:%s\n Hobbies:%s\n Branch:%s\n Reg No:%d",nam,hobies,br,redg);
	return 0;
}