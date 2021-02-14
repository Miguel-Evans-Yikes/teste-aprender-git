#Recebe uma função mais interna e a retorna.
def soma(a, b):
    def soma_c(c):
        return a+b+c
    return soma_c

soma_5 = soma(2,3)
print(soma_5(50))
#O processo de execução da função pode ser feito dessas duas formas.
print(soma(2,3)(50))