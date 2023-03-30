mov rdi, format
mov rsi, message
mov al, 0

extern printf
call printf

format: db "%s", 0
message: db "Hello, Holberton", 0
