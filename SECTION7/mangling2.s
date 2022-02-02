	.file	"mangling2.cpp"
	.text
	.globl	_square
	.def	_square;	.scl	2;	.type	32;	.endef
_square:
	pushl	%ebp
	movl	%esp, %ebp
	movl	8(%ebp), %eax
	imull	8(%ebp), %eax
	popl	%ebp
	ret
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	call	___main
	movl	$3, (%esp)
	call	_square
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (i686-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
