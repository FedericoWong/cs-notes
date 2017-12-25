	.file	"exchange.c"
	.text
	.globl	exchange
	.type	exchange, @function
exchange:
.LFB0:
	.cfi_startproc
	movq	(%rdi), %rax
	movq	%rsi, (%rdi)
	ret
	.cfi_endproc
.LFE0:
	.size	exchange, .-exchange
	.globl	scale
	.type	scale, @function
scale:
.LFB1:
	.cfi_startproc
	leaq	(%rdi,%rsi,4), %rcx
	leaq	(%rdx,%rdx,2), %rdx
	leaq	0(,%rdx,4), %rax
	addq	%rcx, %rax
	ret
	.cfi_endproc
.LFE1:
	.size	scale, .-scale
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.5) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
