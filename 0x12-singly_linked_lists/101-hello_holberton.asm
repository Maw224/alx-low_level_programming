mov rdi, format
mov rsi, message
mov al, 0

format: db "%s", 0
message: db "Hello, Holberton", 0
