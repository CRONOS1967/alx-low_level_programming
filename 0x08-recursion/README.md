0x08. C - Recursion {#x08.-c---recursion .gap}
===================

::: {react-class="tags/Tags" react-props="{\"tags\":[]}" react-cache-id="tags/Tags-0"}
:::

-    By Julien Barbier
-    Weight: 1
-    Ongoing project - started
    ::: {.d-inline-block react-class="common/DateTime" react-props="{\"showDate\":true,\"showTime\":false,\"value\":\"2022-03-30T06:00:00.000+03:00\"}" react-cache-id="common/DateTime-0"}
    [[Mar 30, 2022 ]{.datetime}]{container="body" html="false"
    placement="auto top" toggle="tooltip" title=""
    original-title="2022-03-30 06:00 (GMT+03:00)"}
    :::

    , must end by
    ::: {.d-inline-block react-class="common/DateTime" react-props="{\"showDate\":true,\"showTime\":false,\"value\":\"2022-03-31T06:00:00.000+03:00\"}" react-cache-id="common/DateTime-0"}
    [[Mar 31, 2022 ]{.datetime}]{container="body" html="false"
    placement="auto top" toggle="tooltip" title=""
    original-title="2022-03-31 06:00 (GMT+03:00)"}
    :::

    \- you\'re done with [0]{#student_task_done_percentage}% of tasks.
-    Checker was released at
    ::: {.d-inline-block react-class="common/DateTime" react-props="{\"showDate\":true,\"showTime\":true,\"value\":\"2022-03-30T06:00:00.000+03:00\"}" react-cache-id="common/DateTime-0"}
    [[Mar 30, 2022 6:00 AM]{.datetime}]{container="body" html="false"
    placement="auto top" toggle="tooltip" title=""
    original-title="2022-03-30 06:00 (GMT+03:00)"}
    :::
-    An auto review will be launched at the deadline

::: {#project_id style="display: none" project-id="219"}
:::

::: {#project-description .well .clean}
![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/219/a88.jpg)

Resources
---------

**Read or watch**:

-   [0x08. Recursion,
    introduction](https://alx-intranet.hbtn.io/rltoken/dzZB83Hm3lO7dScjhebAxw "0x08. Recursion, introduction")
-   [What on Earth is
    Recursion?](https://alx-intranet.hbtn.io/rltoken/xYjKl3024oN58Bi_621_vQ "What on Earth is Recursion?")
-   [C -
    Recursion](https://alx-intranet.hbtn.io/rltoken/u4ojc5CZpf4qiuQvmXCiOA "C - Recursion")
-   [C Programming Tutorial 85, Recursion
    pt.1](https://alx-intranet.hbtn.io/rltoken/Wv-wffgpXelN9ZTrbmiOyA "C Programming Tutorial 85, Recursion pt.1")
-   [C Programming Tutorial 86, Recursion
    pt.2](https://alx-intranet.hbtn.io/rltoken/7GVdI-KT-M1vOIzwEjSahQ "C Programming Tutorial 86, Recursion pt.2")

Learning Objectives
-------------------

At the end of this project, you are expected to be able to [explain to
anyone](https://alx-intranet.hbtn.io/rltoken/Uip4OgfLQdGP921TAMtCHQ "explain to anyone"),
**without the help of Google**:

### General

-   What is recursion
-   How to implement recursion
-   In what situations you should implement recursion
-   In what situations you shouldn't implement recursion

Requirements
------------

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS using `gcc`,
    using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project is
    mandatory
-   Your code should use the `Betty` style. It will be checked using
    [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")
    and
    [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of
    functions like `printf`, `puts`, etc... is forbidden
-   You are allowed to use
    [\_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don't have to push `_putchar.c`, we will use our file. If you do
    it won't be taken into account
-   In the following examples, the `main.c` files are shown as examples.
    You can use them to test your functions, but you don't have to push
    them to your repo (if you do we won't take them into account). We
    will use our own `main.c` files at compilation. Our `main.c` files
    might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the
    function `_putchar` should be included in your header file called
    `main.h`
-   Don't forget to push your header file
-   **You are not allowed to use any kind of loops**
-   You are not allowed to use `static` variables
:::

Quiz questions {#project-quiz-questions-title .gap}
--------------

::: {.panel .panel-default}
::: {.panel-body}
::: {.alert .alert-info}
**Great!** You\'ve completed the quiz successfully! Keep going! [(Show
quiz)]{#quiz_questions_collapse_toggle}
:::

::: {.section .quiz_questions_show_container style="display: none;"}
::: {.quiz_question_item_container data-role="quiz_question459" position="1"}
::: {#quiz_question-459 .clearfix}
#### Question \#0 {#question-0 .quiz_question}

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

-   012

-   12

-   21

-   210
:::
:::

::: {.quiz_question_item_container data-role="quiz_question460" position="2"}
::: {#quiz_question-460 .clearfix}
#### Question \#1 {#question-1 .quiz_question}

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

-   4321

-   43210

-   321

-   3210
:::
:::

::: {.quiz_question_item_container data-role="quiz_question461" position="3"}
::: {#quiz_question-461 .clearfix}
#### Question \#2 {#question-2 .quiz_question}

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

-   987654

-   109876543

-   345678910

-   456789
:::
:::

::: {.quiz_question_item_container data-role="quiz_question462" position="4"}
::: {#quiz_question-462 .clearfix}
#### Question \#3 {#question-3 .quiz_question}

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

-   01234

-   43210

-   1234

-   4321
:::
:::

::: {.quiz_question_item_container data-role="quiz_question463" position="5"}
::: {#quiz_question-463 .clearfix}
#### Question \#4 {#question-4 .quiz_question}

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

-   64200

-   00246

-   01234568
:::
:::
:::
:::
:::

Tasks {#tasks .gap}
-----

::: {#task-num-0 data-role="task914" position="1"}
::: {#task-914 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 0. She locked away a secret, deep inside herself, something she once knew to be true\... but chose to forget {#she-locked-away-a-secret-deep-inside-herself-something-she-once-knew-to-be-true...-but-chose-to-forget .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that prints a string, followed by a new line.

-   Prototype: `void _puts_recursion(char *s);`

FYI: The standard library provides a similar function: `puts`. Run
`man puts` to learn more.

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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `0-puts_recursion.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-914-users-done-modal .modal .fade .users-done-modal task-id="914" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"0. She locked away a secret, deep inside herself, something she once knew to be true\... but chose to forget\" {#students-who-are-done-with-0.-she-locked-away-a-secret-deep-inside-herself-something-she-once-knew-to-be-true...-but-chose-to-forget .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-914-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"0. She locked away a secret, deep inside herself, something she once knew to be true\... but chose to forget\" {#correction-of-0.-she-locked-away-a-secret-deep-inside-herself-something-she-once-knew-to-be-true...-but-chose-to-forget .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="914"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

::: {#task-num-1 data-role="task915" position="2"}
::: {#task-915 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 1. Why is it so important to dream? Because, in my dreams we are together {#why-is-it-so-important-to-dream-because-in-my-dreams-we-are-together .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that prints a string in reverse.

-   Prototype: `void _print_rev_recursion(char *s);`

```{=html}
<!-- -->
```
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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `1-print_rev_recursion.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-915-users-done-modal .modal .fade .users-done-modal task-id="915" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"1. Why is it so important to dream? Because, in my dreams we are together\" {#students-who-are-done-with-1.-why-is-it-so-important-to-dream-because-in-my-dreams-we-are-together .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-915-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"1. Why is it so important to dream? Because, in my dreams we are together\" {#correction-of-1.-why-is-it-so-important-to-dream-because-in-my-dreams-we-are-together .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="915"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

::: {#task-num-2 data-role="task916" position="3"}
::: {#task-916 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 2. Dreams feel real while we\'re in them. It\'s only when we wake up that we realize something was actually strange {#dreams-feel-real-while-were-in-them.-its-only-when-we-wake-up-that-we-realize-something-was-actually-strange .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that returns the length of a string.

-   Prototype: `int _strlen_recursion(char *s);`

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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `2-strlen_recursion.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-916-users-done-modal .modal .fade .users-done-modal task-id="916" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"2. Dreams feel real while we\'re in them. It\'s only when we wake up that we realize something was actually strange\" {#students-who-are-done-with-2.-dreams-feel-real-while-were-in-them.-its-only-when-we-wake-up-that-we-realize-something-was-actually-strange .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-916-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"2. Dreams feel real while we\'re in them. It\'s only when we wake up that we realize something was actually strange\" {#correction-of-2.-dreams-feel-real-while-were-in-them.-its-only-when-we-wake-up-that-we-realize-something-was-actually-strange .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="916"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

::: {#task-num-3 data-role="task917" position="4"}
::: {#task-917 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 3. You mustn\'t be afraid to dream a little bigger, darling {#you-mustnt-be-afraid-to-dream-a-little-bigger-darling .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that returns the factorial of a given number.

-   Prototype: `int factorial(int n);`\
-   If `n` is lower than `0`, the function should return `-1` to
    indicate an error\
-   Factorial of `0` is `1`

```{=html}
<!-- -->
```
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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `3-factorial.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-917-users-done-modal .modal .fade .users-done-modal task-id="917" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"3. You mustn\'t be afraid to dream a little bigger, darling\" {#students-who-are-done-with-3.-you-mustnt-be-afraid-to-dream-a-little-bigger-darling .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-917-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"3. You mustn\'t be afraid to dream a little bigger, darling\" {#correction-of-3.-you-mustnt-be-afraid-to-dream-a-little-bigger-darling .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="917"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

::: {#task-num-4 data-role="task918" position="5"}
::: {#task-918 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 4. Once an idea has taken hold of the brain it\'s almost impossible to eradicate {#once-an-idea-has-taken-hold-of-the-brain-its-almost-impossible-to-eradicate .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that returns the value of `x` raised to the power of
`y`.

-   Prototype: `int _pow_recursion(int x, int y);`\
-   If `y` is lower than `0`, the function should return `-1`

FYI: The standard library provides a different function: `pow`. Run
`man pow` to learn more.

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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `4-pow_recursion.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-918-users-done-modal .modal .fade .users-done-modal task-id="918" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"4. Once an idea has taken hold of the brain it\'s almost impossible to eradicate\" {#students-who-are-done-with-4.-once-an-idea-has-taken-hold-of-the-brain-its-almost-impossible-to-eradicate .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-918-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"4. Once an idea has taken hold of the brain it\'s almost impossible to eradicate\" {#correction-of-4.-once-an-idea-has-taken-hold-of-the-brain-its-almost-impossible-to-eradicate .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="918"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

::: {#task-num-5 data-role="task919" position="6"}
::: {#task-919 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 5. Your subconscious is looking for the dreamer {#your-subconscious-is-looking-for-the-dreamer .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that returns the natural square root of a number.

-   Prototype: `int _sqrt_recursion(int n);`\
-   If `n` does not have a natural square root, the function should
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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `5-sqrt_recursion.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-919-users-done-modal .modal .fade .users-done-modal task-id="919" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"5. Your subconscious is looking for the dreamer\" {#students-who-are-done-with-5.-your-subconscious-is-looking-for-the-dreamer .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-919-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"5. Your subconscious is looking for the dreamer\" {#correction-of-5.-your-subconscious-is-looking-for-the-dreamer .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="919"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

::: {#task-num-6 data-role="task920" position="7"}
::: {#task-920 .panel .panel-default .task-card}
[]{#user_id data-id="4445"}

::: {.panel-heading .panel-heading-actions}
### 6. Inception. Is it possible? {#inception.-is-it-possible .panel-title}

<div>

[ mandatory ]{.label .label-info}

</div>
:::

::: {.panel-body}
[]{#user_id data-id="4445"}

Write a function that returns `1` if the input integer is a [prime
number](https://alx-intranet.hbtn.io/rltoken/bjG_8Gu-_0rwbYA_tAv2Yw "prime number"),
otherwise return `0`.

-   Prototype: `int is_prime_number(int n);`

```{=html}
<!-- -->
```
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
:::

::: {.list-group}
::: {.list-group-item}
**Repo:**

-   GitHub repository: `alx-low_level_programming`
-   Directory: `0x08-recursion`
-   File: `6-is_prime_number.c`
:::
:::

::: {.panel-footer}
<div>

[]{.no} []{.yes} []{.pending} Done[?]{.no .pending}[!]{.yes}

Help

::: {#task-920-users-done-modal .modal .fade .users-done-modal task-id="920" project-id="219"}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Students who are done with \"6. Inception. Is it possible?\" {#students-who-are-done-with-6.-inception.-is-it-possible .modal-title}
:::

::: {.modal-body}
::: {.list-group}
:::

::: {.spinner}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::
:::
:::
:::
:::

Check your code

::: {#task-test-correction-920-correction-modal .modal .fade .task_correction_modal .student_modal}
::: {.modal-dialog}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Correction of \"6. Inception. Is it possible?\" {#correction-of-6.-inception.-is-it-possible .modal-title}
:::

::: {.modal-body}
::: {.actions}
::: {.alert .alert-info .hidden}
:::

Start a new test

Close

::: {.spinner style="display: none;"}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {.error}
:::

::: {.info}
:::
:::

::: {.result}
:::

::: {.help}

::: {.help-container task-id="920"}
::: {.check-line}
::: {.check-inline .requirement .success}
Requirement success
:::

::: {.check-inline .requirement .fail}
Requirement fail
:::
:::

::: {.check-line}
::: {.check-inline .code .success}
Code success
:::

::: {.check-inline .code .fail}
Code fail
:::
:::

::: {.check-line}
::: {.check-inline .efficiency .success}
Efficiency success
:::

::: {.check-inline .efficiency .fail}
Efficiency fail
:::
:::

::: {.check-line}
::: {.check-inline .answer .success}
Text answer success
:::

::: {.check-inline .answer .fail}
Text answer fail
:::
:::

::: {.check-line}
::: {.check-inline .requirement .fail .offline}
Skipped - Previous check failed
:::
:::
:::
:::
:::
:::
:::
:::

Get a sandbox

</div>
:::
:::
:::

[Done with the mandatory tasks? Unlock 2 advanced tasks
now!](https://alx-intranet.hbtn.io/projects/219/unlock_optionals){.btn
.btn-primary .btn-block}

::: {#container-specs-modal .modal .fade}
::: {.modal-dialog .modal-lg}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Recommended Sandbox {#recommended-sandbox .modal-title}
:::

::: {.modal-body}
::: {react-class="user_containers/ContainerSpecs" react-props="{\"containerModelName\":\"Sandbox\",\"containerSpecs\":[{\"description\":\"\\u003cp\\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\\u003c/p\\u003e\\n\",\"id\":39,\"name\":\"Ubuntu 20.04\",\"online\":true}],\"containersLimit\":1,\"csrfToken\":\"LLsANraTY9Vg27vv1XD/6ZFlOgsPqTdSKIH3aU8l2w8VX7PYO23NIsPMNLEPtP/mrKvmr4/b2IbEuPcvBGApDQ==\",\"startURI\":\"/user_containers/start.json\"}" react-cache-id="user_containers/ContainerSpecs-0"}
<div>

::: {.d-flex .gap-4 .sandboxes-filters}
[Running only]{.btn .btn-outline-primary}

::: {.align-items-center .d-flex style="position: relative; width: 100%;"}
:::
:::

::: {.mt-3}
### 1 image[(0/1 Sandbox spawned)]{.small}
:::

::: {.mt-3}
::: {.panel .panel-default}
::: {.panel-body}
::: {.align-items-center .d-flex .flex-wrap .justify-content-between}
<div>

### [Ubuntu 20.04]{.ml-2} {#ubuntu-20.04 .mt-0}

::: {.mt-2 .text-muted}
Basic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for
Foundations
:::

</div>

::: {.d-flex .flex-wrap .gap-5}
[Run]{.btn .btn-success}
:::
:::
:::
:::
:::

</div>
:::
:::
:::
:::
:::
:::
:::

::: {.copyright}
Copyright © 2022 ALX, All rights reserved.
:::
:::

::: {#search-modal .modal .fade tabindex="-1" role="dialog" aria-labelledby="search-modal-label"}
::: {.modal-dialog .modal-md}
::: {.modal-content}
::: {.modal-header}
::: {#search-bar-container}
:::
:::

::: {.modal-body}
::: {#modal-spinner .spinner .gap}
::: {.bounce1}
:::

::: {.bounce2}
:::

::: {.bounce3}
:::
:::

::: {#search-results-container}
:::
:::
:::
:::
:::

::: {#markdownGuideModal .modal .fade tabindex="-1" role="dialog" aria-labelledby="markdownGuideModalLabel" aria-hidden="true"}
::: {.modal-dialog .modal-md}
::: {.modal-content}
::: {.modal-header}
[×]{aria-hidden="true"}

#### Markdown Guide {#markdown-guide .modal-title}
:::

::: {.modal-body}
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
:::
:::
:::
:::