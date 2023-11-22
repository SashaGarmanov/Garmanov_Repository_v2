#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
<<<<<<< HEAD
 char name[255];
 fgets(name, 255, stdin);
 printf("length= %d\n", strlen(name)); /* debug line */
 name[strlen(name)-1] = '\0'; /* remove the newline at the end */
 printf("Hello", name);
=======
 char first[255], last[255];
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* remove the newline at the end */
 printf("Now enter your last name: ");
 gets(last); /* buffer overflow? what's that? */
 printf("Hello,", first, last);
>>>>>>> e3443ccb7d3e550dcb52bd23d27a8b151afbbc4b
 return 0;
}