mov rdi, fmt
mov rsi, message
mov al, 0

extern printf
call printf

fmt: db "%s", 0
message: db "Hello, Holberton", 0
