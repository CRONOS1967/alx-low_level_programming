<div role="main">

<div class="project row">

<div class="col-xs-12 col-md-10 col-lg-8 contains-images">

# 0x08. C - Recursion

<div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[]}" data-react-cache-id="tags/Tags-0">

</div>

  - By Julien Barbier
  - Weight: 1
  - Ongoing project - started
    <div class="d-inline-block" data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:false,&quot;value&quot;:&quot;2022-03-30T06:00:00.000+03:00&quot;}" data-react-cache-id="common/DateTime-0">
    <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2022-03-30 06:00 (GMT+03:00)"><span class="datetime">Mar
    30, 2022 </span></span>
    </div>
    , must end by
    <div class="d-inline-block" data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:false,&quot;value&quot;:&quot;2022-03-31T06:00:00.000+03:00&quot;}" data-react-cache-id="common/DateTime-0">
    <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2022-03-31 06:00 (GMT+03:00)"><span class="datetime">Mar
    31, 2022 </span></span>
    </div>
  - Checker was released at
    <div class="d-inline-block" data-react-class="common/DateTime" data-react-props="{&quot;showDate&quot;:true,&quot;showTime&quot;:true,&quot;value&quot;:&quot;2022-03-30T06:00:00.000+03:00&quot;}" data-react-cache-id="common/DateTime-0">
    <span data-container="body" data-html="false" data-placement="auto top" data-toggle="tooltip" title="" data-original-title="2022-03-30 06:00 (GMT+03:00)"><span class="datetime">Mar
    30, 2022 6:00 AM</span></span>
    </div>
  - An auto review will be launched at the deadline

<div id="project_id" style="display: none" data-project-id="219">

</div>

<div id="project-description" class="well clean">

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/219/a88.jpg)

## Resources

