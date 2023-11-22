# *C - Printf*

### Table of contents

- [Description](#description)
- [Files](#files)
- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)
- [Resources](#resources)
- [Credits](#credits)

## Description

This is my `printf` project for *Holberton Coding School*. The task for this project was to make my own version of the `printf` function, called `_printf`. This function sends formatted output to the standard output but doesn't accept the following format tags: *<ins>flags*</ins>, *<ins>width</ins>*, *<ins>precision</ins>*, and *<ins>length</ins>*.

## Files

- README.md - File that contains project description.
- main.h - Header file containing function prototypes.
- _printf.c - File containing the _printf function, which produces an output according to a format.
- prnt_c.c - File with function that prints *character* cases.
- prnt_d.c - File with function that prints *integer* cases.
- prnt_str.c - File with function that prints *string* cases.
- man_3_printf.c - File that contains function manual.

*`Main.c` file <ins>not</ins> included.*

## Features

- String format specifiers (`%s`, `%c`, `%%`).
- Integer format specifiers (`%d`, `%i`).
- Handling of special cases (`NULL` strings, negative numbers, etc.).

## Usage

Before using the `_printf` function in your project, include the provided header file:

```c
#include "main.h"
```

Include the `_printf` *prototype* in the `main.h` header file:

```c
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _printf(const char *format, ...); <---

#endif /* MAIN_H */
```

Then, call the function including the desired format specifier and any additional arguments:

```c
int age = 10;
    _printf("%d\n", age);
```

## Examples

Here's an example of using the `_printf` function:

```c
#include <stdio.h>

int main()
{
  int age;

  _printf("John is %d years old.\n", age);
}
```

## Resources

- *[Secrets of printf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20231122%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20231122T011940Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=2b236319015304bc030fe950cdc539ad291b13edb1eb194100df5521da3c82d2)*

## Credits

- *[Jonathan Pérez](https://github.com/prodjohnper)*
