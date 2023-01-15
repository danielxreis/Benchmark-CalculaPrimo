# Benchmark-CalculaPrimo

## [1.0.0] - 14/12/2022
- Primeira versão

Scripts para benchmark, que calculam números primos, atualmente em Python, Dart e C++.

**Metodologia:** Os scripts nas línguas Python, Dart e C++ tentam seguir estrutura o mais próxima possível. Criam uma função chamada "calculaPrimo"  e com ela, vão calcular se um número é primo ou não. Se for primo, será adicionado em uma lista e esta será exibida ao final de cada rodada. C

No fim de cada rodada, o próprio IDE retorna o tempo de execução do scripts em segundos/1000. A partir disso, registra-se 10 rodadas seguidas de cálculos de 0 a 100, 1.000, 10.000, 100.000 e 1.000.000.

## [Resultados](/Resultados.xlsx)

- O que faz Python ter um benchmark tão interessante até os 10 mil números ? Quantidade de números?
- Porque quando passa aí entre 10 mil e 100 mil, ele perde TANTO desempenho?
- Se for meramente um cálculo de fibonnaci, que é mais simples, python continuará a perder desempenho?
- Até onde vale o custo de desempenho x benefício de legibilidade?
- O fato das variáveis serem definidas dinamicamente em Python e estritas em Dart e C++ é o que garante desempenho superior em maior quantidade de números?
- Se forem definidos os tipos de variáveis em Python, vamos obter desempenho?
  
- Se a faixa for entre 100.000 e 110.000, o desempenho do Python continuará bom?