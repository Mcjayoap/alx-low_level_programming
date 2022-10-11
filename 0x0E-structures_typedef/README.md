0x0E. C - Structures, typedef
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are structures, when, why and how to use them
How to use typedef

0x0E. C - Structures, typedef
C
 By: Julien Barbier
 Weight: 1
 Project will start Oct 10, 2022 6:00 AM, must end by Oct 11, 2022 6:00 AM
 was released at Oct 10, 2022 12:00 PM
 An auto review will be launched at the deadline


Resources
Read or watch:

0x0d. Structures.pdf
struct (C programming language)
Documentation: structures
0x0d. Typedef and structures.pdf
typedef
Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
The Lost Art of C Structure Packing (Advanced - not mandatory)
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are structures, when, why and how to use them
How to use typedef
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are printf, malloc, free and exit.
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
Don’t forget to push your header file
All your header files should be include guarded

Tasks


0. Poppy
Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
julien@ubuntu:~/0x0d.

1. A dog is the only thing on earth that loves you more than you love yourself
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

0x0E. C - Structures, typedef
C
 By: Julien Barbier
 Weight: 1
 Project will start Oct 10, 2022 6:00 AM, must end by Oct 11, 2022 6:00 AM
 was released at Oct 10, 2022 12:00 PM
 An auto review will be launched at the deadline


Resources
Read or watch:

0x0d. Structures.pdf
struct (C programming language)
Documentation: structures
0x0d. Typedef and structures.pdf
typedef
Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
The Lost Art of C Structure Packing (Advanced - not mandatory)
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are structures, when, why and how to use them
How to use typedef
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are printf, malloc, free and exit.
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
Don’t forget to push your header file
All your header files should be include guarded
Quiz questions
Great! You've completed the quiz successfully! Keep going! (Show quiz)
Tasks
0. Poppy
mandatory


Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *
julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0E-structures_typedef
File: dog.h
  
1. A dog is the only thing on earth that loves you more than you love yourself
mandatory
Write a function that initialize a variable of type struct dog

Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
julien@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x0E-structures_typedef
File: 1-init_dog.c
  
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
mandatory


Write a function that prints a struct dog

Prototype: void print_dog(struct dog *d);
Format: see example bellow
You are allowed to use the standard library
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
Define a new type dog_t as a new name for the type struct dog.

4. A door is what a dog is perpetually on the wrong side of
Write a function that creates a new dog.

Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails

5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
Write a function that frees dogs.

Prototype: void free_dog(dog_t *d);

