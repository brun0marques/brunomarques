Ponteiros são valores e podem ser passados para funções. Pode-se usar ponteiros para dar às funções acesso a variáveis passadas como argumentos. Se forem passados os ponteiros para a função "swap", esta poderá usá-los para acessar as variáveis e trocar seus valores.  Ponteiros para função se assemelham a functores, ainda que o conceito função objeto seja mais abrangente.
Exemplo de ponteiro para função:

 #include <stdio.h>
  
  void swap(int *i, int *j)
  {
     int t; 
     t = *i;
     *i = *j;
     *j = t;
  }
  void main()
  {
     int a,b;
     a=5;
     b=10;
     printf("%d %d\n",a,b);  
     swap(&a,&b);
     printf("%d %d\n",a,b);  
     return 0;
  }
- Referencia: 
http://tecnologia.hsw.uol.com.br/programacao-em-c26.htm
http://www.inf.pucrs.br/manssour/LinguagemC++/VetPontRef.pdf
http://pt.wikipedia.org/wiki/Ponteiro_%28programa%C3%A7%C3%A3o%29
http://www.ime.usp.br/~pf/algoritmos/aulas/pont.html
