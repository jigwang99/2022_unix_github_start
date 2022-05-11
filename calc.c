#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int main() {
	char c;
	int a, b;
	scanf("%c %d %d",&c, &a, &b);
	switch(c){
		case '+' : printf("%d", add(a, b)); break;
		case '-' : printf("%d", sub(a, b)); break;
	}

}

