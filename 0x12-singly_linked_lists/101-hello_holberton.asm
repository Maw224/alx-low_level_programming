SECTION .data
str_fmt: db "%s", 10, 0
message: db "Hello, Holberton", 0

SECTION .text
extern printf
global main

main:
mov rdi, str_fmt
mov rsi, message
mov al, 0
call printf
