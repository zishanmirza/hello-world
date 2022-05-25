global _start

extern hello_world

section .text

_start:
	call hello_world

	mov eax,0
	mov ebx,0
	int 0x80
