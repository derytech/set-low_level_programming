global hello_alx
extern printf

section .data
    msg db "Hello, ALX", 10, 0

section .text
hello_alx:
    mov rdi, msg
    xor rax, rax
    call printf
    ret
