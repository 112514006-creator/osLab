#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\nLinux file system hierarchy\n\n");
    
    printf("\nList the files present in the root directory (/):\n");
    system("ls /");

    printf("\nList the files present in home directory (/home):\n");
    system("ls /home");

    printf("\nList the files present in the var directory (/var):\n");
    system("ls /var");

    printf("\nList the files present in the etc directory (/etc):\n");
    system("ls /etc");

    printf("\nList the files present in the user directory (/usr):\n");
    system("ls /usr");

    return 0;
}