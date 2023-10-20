section .data

	hello db 'Hello, Holbelton', 0  ; null-terminated string


section .text
	global main
	extern printf
	extern exit

main:

	mov rdi, hello ; set the format string
	mov rax, 0	; syscall printf
	call printf    ; call the printf function

	;exit the program

	mov rax, 60	;syscall: exit

	xor rdi, rdi	; status: 0

	syscall
