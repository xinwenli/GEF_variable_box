#include "stdio.h"
#include "stdlib.h"

void foo() {
	char f = 0x66;
	printf("f address in foo: %p, value: %x\n", &f, f);
	return;
}

int main() {
	char* cmd;
	char a = 0x61;
	int b = 0x62;
	unsigned int c = 0x63;
	long d = 0x64;
	unsigned long e = 0x65;
	char buf[20];
	printf("a address: %p, value: %x\n", &a, a);
	printf("b address: %p, value: %x\n", &b, b);
	printf("c address: %p, value: %x\n", &c, c);
	printf("d address: %p, value: %lx\n", &d, d);
	printf("e address: %p, value: %lx\n", &e, e);
	foo();
	cmd = malloc(20);
	fgets(cmd, 20, stdin);
	system(cmd);
	return 0;
}
