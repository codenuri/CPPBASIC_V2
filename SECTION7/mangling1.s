	.file	"mangling1.cpp"
	.text
	.globl	__Z6squarei
	.def	__Z6squarei;	.scl	2;	.type	32;	.endef
__Z6squarei:
	pushl	%ebp
	movl	%esp, %ebp
	movl	8(%ebp), %eax
	imull	8(%ebp), %eax
	popl	%ebp
	ret
	.globl	__Z6squared
	.def	__Z6squared;	.scl	2;	.type	32;	.endef
__Z6squared:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	8(%ebp), %eax
	movl	%eax, -8(%ebp)
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
	fldl	-8(%ebp)
	fmull	-8(%ebp)
	leave
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
	call	__Z6squarei
	fldl	LC1
	fstpl	(%esp)
	call	__Z6squared
	fstp	%st(0)
	movl	$0, %eax
	leave
	ret
	.section .rdata,"dr"
	.align 8
LC1:
	.long	1717986918
	.long	1074423398
	.ident	"GCC: (i686-win32-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
