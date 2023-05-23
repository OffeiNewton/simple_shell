# Simple Shell Project
A group project at ALX to build a simple UNIX command interpreter.
This project involves the development of a simple UNIX command interpreter using the C programming language. 
The shell provides users with an interactive interface to execute commands and interact with the operating system.

# Overview
The Simple Shell project aims to implement a subset of the features and behaviors found in popular UNIX shells like Bash or sh. It allows users to enter commands, which are then executed by the shell. The shell supports both interactive and non-interactive modes of operation.

# Getting Started
To compile the shell, use the following command:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

To run the shell in interactive mode, simply execute the compiled binary:
./hsh

To run the shell in non-interactive mode, you can pipe commands into it:
echo "ls -l" | ./hsh

# Features
The Simple Shell project aims to provide the following features:

# Command Execution
The shell is capable of executing a wide range of commands available on the system. It searches for the specified command in the directories listed in the PATH environment variable.

# Built-in Commands
In addition to external commands, the shell supports a set of built-in commands. These commands are implemented directly within the shell and do not require external programs. Examples of built-in commands include cd for changing directories and exit for exiting the shell.

# Input/Output Redirection
The shell supports input/output redirection, allowing users to redirect the input or output of a command to or from a file. This feature enables users to process files and redirect command output to different destinations.

# Pipelines
The shell supports the use of pipelines, enabling users to connect multiple commands together, with the output of one command serving as the input to the next command. This feature allows for complex command chaining and data processing.

# Environment Variables
The shell provides support for managing environment variables. Users can view, set, and modify environment variables as needed. The shell also maintains its own set of environment variables.

# Acknowledgements
The Simple Shell project is a collaborative effort by [Solomon Offei] and [Siaw A. Nicholas]. We would like to thank our peers and the ALX SE community for their support and guidance throughout the development of this project.

# Contact
For any inquiries or suggestions regarding the Simple Shell project, please contact Authors with the info bellow.

## Authors

- [Solomon Offei](https://www.github.com/OffeiNewton)
- [Siaw A. Nicholas](https://www.github.com/ayequill)

Happy shell scripting!
