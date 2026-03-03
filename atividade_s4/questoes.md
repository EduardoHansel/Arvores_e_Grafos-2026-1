**Questão 1**

O heap sort possui a mesma complexidade em todos os casos porque o heap binário limita a altura da árvore e cada 
operação heap é proporcional a essa altura, independente dos elementos ou da ordem inicial.
Já o shell sort não possui complexidade previsível porque ela depende fortemente no número de gaps utilizado e não 
há uma forma para determinar um número ideal.

---
**Questão 2**

atividade_s4/max_heap.c

---
**Questão 3**

Alternativa **A**

---
**Questão 4**

Para um sistema com milhões de registros, a melhor escolha é o heap sort, uma vez que sua complexidade não muda 
independente da ordenação inicial dos elementos, enquanto o shell sort não possui complexidade previsível e pode 
apresentar um desempenho inferior em sequências muito longas.

---

**Questão 5**

O Heap é usado como fila de prioridade em algoritmos de grafos como o Dijkstra, garantindo que o vértice de menor 
custo seja sempre processado primeiro, de forma eficiente em O(log n).