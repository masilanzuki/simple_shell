# 0x16. C - Simple Shell

## Description: Simple shell

The present project consists of the creation of a program similar to a Linux shell, using the C programming language. To do it, it is necessary understand the following definitions:

1. A shell is a command interpreter that allows fluid interaction between an operating system and its users.

2. The interaction that a shell allows is carried out through a command line that, as its name indicates, facilitates the entry of text strings that are analyzed and interpreted by the operating system so that certain processes and tasks can be executed.

3. The commands that are typed in a chain of commands can have options or arguments that make more specific the processes that the users require.

## Objective: 

To create an interface similar to the linux shell by writing programs that allow you to print a "prompt" on the screen followed by a command line in which you can type text strings that can be interpreted by the operating system as valid commands and/or arguments that can be executed or return error messages.

To achieve the goal, some Linux functions are used, as well as system calls that are incorporated into the written programs.

## Table of content

- [0x16. C - Simple Shell](#\n)
    - [Description: Simple shell](#description-simple-shell)
    - [Objective:](#objective)
    - [Table of content](#table-of-content)
    - [How to install it:](#how-to-install-it)
    - [How to use it:](#how-to-use-it)
    - [Authors:](#authors)

## How to install it:
The first thing to do is clone this repository and thus you will have a directory with all the program files.

Then the program must be compiled using the following command line: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

## How to use it: 

To use the program, simply open a Linux terminal, navigate to the directory containing the program files, run the "hsh" file with the command "./hsh"

## Authors:
  - Loraine Muturi <lorrainemuturi@gmail.com> 
  - Eugene Nzuki <massilaeugene@gmail.com>
