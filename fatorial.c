num = ***                     // numero pra calcular o fatorial
temp = 0
sum = 0
one = 1
counter =  ***                // depende de num
fatorial = 0
loop =  ***		      // depende de num
aux = 0

1:   sbn temp, temp, 2        // temp = 0
2:   sbn aux, aux, 3          // aux = 0
3:   sbn temp, num, 4         // temp = -num
4:   sbn sum, temp, 5         // sum = -temp = -(-num) --> sum = num
5:   sbn counter, one 8       // loop* secundario
6:   sbn temp, temp, 7        // temp = 0
7:   sbn temp, one, 1         // vai pra linha 1
8:   sbn loop, one, exit      // loop* principal, exit
9:   sbn aux, sum, 10         // aux = -sum
10:  sbn fatorial, aux, 11    // fatorial = -(-aux) --> fatorial = aux = sum
11:  sbn num, num, 12         // num = 0
12:  sbn aux, aux, 13         // aux = 0
13:  sbn aux, fatorial 14     // aux = -fatorial
14:  sbn num, aux, 15         // num = fatorial (novo numero para somar com o loop menor)
15:  sbn aux, aux, 16	      // aux = 0
16:  sbn aux, one, 1	      // vai pra linha 1


/*

Obs: na linha 14 (num = fatorial) pra acumular as somas Ex: fatorial de 5 (5+5+5+5=20; 20+20+20=60; 60+60=120)
Exemplos:
Se num = 5, counter = 2, loop = 3;
Se num = 7, counter = 4, loop = 6;

*/
