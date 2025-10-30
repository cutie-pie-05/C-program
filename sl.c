#include <stdio.h>
#include <unistd.h>  // for sleep()

int main() {
    char message[] = "I love you";
      for (int i = 0; message[i] != '\0'; i++)
	 {
        printf("%c", message[i]);
        fflush(stdout);
        sleep(1); // waits 1 second before printing the next character
    }
    printf("\n");
    return 0;
}
