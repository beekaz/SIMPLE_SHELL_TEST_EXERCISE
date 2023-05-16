/**
 * the program that prints the PID of the parent process
 */
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - the entry point for the PID
 * Return: always 0 if successful 
 */

int main(void)
{
         pid_t pp_id;

        pp_id = getppid();
         printf("%u\n", pp_id);
        return (0);
}
