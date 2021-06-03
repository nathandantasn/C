#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int x;

void calc (float a, float b, char oper, float *resp)
{
	switch (oper)
	{
		case '+':
			*resp = a + b; break;
		case '-':
			*resp = a - b; break;
		case '*':
			*resp = a * b; break;
		case '/':
			*resp = a / b; break;
		default:
			printf ("operador inválido \n"); break;
	}
}

int main()
{

  float x, y, result = 0;

  char operador;
  int cont;

  setlocale(LC_ALL, "Portuguese");

  printf ("Programa Calculadora \n\n");
  do
  {
	printf ("\nDigite o primeiro numero: ");
	scanf ("%f", &x);

	printf ("Digite o segundo numero: ");
	scanf ("%f", &y);

	printf ("Digite a operação desejada (+ para soma; - para subtração; * para multiplicação; / para divisão): ");
	scanf ("%s", &operador);

	calc(x, y, operador, &result);

	if (operador == '+')
	{
	  	printf ("O resultado da soma é: %.1f", result);
	}
	else if (operador == '-')
	{
	  	printf ("O resultado da subtração é: %.1f", result);
	}
	else if (operador == '*')
	{
	 	printf ("O resultado da multiplicação é: %.1f", result);
	}
	else if (operador == '/')
	{
	  	printf ("O resultado da divisão é: %.1f", result);
	}
	else
	{
	printf ("Você digitou uma operação inválida e o cálculo não pode ser realizado.");
	}
	printf ("\nDigite 0 fazer um listName = []
listAge = []
listAcess = []
listUser = []

print("\nBem-vindo ao Recipeen, vamos iniciar seu cadastro! ")

name = str(input("\nDigite seu nome: "))
while len(name) < 3:
    print("Seu nome deve conter ao menos 3 caracteres!")
    name = str(input("Digite seu nome: "))
listName.append(name)

lastName = str(input("\nDigite seu sobrenome: "))
while len(lastName) < 3:
    lastName = str(input("Digite seu nome: "))
listName.append(lastName)

age = int(input("\nDigite sua idade: "))
while age < 12:
    print("Para usar a rede social você deve ter mais de 12 anos!")
    age = int(input("Digite sua idade: "))
listAge.append(age)

email = str(input("\nDigite seu e-mail: "))
email2 = str(input("Confirme seu e-mail: "))
while email2 != email:
    print("Os e-mails não são iguais!")
    email2 = str(input("Por favor, confirme seu e-mail: "))
listAcess.append(email)

password = str(input("\nDigite sua senha: "))
password2 = str(input("Confirme sua senha: "))
while password2 != password:
    print("As senhas não são iguais!")
    password2 = str(input("Por favor, confirme sua senha: "))
listAcess.append(password)

listUser.append(listName)
listUser.append(listAge)
listUser.append(listAcess)

print("\nDados coletados:")
for linha in listUser:
    print(linha)novo cálculo ");
	scanf ("%d", &cont);
  }
  while (cont == 0);
  return (0);
}
