global hello_world

section .text

hello_world:
	mov rdi,0x1
	mov rsi,message
	mov rdx,message_length
	mov rax,0x1
	syscall
	ret

section .data
	message db "Hello, World!", 0xa
	message_length equ $-message
