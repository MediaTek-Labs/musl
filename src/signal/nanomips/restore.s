.linkrelax
.module pic1
.set    noreorder
.global __restore
.global __restore_rt
.type   __restore,@function
.type   __restore_rt,@function
__restore:
__restore_rt:
	li $t4, 139	# __NR_rt_sigreturn
	syscall32
