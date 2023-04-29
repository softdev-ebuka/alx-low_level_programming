section .data
hello db "Hello, Holberton", 0x0a ; null-terminated string for printf

section .text
global main
extern printf

main:
push rbp ; set up stack frame
mov rbp, rsp
mov rdi, hello ; 1st argument: address of the format string
xor eax, eax ; clear EAX register to indicate no floating point arguments
call printf ; call printf function
xor eax, eax ; set return value to 0
pop rbp ; tear down stack frame
ret ; return from function
