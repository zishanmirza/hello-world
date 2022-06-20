global hello_world

section .text

hello_world:
	mov rax,0x1
	mov rdi,0x1
	mov rsi,message
	mov rdx,message_length
	syscall
	ret

section .data
	message db "Hello, World!", 0xa
	message_length equ $-message
