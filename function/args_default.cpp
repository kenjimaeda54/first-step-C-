#include <iostream>

// para definier argumentos padrão e so colocar  igual
// a regra e da esquerda para direita,se possuir default na equerda precisa possuir a direita se exiter args
// assim daria erro ==> void mult(int a, int b = 0, int c)
// porque o b possui e o c nao possui default
void mult(int a, int b, int z = 10);

int main()
{

	mult(3, 3);
	mult(2, 3, 5);

	return 0;
}

void mult(int a, int b, int z)
{

	a *= 10;
	b *= 10;
	z *= 10;

	std::cout << "(" << a << "-" << b << "-" << z << ")" << std::endl;
}
