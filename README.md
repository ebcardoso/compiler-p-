# compiler-p-plus-plus
Compilador da Linguagem P++, criada para o trabalhos da disciplina DIM0611

**Grupo:** <br />

Breno Cardoso, <br />
Lucas Simonetti, <br />
Renato Nascimento, <br />
Sidemar Fideles. <br />

**Comandos do Makefile:**

make <br />
make test <br />
make quick <br />
make merge <br />
make clean <br />
 
**Gramática dummy:** <br />

S -> AB | B <br />
A -> aA | c <br />
B -> bB | EPSILON <br />

**Tabela de predição:**  <br />
 
:) | **a** | **c** | **b** | **$**
--- | --- | --- | --- | ---
**S** | AB | AB | B | error
**A** | aA | c | error | error
**B** | error | error | bB | EPSILON

**Exemplos derivações válidas:**  <br />

b  <br />
bbb  <br />
acb  <br />
acbbb  <br />
aaacbb  <br />
