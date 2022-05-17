//Variaveis:

num_inicial = **		        // ex: 7
resto = num_inicial			// ex: 7
divisor = num_inicial - 1		// ex: 7-1 = 6
temp = 0
one = 1
aux = 0

//Código:

1:  sbn temp, temp, 2			// temp = 0
2:  sbn aux, aux, 3			// aux = 0
3:  sbn resto, divisor, 5		// resto -= divisor (dividindo)
4:  sbn temp, one, 1			// volta pra linha 1
5:  sbn aux, divisor, 6		        // aux = - divisor
6:  sbn resto, aux, 7			// resto -= aux --> resto += divisor
7:  sbn resto, one, exit		// resto < zero, é divisivel
8:  sbn divisor, one, exit		// proximo numero pra analizar se é multiplo
9:  sbn resto, resto, 10		// resto = 0
10: sbn aux, aux, 11			// aux = 0
11: sbn aux, num_inicial, 12		// aux = -num_inicial
12: sbn resto, aux, 13			// resto -= aux = num_inicial 
13: sbn temp, temp, 14			// temp = 0
14: sbn temp, one, 1			// volta pra 1


/*

Lógica ultilizada:
Um número é múltiplo de outro, quando a resto da divisão é igual a zero.

Mas como achar o resto da divisão usando apenas subtração?
Se você notar o resto da divisão é o próprio dividendo, ou seja, o próprio número inicial subtraído x vezes.

Mas como eu posso saber o resto, sendo que eu apenas controlo o loop se ele for negativo?
Simples! Basta somar com o divisor e você vai ter o resto correto, positivo.

Ex:
2 é o divisor

7-2  =  5	// 1
5-2  =  3	// 2	
3-2  =  1	// 3 (3 é o quociente da divisão)
1-2  = -1
		
-1+2 =  1	// (1 é resto da divisão.)

resto - 1 >= 0  // ou seja, não é divisivel.

Tá! Mas como saber se é primo a partir disso?
Basta subtrair 1 do resto. Se for negativo, significa que o resto era zero, ou seja, é multiplo.
Se o loop terminar e a caixinha do divisor for diferente de 1, significa que que o número é composto.
Se for igual a 1, é primo!
Porque o número é primo apenas se ele é divisivel por 1 e ele mesmo.

Ex:
2 é o  divisor

6-2 =  4	// 1
4-2 =  2	// 2
2-2 =  0	// 3 (3 é o quociente da divisão)
0-2 = -2

-2+2 = 0        // resto da divisão

resto - 1 < 0   // ou seja, é divisivel. (número composto)

*/
