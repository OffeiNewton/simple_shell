#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <sys/stat.h>

/**
 * struct exit_status - Struct built
 *
 * @message: The exit message
 * @code: The exit code
 * @exit: 1 if should exit shell, 0 if not.
 */
typedef struct exit_status
{
	char *message;
	int code;
	int exit;
} exit_t;

/**
 * struct built - Struct built
 *
 * @cmd: The command
 * @f: The function associated
 */
typedef struct built
{
	char *cmd;
	int (*f)(char **arrtok);
} built_t;

/* Declaration of global variables */
extern char **environ;


/* String helper functions */
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, const char *src, const char *delim);
char *_strcpy(char *src, char *dest);
unsigned int _strlen(char *str);
int colon_check(char *path, char *command, char **buf, struct stat **bufstat);

#endif
