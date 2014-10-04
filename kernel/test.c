#include <unistd.h>
#include <sys/syscall.h>
#include <linux/ptree.h>
#include <asm/unistd.h>
#include <sys/types.h>
#include <linux/kernel.h>
//#include "arch/arm/kernel/calls.S"
#include <stdio.h>
#define _GNU_SOURCE
#define __NR_ptre 223

void main() {
	printf("hmmm....\n");
	syscall(__NR_ptre);//sys_ptree);
}
	
