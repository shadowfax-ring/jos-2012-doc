#include <stdio.h>

void test1()
{
	asm("pushq %rax\n\t"
		"movq $0, %rax\n\t"
		"popq %rax");
}

void test2()
{
	asm("movq %rax, %rbx");
	asm("xorq %rbx, %rdx");
	//asm("movq $0, _booga");
}

int main()
{
	test1();
	test2();

	return 0;
}
