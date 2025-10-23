class Produto:
    def __init__(self, nome, preco, quantidade):
        self.nome = nome
        self.preco = preco
        self.quantidade = quantidade

    def calcular_valorTotal(self):
        return self.preco * self.quantidade

    def atualizar_quantidade(self, nova_quantidade):
        self.quantidade = nova_quantidade

produto1 = Produto("Camiseta", 25.99, 50)
produto2 = Produto("Calça Jeans", 79.90, 30)
produto3 = Produto("Tênis", 129.99, 20)

print(f"Valor total de {produto1.nome}: R$ {produto1.calcular_valorTotal():.2f}")
print(f"Valor total de {produto2.nome}: R$ {produto2.calcular_valorTotal():.2f}")
print(f"Valor total de {produto3.nome}: R$ {produto3.calcular_valorTotal():.2f}")

print("\nAtualizando as quantidades...")

produto1.atualizar_quantidade(75)
produto2.atualizar_quantidade(25)
produto3.atualizar_quantidade(40)

print(f"Novo valor total de {produto1.nome}: R$ {produto1.calcular_valorTotal():.2f}")
print(f"Novo valor total de {produto2.nome}: R$ {produto2.calcular_valorTotal():.2f}")
print(f"Novo valor total de {produto3.nome}: R$ {produto3.calcular_valorTotal():.2f}")