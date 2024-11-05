/*28. Analise os códigos abaixo e determine o valor das variáveis ao final da execução:
(a) 
 int i=34, j;
 int *p;
 p = &i;
 *p++;
 j = *p + 33;*/
//RESPOSTAS: i = 35, j = 68


/*(b) 
 int i=7, j=5;
 int *p;
 int **q;
 p = &i;
 q = &p;
 c = **q + j;*/
//RESPOSTAS: c = 12;


/*(c) 
 int x = 10;
 int y = 20;
 int *p, *q;
 p = &x;
 q = &y;
 *p = *p + *q;
 *q = *p - *q;*/
//RESPOSTAS: *p = 30(x agora é 30), *q = 10(y agora é 10)


/*(d) 
 int a = 5;
 int b = 7;
 int *p, *q;
 p = &a;
 q = &b;
 a = a + b;
 b = a - b;
 *p = *q + b;*/
//RESPOSTAS: a = 12, b = 5; *p = 10(a agora é 10), *q = 5(b agora é 5)