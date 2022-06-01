extern hello_world

section .text

global _start

_start:
	call hello_world

	mov eax,0
	mov ebx,0
	int 0x80
