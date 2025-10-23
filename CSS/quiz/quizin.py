print('O número é primo!')
resposta = int(input('Escreva um número^^ :'))
if resposta != 23:
    print('Resposta errada... Próxima dica :3 :')
else:
    print('Wow que sorte! Você acertou de primeira! ÒwÓ ')
    exit()    
print()
print('O algarismo presente na casa da unidade desse número é também um número primo!')
resposta = int(input('Escreva um número^^ :'))
while resposta !=23:
    print('Tente outra vez! OwO')
    resposta2 = int(input('Pense bem e screva um número novamente! Não desista <3 :'))
    if resposta2 >23:
        print('O número é menor que esse ^^')
    else:
        print('O número é maior que esse^^')
    resposta2 = int(input('Pense bem e screva um número novamente! Não desista <3 :'))
    if resposta2 != 23:
        print()
    else:
        print('Parabéns! Você consegiu achar o número secreto!!ÒwÓ')
        break
