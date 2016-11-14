@ HelloWorld.s
@
@------------------
@     Data Section
@-----------------


	.data
string: .asciz "\nHello World!\n"


@-----------------
@     Code Section
@----------------

	.text
	.global main
	.extern printf


main:                           /* Start of main code */

	push {ip, lr}
        ldr  r0, =string
        bl printf

        pop {ip, pc}
