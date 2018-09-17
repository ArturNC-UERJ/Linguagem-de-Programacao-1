#ler n1 e n2, exibir todos os numeros entre eles
def ler():
    while True:
        try:
            n1 = int(input("Digite N1: "))
            n2 = int(input("Digite N2: "))
            break
        except:
            print ("Dado invalido! Tente novamente...")
    return n1, n2
def exibir(n1, n2):
    if n1 < n2:
        for n in range( n1+1 , n2 ):
            print (n)
    elif n1 > n2:
        for n in range( n1-1 , n2 , -1 ):
            print (n)
    else:
        print ("Nao ha numeros entre os valores inseridos")
#PRINCIPAL
n1, n2 = ler()
exibir(n1, n2)
