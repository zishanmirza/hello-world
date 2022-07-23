extern hello_world

section .text

global _start

_start:
	call hello_world

	mov rax,0x0
	mov rdi,0x0
	syscall
