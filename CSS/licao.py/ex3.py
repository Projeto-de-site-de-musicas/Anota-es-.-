class Produto:
    def __init__(self, nome, preco):
        self.nome = nome
        self.preco = preco

    def __str__(self):
        return f"{self.nome} - R$ {self.preco:.2f}"

class CarrinhoDeCompras:
    def __init__(self):
        self.itens = []

    def adicionar_produto(self, produto, quantidade=1):
        for i in range(quantidade):
            self.itens.append(produto)
        print(f"{quantidade} unidade(s) de '{produto.nome}' adicionada(s) ao carrinho.")
        self.exibir_valor_total()

    def remover_produto(self, produto):
        if produto in self.itens:
            self.itens.remove(produto)
            print(f"Uma unidade de '{produto.nome}' removida do carrinho.")
            self.exibir_valor_total()
        else:
            print(f"'{produto.nome}' não encontrado no carrinho.")

    def exibir_valor_total(self):
        valor_total = sum(item.preco for item in self.itens)
        print(f"Valor total do carrinho: R$ {valor_total:.2f}\n")

    def exibir_itens(self):
        if self.itens:
            print("Itens no carrinho:")
            for item in self.itens:
                print(f"- {item}")
        else:
            print("O carrinho está vazio.")
        self.exibir_valor_total()

produto1 = Produto("Camiseta", 25.99)
produto2 = Produto("Calça Jeans", 79.90)
produto3 = Produto("Tênis", 129.99)

carrinho = CarrinhoDeCompras()

carrinho.adicionar_produto(produto1)
carrinho.adicionar_produto(produto2, 2)
carrinho.adicionar_produto(produto3)

carrinho.exibir_itens()

carrinho.remover_produto(produto1)
carrinho.remover_produto(Produto("Camiseta", 25.99)) 

carrinho.exibir_itens()

carrinho.adicionar_produto(produto1, 3)

carrinho.exibir_itens()