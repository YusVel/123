section .data
extern var
my

section .text
global asmfunc
asmfunc:
	mov al, [var]
	mul al
	mov dx, ax
	mov bl, [var]
	movzx bx, bl
	imul bx, bx, 4
	add dx, bx
	sub dx, 5
	mov ax, dx
	ret
