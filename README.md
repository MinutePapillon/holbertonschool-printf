![image](https://github.com/user-attachments/assets/9ba65ca9-b0da-46da-bd3f-5c3446d1326e)
# Project Holberton School Printf
* The goal of this project is to do our own printf function
* This function only handles 5 specifier:
`%s`
`%c`
`%%`
`%d`
`%i`
## Compilation and how to use :
* U need to compile the code like the following :
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
* And then u just need to do ./a.out wich is the output
* If u need a special test or something different than the main.c testing file u can go and modify, it it will not affect the code.
* If u need it copy the main.c we have under this message.
```
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
```
## Requirements :
* U need to have unbuntu installed and copy the following repo
* https://github.com/MinutePapillon/holbertonschool-printf.git
* If u need help on the code with more information u can always do **man man_3_printf**
## Exemples :
* Now that u have evrything set up lets try something out
* Be sure to do _printf and not the actual printf
```
_printf("Let's try to printf a simple sentence.\n");
```
![image](https://github.com/user-attachments/assets/b3d53bca-225d-4ea3-8805-caaef30213e2)
* And as u can see we have the good output :D
```
Let's try to printf a simple sentence.
```
![image](https://github.com/user-attachments/assets/aeddc3e9-ad56-417e-84bb-31571f7a94a7)
# Conclusion
* During this projet we had to work in teams wich some were 3 and others 2 so we had to learn and organize evrything wich was quite hard
* This projet was long and tidious but we managed to do it thanks to my tm8
* Thank you for you're attention and reading all this (don't forget to see the flowchart)

