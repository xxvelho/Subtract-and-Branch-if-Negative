# Subtract-and-Branch-if-Negative
Single Instruction ISA*

# sbn a,  b,  c

sbn significa "subtrair e ramificar se negativo". Aqui, a e b são locais de memória. Esta instrução subtrai b de a, salva os resultados em a, e se a < 0, ele pula para a instrução no local c no tabela de instruções. Caso contrário, o controle é transferido para a próxima instrução.
