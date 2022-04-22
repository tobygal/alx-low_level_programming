; 101-hello_holberton.asm
;
; Author: Tochi Azolike
; Date: 22-Apr-2022

extern printf ;brings in an external function printf
global main ;this calls the code main

section .data ;this stores the data to be used by the program
	outputstringfmt: db "%s", 0 ;this sets the format to string and returns 0
	message: db "Hello, Holberton", 0xA ;db stands for byte, 0xA is \n
	message_length equ $-message ;this calculates the len of the msg

section .text: ;this section contains the actual code

main: ;the code has to be named so you can call it
	push rbp ;push the old base pointer onto the stack
	mov rsi, message ;sets the msg as register source index and moves it to stack
	mov rdi, outputstringfmt ;sets register destination index as format, mov to stack
	mov rax, 0 ;the return value is moved to the stack
	call printf ;call the function printf
	pop rbp ;displays the value held in the base pointer ie the printf on stack top
	mov rax, 0 ;moves 0 to the return value
	ret ;exits the program