**Read or watch**:

  - [0x08. Recursion,
    introduction](https://alx-intranet.hbtn.io/rltoken/dzZB83Hm3lO7dScjhebAxw "0x08. Recursion, introduction")
  - [What on Earth is
    Recursion?](https://alx-intranet.hbtn.io/rltoken/xYjKl3024oN58Bi_621_vQ "What on Earth is Recursion?")
  - [C -
    Recursion](https://alx-intranet.hbtn.io/rltoken/u4ojc5CZpf4qiuQvmXCiOA "C - Recursion")
  - [C Programming Tutorial 85, Recursion
    pt.1](https://alx-intranet.hbtn.io/rltoken/Wv-wffgpXelN9ZTrbmiOyA "C Programming Tutorial 85, Recursion pt.1")
  - [C Programming Tutorial 86, Recursion
    pt.2](https://alx-intranet.hbtn.io/rltoken/7GVdI-KT-M1vOIzwEjSahQ "C Programming Tutorial 86, Recursion pt.2")

## Learning Objectives

At the end of this project, you are expected to be able to [explain to
anyone](https://alx-intranet.hbtn.io/rltoken/Uip4OgfLQdGP921TAMtCHQ "explain to anyone"),
**without the help of Google**:

### General

  - What is recursion
  - How to implement recursion
  - In what situations you should implement recursion
  - In what situations you shouldn’t implement recursion

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
  - **You are not allowed to use any kind of loops**
  - You are not allowed to use `static` variables

</div>

## Quiz questions

<div class="panel panel-default">

<div class="panel-body">

<div class="alert alert-info">

**Great\!** You've completed the quiz successfully\! Keep going\!
<span id="quiz_questions_collapse_toggle">(Show quiz)</span>

</div>

<div class="section quiz_questions_show_container" style="display: none;">

<div class="quiz_question_item_container" data-role="quiz_question459" data-position="1">

<div id="quiz_question-459" class="clearfix">

#### Question \#0

What does this code print?

    void print(int nb)
    {
        printf("%d", nb);
        nb --;
        if (nb > 0) 
        {
            print(nb);
        }
    }
    
    int main(void)
    {
        print(2);
        return (0);
    }

  - 012

  - 12

  - 21

  - 210

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question460" data-position="2">

<div id="quiz_question-460" class="clearfix">

#### Question \#1

What does this code print?

    void print(int nb)
    {
        printf("%d", nb);
        -- nb;
        if (nb > 0) 
        {
            print(nb);
        }
    }
    
    int main(void)
    {
        print(4);
        return (0);
    }

  - 4321

  - 43210

  - 321

  - 3210

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question461" data-position="3">

<div id="quiz_question-461" class="clearfix">

#### Question \#2

What does this code print?

    void print(int nb)
    {
        printf("%d", nb);
        nb ++;
        if (nb < 10) 
        {
            print(nb);
        }
    }
    
    int main(void)
    {
        print(4);
        return (0);
    }

  - 987654

  - 109876543

  - 345678910

  - 456789

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question462" data-position="4">

<div id="quiz_question-462" class="clearfix">

#### Question \#3

What does this code print?

    void print(int nb)
    {
        if (nb < 0) 
        {
            return;
        }
        printf("%d", nb);
        nb --;
        print(nb);
    }
    
    int main(void)
    {
        print(4);
        return (0);
    }

  - 01234

  - 43210

  - 1234

  - 4321

</div>

</div>

<div class="quiz_question_item_container" data-role="quiz_question463" data-position="5">

<div id="quiz_question-463" class="clearfix">

#### Question \#4

What does this code print?

    int print(int nb)
    {
        if (nb < 0) 
        {
            return (0);
        }
        printf("%d", nb + print(nb - 1));
        nb --;
        return (nb);
    }
    
    int main(void)
    {
        print(4);
        return (0);
    }

  - 64200

  - 00246

  - 01234568

</div>

</div>

</div>

</div>

</div>

## Tasks

<div id="task-num-0" data-role="task914" data-position="1">

<div id="task-914" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 0\. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that prints a string, followed by a new line.

  - Prototype: `void _puts_recursion(char *s);`

FYI: The standard library provides a similar function: `puts`. Run `man
puts` to learn more.

    julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
    #include "main.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        _puts_recursion("Puts with recursion");
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
    julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
    Puts with recursion
    julien@ubuntu:~/0x08. Recursion$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `0-puts_recursion.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-1" data-role="task915" data-position="2">

<div id="task-915" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 1\. Why is it so important to dream? Because, in my dreams we are together

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that prints a string in reverse.

  - Prototype: `void _print_rev_recursion(char *s);`

<!-- end list -->

    julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
    #include "main.h"
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        _print_rev_recursion("\nColton Walker");
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
    julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion 
    reklaW notloC
    julien@ubuntu:~/0x08. Recursion$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `1-print_rev_recursion.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-2" data-role="task916" data-position="3">

<div id="task-916" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 2\. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that returns the length of a string.

  - Prototype: `int _strlen_recursion(char *s);`

FYI: The standard library provides a similar function: `strlen`. Run
`man strlen` to learn more.

    julien@ubuntu:~/0x08. Recursion$ cat 2-main.c 
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int n;
    
        n = _strlen_recursion("Corbin Coleman");
        printf("%d\n", n);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
    julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion 
    14
    julien@ubuntu:~/0x08. Recursion$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `2-strlen_recursion.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-3" data-role="task917" data-position="4">

<div id="task-917" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 3\. You mustn't be afraid to dream a little bigger, darling

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that returns the factorial of a given number.

  - Prototype: `int factorial(int n);`  
  - If `n` is lower than `0`, the function should return `-1` to
    indicate an error  
  - Factorial of `0` is `1`

<!-- end list -->

    julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;
    
        r = factorial(1);
        printf("%d\n", r);
        r = factorial(5);
        printf("%d\n", r);
        r = factorial(10);
        printf("%d\n", r);
        r = factorial(-1024);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
    julien@ubuntu:~/0x08. Recursion$ ./3-factorial 
    1
    120
    3628800
    -1
    julien@ubuntu:~/0x08. Recursion$

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `3-factorial.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-4" data-role="task918" data-position="5">

<div id="task-918" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 4\. Once an idea has taken hold of the brain it's almost impossible to eradicate

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that returns the value of `x` raised to the power of
`y`.

  - Prototype: `int _pow_recursion(int x, int y);`  
  - If `y` is lower than `0`, the function should return `-1`

FYI: The standard library provides a different function: `pow`. Run `man
pow` to learn more.

    julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;
    
        r = _pow_recursion(1, 10);
        printf("%d\n", r);
        r = _pow_recursion(1024, 0);
        printf("%d\n", r);
        r = _pow_recursion(2, 16);
        printf("%d\n", r);
        r = _pow_recursion(5, 2);
        printf("%d\n", r);
        r = _pow_recursion(5, -2);
        printf("%d\n", r);
        r = _pow_recursion(-5, 3);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
    julien@ubuntu:~/0x08. Recursion$ ./4-pow 
    1
    1
    65536
    25
    -1
    -125
    julien@ubuntu:~/0x08. Recursion$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `4-pow_recursion.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-5" data-role="task919" data-position="6">

<div id="task-919" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 5\. Your subconscious is looking for the dreamer

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that returns the natural square root of a number.

  - Prototype: `int _sqrt_recursion(int n);`  
  - If `n` does not have a natural square root, the function should
    return `-1`

FYI: The standard library provides a different function: `sqrt`. Run
`man sqrt` to learn more.

    julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;
    
        r = _sqrt_recursion(1);
        printf("%d\n", r);
        r = _sqrt_recursion(1024);
        printf("%d\n", r);
        r = _sqrt_recursion(16);
        printf("%d\n", r);
        r = _sqrt_recursion(17);
        printf("%d\n", r);
        r = _sqrt_recursion(25);
        printf("%d\n", r);
        r = _sqrt_recursion(-1);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
    julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
    1
    32
    4
    -1
    5
    -1
    julien@ubuntu:~/0x08. Recursion$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `5-sqrt_recursion.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

<div id="task-num-6" data-role="task920" data-position="7">

<div id="task-920" class="panel panel-default task-card">

<span id="user_id" data-id="4445"></span>

<div class="panel-heading panel-heading-actions">

### 6\. Inception. Is it possible?

<div>

<span class="label label-info"> mandatory </span>

</div>

</div>

<div class="panel-body">

<span id="user_id" data-id="4445"></span>

Write a function that returns `1` if the input integer is a [prime
number](https://alx-intranet.hbtn.io/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw "prime number"),
otherwise return `0`.

  - Prototype: `int is_prime_number(int n);`

<!-- end list -->

    julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
    #include "main.h"
    #include <stdio.h>
    
    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;
    
        r = is_prime_number(1);
        printf("%d\n", r);
        r = is_prime_number(1024);
        printf("%d\n", r);
        r = is_prime_number(16);
        printf("%d\n", r);
        r = is_prime_number(17);
        printf("%d\n", r);
        r = is_prime_number(25);
        printf("%d\n", r);
        r = is_prime_number(-1);
        printf("%d\n", r);
        r = is_prime_number(113);
        printf("%d\n", r);
        r = is_prime_number(7919);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
    julien@ubuntu:~/0x08. Recursion$ ./6-prime 
    0
    0
    0
    1
    0
    0
    1
    1
    julien@ubuntu:~/0x08. Recursion$ 

</div>

<div class="list-group">

<div class="list-group-item">

**Repo:**

  - GitHub repository: `alx-low_level_programming`
  - Directory: `0x08-recursion`
  - File: `6-is_prime_number.c`

</div>

</div>

<div class="panel-footer">

<div>

<span class="no">**</span> <span class="yes">**</span>
<span class="pending">**</span>
Done<span class="no pending">?</span><span class="yes">\!</span>

Help

Check your code

**<span>Get a sandbox</span>

</div>

</div>

</div>

</div>

[Done with the mandatory tasks? Unlock 2 advanced tasks
now\!](https://alx-intranet.hbtn.io/projects/219/unlock_optionals)

</div>

</div>

<div class="copyright">

Copyright © 2022 ALX, All rights reserved.

</div>

</div>

** **

<div id="task-914-users-done-modal" class="modal fade users-done-modal" data-task-id="914" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget"

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

<div id="task-test-correction-914-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta" style="display: none;">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget"

</div>

<div class="modal-body">

<div class="actions">

<div class="alert alert-info">

Some checks are failing. Make sure you fix them before starting a new
review  
**You got this\!**

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

<div class="error" style="display: none;">

</div>

<div class="info" style="display: none;">

</div>

</div>

<div class="result" style="display: block;">

-----

#### Result:

<div class="well">

##### Commit used:

  - **URL:** [Click
    here](https://github.com/CRONOS1967/alx-low_level_programming/tree/996223ccbc3fa9d8b13b91c68d2eafee4d77d616)
  - **ID:** `996223ccbc3fa9d8b13b91c68d2eafee4d77d616`
  - **Author:** <span>cronos</span>
  - **Subject:** *first push for recursion*
  - **Date:** <span>2022-03-30 16:00:04 +0300</span>

</div>

<div id="3739" class="check-inline requirement success" title="Requirement - success">

**Check 0

</div>

<div id="3843" class="check-inline requirement success" title="Requirement - success">

**Check 1

</div>

<div id="3740" class="check-inline requirement fail" title="Requirement - fail">

**Check 2

</div>

<div id="3741" class="check-inline requirement fail offline" title="Skipped - previous check failed - Requirement - fail">

**Check 3

</div>

<div id="3946" class="check-inline requirement fail offline" title="Skipped - previous check failed - Requirement - fail">

**Check 4

</div>

<div id="3742" class="check-inline requirement fail offline" title="Skipped - previous check failed - Requirement - fail">

**Check 5

</div>

<div id="3746" class="check-inline requirement fail offline" title="Skipped - previous check failed - Requirement - fail">

**Check 6

</div>

<div id="3747" class="check-inline requirement fail offline" title="Skipped - previous check failed - Requirement - fail">

**Check 7

</div>

<div id="3748" class="check-inline requirement fail offline" title="Skipped - previous check failed - Requirement - fail">

**Check 8

</div>

<div id="3744" class="check-inline code fail offline" title="Skipped - previous check failed - Correct output of your code - fail">

**Check 9

</div>

<div id="3743" class="check-inline code fail offline" title="Skipped - previous check failed - Correct output of your code - fail">

**Check 10

</div>

<div id="3745" class="check-inline code fail offline" title="Skipped - previous check failed - Correct output of your code - fail">

**Check 11

</div>

<div>

<span>See details</span>

<div class="conainer-full-output" style="display: none;">

  

You have access to the full output of the Checker - **Use it with
reason\!**

<div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    File is present
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    README.md exists and is not empty
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head expandable">
    
    <span class="timeline-event-chevron" style="width: 10px;"> **
    </span> <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Compile program
    
    </div>
    
    <div class="timeline-event-content">
    
    <div class="timeline-event-body">
    
      - <span class="fa-li">**</span>
        
        <div class="check-files">
        
        [main\_0.c](https://s3.amazonaws.com/alx-intranet.hbtn.io/files/correction_system/219/914/main_0.c?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220330%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220330T130238Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=4711fcd0d92f0127cddf22e8a2785dcddf9ecde566ff754ad0a5c06a35fb462f)
        
        </div>
    
      - <span class="fa-li">**</span>
        
            0-puts_recursion.c: In function ‘_puts_recursion’:
            0-puts_recursion.c:11:8: error: comparison between pointer and integer [-Werror]
               11 | if (*s == "/0")
                  |        ^~
            0-puts_recursion.c:11:8: error: comparison with string literal results in unspecified behavior [-Werror=address]
            0-puts_recursion.c:13:10: error: passing argument 1 of ‘_putchar’ makes integer from pointer without a cast [-Werror=int-conversion]
               13 | _putchar(s);
                  |          ^
                  |          |
                  |          char *
            In file included from 0-puts_recursion.c:1:
            main.h:5:19: note: expected ‘char’ but argument is of type ‘char *’
                5 | int _putchar(char c);
                  |              ~~~~~^
            cc1: all warnings being treated as errors
    
    </div>
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    ltrace allowed function: write
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    `static` variables are not allowed
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Loops are not allowed
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Correct output - case: `_puts_recursion("First, solve the problem.
    Then, write the code");`
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Correct output - case: `_puts_recursion("Talk is cheap. Show me the
    code");`
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Correct output - case: `_puts_recursion("");`
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Return SUCCESS
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Betty coding style
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

  - 
    
    <div class="timeline-event-head">
    
    <span class="timeline-event-chevron" style="width: 10px;"> </span>
    <span class="timeline-event-sticker colored"> ** </span>
    <span class="timeline-event-title"> </span>
    
    Betty documentation style
    
    </div>
    
    <div class="timeline-event-content">
    
    </div>

</div>

</div>

</div>

</div>

<div class="help" style="display: block;">

**

<div class="help-container" data-task-id="914">

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

<div id="task-915-users-done-modal" class="modal fade users-done-modal" data-task-id="915" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "1. Why is it so important to dream? Because, in my dreams we are together"

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

<div id="task-test-correction-915-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "1. Why is it so important to dream? Because, in my dreams we are together"

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

<div class="help-container" data-task-id="915">

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

<div id="task-916-users-done-modal" class="modal fade users-done-modal" data-task-id="916" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange"

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

<div id="task-test-correction-916-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange"

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

<div class="help-container" data-task-id="916">

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

<div id="task-917-users-done-modal" class="modal fade users-done-modal" data-task-id="917" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "3. You mustn't be afraid to dream a little bigger, darling"

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

<div id="task-test-correction-917-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "3. You mustn't be afraid to dream a little bigger, darling"

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

<div class="help-container" data-task-id="917">

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

<div id="task-918-users-done-modal" class="modal fade users-done-modal" data-task-id="918" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "4. Once an idea has taken hold of the brain it's almost impossible to eradicate"

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

<div id="task-test-correction-918-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "4. Once an idea has taken hold of the brain it's almost impossible to eradicate"

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

<div class="help-container" data-task-id="918">

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

<div id="task-919-users-done-modal" class="modal fade users-done-modal" data-task-id="919" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "5. Your subconscious is looking for the dreamer"

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

<div id="task-test-correction-919-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "5. Your subconscious is looking for the dreamer"

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

<div class="help-container" data-task-id="919">

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

<div id="task-920-users-done-modal" class="modal fade users-done-modal" data-task-id="920" data-project-id="219">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Students who are done with "6. Inception. Is it possible?"

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

<div id="task-test-correction-920-correction-modal" class="modal fade task_correction_modal student_modal checker_in_beta">

<div class="modal-dialog">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Correction of "6. Inception. Is it possible?"

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

<div class="help-container" data-task-id="920">

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

<div id="container-specs-modal" class="modal fade">

<div class="modal-dialog modal-lg">

<div class="modal-content">

<div class="modal-header">

<span aria-hidden="true">×</span>

#### Recommended Sandbox

</div>

<div class="modal-body">

<div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true}],&quot;containersLimit&quot;:1,&quot;csrfToken&quot;:&quot;LLsANraTY9Vg27vv1XD/6ZFlOgsPqTdSKIH3aU8l2w8VX7PYO23NIsPMNLEPtP/mrKvmr4/b2IbEuPcvBGApDQ==&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0">

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