<div role="main">

<div id="layout-bars">

</div>

<div class="project row">

<div class="col-xs-12 col-md-10 col-lg-8 contains-images">

# 0x07. C - Even more pointers, arrays and strings

<div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[]}" data-react-cache-id="tags/Tags-0">

</div>

  - ** By Julien Barbier
  - ** Weight: 1
  - ** Ongoing project - started 03-28-2022, must end by 03-29-2022 (in
    about 10 hours) - you're done with
    <span id="student_task_done_percentage">0</span>% of tasks.
  - ** Checker was released at 03-28-2022 12:00 PM
  - ** An auto review will be launched at the deadline

<div id="project_id" style="display: none" data-project-id="218">

</div>

## Concepts

<div class="panel panel-default">

<div class="panel-body">

*For this project, students are expected to look at this concept:*

  - [Pointers and arrays](https://alx-intranet.hbtn.io/concepts/60)

</div>

</div>

<div id="project-description" class="well clean">

![](./Project_%200x07.%20C%20-%20Even%20more%20pointers,%20arrays%20and%20strings%20_%20Addis%20Ababa%20Intranet_files/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg)

## Resources

**Read or watch**:

  - [C - Pointer to
    Pointer](https://alx-intranet.hbtn.io/rltoken/eyikXPg7ZxCAEuWklB6xtQ "C - Pointer to Pointer")
  - [C – Pointer to Pointer with
    example](https://alx-intranet.hbtn.io/rltoken/ojr7OUUm2I-MULE4lWlrkg "C – Pointer to Pointer with example")
  - [Multi-dimensional Arrays in
    C](https://alx-intranet.hbtn.io/rltoken/HUZIJ6t55KM7d7FBCwWm8Q "Multi-dimensional Arrays in C")
  - [Two dimensional (2D) arrays in C programming with
    example](https://alx-intranet.hbtn.io/rltoken/Dx9nIBRj68sRBGe2NRI_aQ "Two dimensional (2D) arrays in C programming with example")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to
anyone](https://alx-intranet.hbtn.io/rltoken/YpzhlccIJNihbnYgObEStg "explain to anyone"),
**without the help of Google**:

### General

  - What are pointers to pointers and how to use them
  - What are multidimensional arrays and how to use them
  - What are the most common C standard library functions to manipulate
    strings

## Requirements

### General

  - Allowed editors: `vi`, `vim`, `emacs`
  - All your files will be compiled on Ubuntu 20.04 LTS using `gcc`,
    using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
  - All your files should end with a new line
  - A `README.md` file, at the root of the folder of the project is
    mandatory
  - Your code should use the `Betty` style. It will be checked using
    [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")
    and
    [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
  - You are not allowed to use global variables
  - No more than 5 functions per file
  - You are not allowed to use the standard library. Any use of
    functions like `printf`, `puts`, etc… is forbidden
  - You are allowed to use
    [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
  - You don’t have to push `_putchar.c`, we will use our file. If you do
    it won’t be taken into account
  - In the following examples, the `main.c` files are shown as examples.
    You can use them to test your functions, but you don’t have to push
    them to your repo (if you do we won’t take them into account). We
    will use our own `main.c` files at compilation. Our `main.c` files
    might be different from the one shown in the examples
  - The prototypes of all your functions and the prototype of the
    function `_putchar` should be included in your header file called
    `main.h`
  - Don’t forget to push your header file

## More Info

You do not need to learn about pointers to functions, arrays of
structures, `malloc` and `free` - yet.

</div>

## Quiz questions

<div class="panel panel-default">

<div class="panel-body">

<div class="alert alert-info">

**Great\!** You've completed the quiz successfully\! Keep going\!
<span id="quiz_questions_collapse_toggle">(Show quiz)</span>

</div>

<div class="section quiz_questions_show_container" style="display: none;">

<div class="quiz_question_item_container" data-role="quiz_question439" data-position="1">

<div id="quiz_question-439" class="clearfix">

#### Question \#0

What is the size of `p` in this code?

    int *p;

  - 4 bytes

  - 8 bytes

  - 16 bytes

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question440" data-position="2">

<div id="quiz_question-440" class="clearfix">

#### Question \#1

What is the size of `p` in this code?

    int **p;

  - 4 bytes

  - 8 bytes

  - 16 bytes

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question441" data-position="3">

<div id="quiz_question-441" class="clearfix">

#### Question \#2

In this following code, what is the value of `a[0][0]`?

    int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

  - 1

  - 2

  - 3

  - 4

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question442" data-position="4">

<div id="quiz_question-442" class="clearfix">

#### Question \#3

In this following code, what is the value of `a[3][0]`?

    int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

  - 7

  - 8

  - {7, 8}

  - 5

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question443" data-position="5">

<div id="quiz_question-443" class="clearfix">

#### Question \#4

In this following code, what is the value of `a[3][1]`?

    int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

  - 7

  - 9

  - {7, 8}

  - 8

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question444" data-position="6">

<div id="quiz_question-444" class="clearfix">

#### Question \#5

In this following code, what is the value of `a[1][1]`?

    int a[5][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

  - 1

  - 2

  - 3

  - 4

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question456" data-position="7">

<div id="quiz_question-456" class="clearfix">

#### Question \#6

What is the size of `*p` in this code?

    int **p;

  - 4 bytes

  - 8 bytes

  - 16 bytes

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question457" data-position="8">

<div id="quiz_question-457" class="clearfix">

#### Question \#7

What is the size of `*p` in this code?

    int *p;

  - 4 bytes

  - 8 bytes

  - 16 bytes

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question458" data-position="9">

<div id="quiz_question-458" class="clearfix">

#### Question \#8

What is stored inside a pointer to a pointer to an int?

  - An address where an int is stored

  - An int

  - An address where an address is stored

</div>

</div>

</div>

</div>

</div>

## Tasks

<div id="task-num-0" data-role="task903" data-position="1">

<div id="task-903" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 0\. memset

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that fills memory with a constant byte.

  - Prototype: `char *_memset(char *s, char b, unsigned int n);`
  - The `_memset()` function fills the first `n` bytes of the memory
    area pointed to by `s` with the constant byte `b`
  - Returns a pointer to the memory area `s`

FYI: The standard library provides a similar function: `memset`. Run
`man memset` to learn more.

    julien@ubuntu:~/0x07$ cat 0-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * simple_print_buffer - prints buffer in hexa
     * @buffer: the address of memory to print
     * @size: the size of the memory to print
     *
     * Return: Nothing.
     */
    void simple_print_buffer(char *buffer, unsigned int size)
    {
            unsigned int i;
    
            i = 0;
            while (i < size)
            {
                    if (i % 10)
                    {
                            printf(" ");
                    }
                    if (!(i % 10) && i)
                    {
                            printf("\n");
                    }
                    printf("0x%02x", buffer[i]);
                    i++;
            }
            printf("\n");
    }
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char buffer[98] = {0x00};
    
        simple_print_buffer(buffer, 98);
        _memset(buffer, 0x01, 95);
        printf("-------------------------------------------------\n");
        simple_print_buffer(buffer, 98);    
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
    julien@ubuntu:~/0x07$ ./0-memset 
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    -------------------------------------------------
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
    0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `0-memset.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-903-users-done-modal" class="modal fade users-done-modal" data-task-id="903" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "0. memset"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-903-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "0. memset"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="903">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-1" data-role="task904" data-position="2">

<div id="task-904" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 1\. memcpy

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that copies memory area.

  - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
  - The `_memcpy()` function copies `n` bytes from memory area `src` to
    memory area `dest`
  - Returns a pointer to `dest`

FYI: The standard library provides a similar function: `memcpy`. Run
`man memcpy` to learn more.

    julien@ubuntu:~/0x07$ cat 1-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * simple_print_buffer - prints buffer in hexa
     * @buffer: the address of memory to print
     * @size: the size of the memory to print
     *
     * Return: Nothing.
     */
    void simple_print_buffer(char *buffer, unsigned int size)
    {
        unsigned int i;
    
        i = 0;
        while (i < size)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", buffer[i]);
            i++;
        }
        printf("\n");
    }
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char buffer[98] = {0};
        char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    
        simple_print_buffer(buffer, 98);
        _memcpy(buffer + 50, buffer2, 10);
        printf("-------------------------------------------------\n");
        simple_print_buffer(buffer, 98);    
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
    julien@ubuntu:~/0x07$ ./1-memcpy 
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    -------------------------------------------------
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `1-memcpy.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-904-users-done-modal" class="modal fade users-done-modal" data-task-id="904" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "1. memcpy"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-904-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "1. memcpy"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="904">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-2" data-role="task905" data-position="98">

<div id="task-905" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 2\. strchr

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that locates a character in a string.

  - Prototype: `char *_strchr(char *s, char c);`
  - Returns a pointer to the first occurrence of the character `c` in
    the string `s`, or `NULL` if the character is not found

FYI: The standard library provides a similar function: `strchr`. Run
`man strchr` to learn more.

    julien@ubuntu:~/0x07$ cat 2-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *s = "hello";
        char *f;
    
        f = _strchr(s, 'l');
    
        if (f != NULL)
        {
            printf("%s\n", f);
        }
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
    julien@ubuntu:~/0x07$ ./2-strchr 
    llo
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `2-strchr.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-905-users-done-modal" class="modal fade users-done-modal" data-task-id="905" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "2. strchr"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-905-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "2. strchr"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="905">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-3" data-role="task906" data-position="99">

<div id="task-906" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 3\. strspn

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that gets the length of a prefix substring.

  - Prototype: `unsigned int _strspn(char *s, char *accept);`
  - Returns the number of bytes in the initial segment of `s` which
    consist only of bytes from `accept`

FYI: The standard library provides a similar function: `strspn`. Run
`man strspn` to learn more.

    julien@ubuntu:~/0x07$ cat 3-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *s = "hello, world";
        char *f = "oleh";
        unsigned int n;
    
        n = _strspn(s, f);
        printf("%u\n", n);
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
    julien@ubuntu:~/0x07$ ./3-strspn 
    5
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `3-strspn.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-906-users-done-modal" class="modal fade users-done-modal" data-task-id="906" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "3. strspn"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-906-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "3. strspn"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="906">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-4" data-role="task907" data-position="100">

<div id="task-907" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 4\. strpbrk

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that searches a string for any of a set of bytes.

  - Prototype: `char *_strpbrk(char *s, char *accept);`
  - The `_strpbrk()` function locates the first occurrence in the string
    `s` of any of the bytes in the string `accept`
  - Returns a pointer to the byte in `s` that matches one of the bytes
    in `accept`, or `NULL` if no such byte is found

FYI: The standard library provides a similar function: `strpbrk`. Run
`man strpbrk` to learn more.

    julien@ubuntu:~/0x07$ cat 4-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *s = "hello, world";
        char *f = "world";
        char *t;
    
        t = _strpbrk(s, f);
        printf("%s\n", t);
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
    julien@ubuntu:~/0x07$ ./4-strpbrk 
    llo, world
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `4-strpbrk.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-907-users-done-modal" class="modal fade users-done-modal" data-task-id="907" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "4. strpbrk"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-907-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "4. strpbrk"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="907">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-5" data-role="task908" data-position="101">

<div id="task-908" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 5\. strstr

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that locates a substring.

  - Prototype: `char *_strstr(char *haystack, char *needle);`
  - The `_strstr()` function finds the first occurrence of the substring
    `needle` in the string `haystack`. The terminating null bytes (`\0`)
    are not compared
  - Returns a pointer to the beginning of the located substring, or
    `NULL` if the substring is not found.

FYI: The standard library provides a similar function: `strstr`. Run
`man strstr` to learn more.

``` 
julien@ubuntu:~/0x07$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
julien@ubuntu:~/0x07$ ./5-strstr 
world
julien@ubuntu:~/0x07$ 
```

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `5-strstr.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-908-users-done-modal" class="modal fade users-done-modal" data-task-id="908" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "5. strstr"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-908-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "5. strstr"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="908">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-6" data-role="task911" data-position="103">

<div id="task-911" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 6\. Chess is mental torture

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that prints the chessboard.

  - Prototype: `void print_chessboard(char (*a)[8]);`

<!-- end list -->

    julien@ubuntu:~/0x07$ cat 7-main.c 
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char board[8][8] = {
            {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
            {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
            {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
            {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
        };
        print_chessboard(board);
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
    julien@ubuntu:~/0x07$ ./7-print_chessboard 
    rkbqkbkr
    pppppppp
    
    
    
    
    PPPPPPPP
    RKBQKBKR
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `7-print_chessboard.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-911-users-done-modal" class="modal fade users-done-modal" data-task-id="911" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "6. Chess is mental torture"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-911-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "6. Chess is mental torture"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="911">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-7" data-role="task912" data-position="104">

<div id="task-912" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 7\. The line of life is a ragged diagonal between duty and desire

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that prints the sum of the two diagonals of a square
matrix of integers.

  - Prototype: `void print_diagsums(int *a, int size);`
  - Format: see example
  - You are allowed to use the standard library

Note that in the following example we are casting an `int[][]` into an
`int*`. This is not something you should do. The goal here is to make
sure you understand how an array of array is stored in memory.

    julien@ubuntu:~/0x07$ cat 8-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int c3[3][3] = {
            {0, 1, 5},
            {10, 11, 12},
            {1000, 101, 102},
        };
        int c5[5][5] = {
            {0, 1, 5, 12124, 1234},
            {10, 11, 12, 123521, 12512},
            {1000, 101, 102, 12545, 214543435},
            {100, 1012451, 11102, 12545, 214543435},
            {10, 12401, 10452, 11542545, 1214543435},
        };
        print_diagsums((int *)c3, 3);
        print_diagsums((int *)c5, 5);
        return (0);
    }
    julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
    julien@ubuntu:~/0x07$ ./8-print_diagsums 
    113, 1016
    1214556093, 1137318
    julien@ubuntu:~/0x07$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x07-pointers_arrays_strings`
  - File: `8-print_diagsums.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

<div id="task-912-users-done-modal" class="modal fade users-done-modal" data-task-id="912" data-project-id="218">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "7. The line of life is a ragged diagonal between duty and desire"

</div>

<div class="modal-body">

<div class="list-group">

</div>

<div class="spinner">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

</div>

</div>

</div>

</div>

Check your code

<div id="task-test-correction-912-correction-modal" class="modal fade task_correction_modal student_modal">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "7. The line of life is a ragged diagonal between duty and desire"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info hidden">

</div>

Start a new test

Close

<div class="spinner" style="display: none;">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div class="error">

</div>

<div class="info">

</div>

</div>

<div class="result">

</div>

<div class="help">

**

<div class="help-container" data-task-id="912">

<div class="check-line">

<div class="check-inline requirement success">

** Requirement success

</div>

<div class="check-inline requirement fail">

** Requirement fail

</div>

</div>

<div class="check-line">

<div class="check-inline code success">

** Code success

</div>

<div class="check-inline code fail">

** Code fail

</div>

</div>

<div class="check-line">

<div class="check-inline efficiency success">

** Efficiency success

</div>

<div class="check-inline efficiency fail">

** Efficiency fail

</div>

</div>

<div class="check-line">

<div class="check-inline answer success">

** Text answer success

</div>

<div class="check-inline answer fail">

** Text answer fail

</div>

</div>

<div class="check-line">

<div class="check-inline requirement fail offline">

** Skipped - Previous check failed

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

[Done with the mandatory tasks? Unlock 2 advanced tasks
now\!](https://alx-intranet.hbtn.io/projects/218/unlock_optionals)

<div id="container-specs-modal" class="modal fade">

<div class="modal-dialog modal-lg">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Recommended Sandbox

</div>

<div class="modal-body">

<div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true}],&quot;containersLimit&quot;:1,&quot;csrfToken&quot;:&quot;eWnjIMY2jCBfc+YTQCCbeiB6Moqzv47sKsqvxFJPnLhAjVDOS8gi1/xkaU2a5Jt1HbTuLjPNYTjG86+CGQpuug==&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0">

<div>

<div class="d-flex gap-4 sandboxes-filters">

<span class="btn btn-outline-primary">**<span>Running only</span></span>

<div class="align-items-center d-flex" style="position: relative; width: 100%;">

</div>

</div>

<div class="mt-3">

### 1 image<span class="small">(0/1 Sandbox spawned)</span>

</div>

<div class="mt-3">

<div class="panel panel-default">

<div class="panel-body">

<div class="align-items-center d-flex flex-wrap justify-content-between">

<div>

### **<span class="ml-2">Ubuntu 20.04</span>

<div class="mt-2 text-muted">

Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for
Foundations

</div>

</div>

<div class="d-flex flex-wrap gap-5">

<span class="btn btn-success">**<span>Run</span></span>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

</div>

<div class="copyright">

Copyright © 2022 ALX, All rights reserved.

</div>

</div>

** **

<div id="search-modal" class="modal fade" tabindex="-1" role="dialog" aria-labelledby="search-modal-label">

<div class="modal-dialog modal-md">

<div class="modal-content">

<div class="modal-header">

<div id="search-bar-container">

</div>

</div>

<div class="modal-body">

<div id="modal-spinner" class="spinner gap">

<div class="bounce1">

</div>

<div class="bounce2">

</div>

<div class="bounce3">

</div>

</div>

<div id="search-results-container">

</div>

</div>

</div>

</div>

</div>

<div id="markdownGuideModal" class="modal fade" tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true">

<div class="modal-dialog modal-md">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Markdown Guide

</div>

<div class="modal-body">

#### Emphasis

    **bold**
    *italics*
    ~~strikethrough~~

#### Headers

    # Big header
    ## Medium header
    ### Small header
    #### Tiny header

#### Lists

    * Generic list item
    * Generic list item
    * Generic list item
    
    1. Numbered list item
    2. Numbered list item
    3. Numbered list item

#### Links

    [Text to display](http://www.example.com)

#### Quotes

    > This is a quote.
    > It can span multiple lines!

#### Images

CSS style available: `width, height, opacity`

    ![](http://www.example.com/image.jpg)
    ![](http://www.example.com/image.jpg | width: 200px)
    ![](http://www.example.com/image.jpg | height: 124px | width: 80px | opacity: 0.6)

#### Tables

    | Column 1 | Column 2 | Column 3 |
    | -------- | -------- | -------- |
    | John     | Doe      | Male     |
    | Mary     | Smith    | Female   |
    
    Or without aligning the columns...
    
    | Column 1 | Column 2 | Column 3 |
    | -------- | -------- | -------- |
    | John | Doe | Male |
    | Mary | Smith | Female |

#### Displaying code

    `var example = "hello!";`
    
    Or spanning multiple lines...
    
    ```
    var example = "hello!";
    alert(example);
    ```

</div>

</div>

</div>

</div>