class Aluno:
    def __init__(self, nome, matricula):
        self.nome = nome
        self.matricula = matricula
        self.cursos = []

    def adicionar_curso(self, curso):
        if curso not in self.cursos:
            self.cursos.append(curso)
            print(f"Aluno '{self.nome}' adicionado ao curso '{curso.nome}'.")
        else:
            print(f"Aluno '{self.nome}' já está matriculado no curso '{curso.nome}'.")

    def listar_cursos(self):
        if self.cursos:
            print(f"Cursos de '{self.nome}':")
            for curso in self.cursos:
                print(f"- {curso.nome}")
        else:
            print(f"'{self.nome}' não está matriculado em nenhum curso.")

class Curso:
    def __init__(self, nome, codigo):
        self.nome = nome
        self.codigo = codigo
        self.turmas = []

    def adicionar_turma(self, turma):
        if turma not in self.turmas:
            self.turmas.append(turma)
            print(f"Curso '{self.nome}' adicionado à turma '{turma.identificador}'.")
        else:
            print(f"Curso '{self.nome}' já está presente na turma '{turma.identificador}'.")

    def listar_turmas(self):
        if self.turmas:
            print(f"Turmas do curso '{self.nome}':")
            for turma in self.turmas:
                print(f"- {turma.identificador}")
        else:
            print(f"O curso '{self.nome}' não possui turmas associadas.")

class Turma:
    def __init__(self, identificador, capacidade):
        self.identificador = identificador
        self.capacidade = capacidade
        self.alunos = []
        self.cursos = []

    def adicionar_aluno(self, aluno):
        if len(self.alunos) < self.capacidade:
            if aluno not in self.alunos:
                self.alunos.append(aluno)
                print(f"Aluno '{aluno.nome}' adicionado à turma '{self.identificador}'.")
                aluno.adicionar_curso(self.cursos[0]) 
            else:
                print(f"Aluno '{aluno.nome}' já está na turma '{self.identificador}'.")
        else:
            print(f"A turma '{self.identificador}' atingiu sua capacidade máxima ({self.capacidade} alunos).")

    def adicionar_curso(self, curso):
        if curso not in self.cursos:
            self.cursos.append(curso)
            print(f"Curso '{curso.nome}' adicionado à turma '{self.identificador}'.")
        else:
            print(f"Curso '{curso.nome}' já está associado à turma '{self.identificador}'.")

    def listar_alunos(self):
        if self.alunos:
            print(f"Alunos na turma '{self.identificador}':")
            for aluno in self.alunos:
                print(f"- {aluno.nome} (Matrícula: {aluno.matricula})")
        else:
            print(f"A turma '{self.identificador}' não possui alunos.")

    def listar_cursos_da_turma(self):
        if self.cursos:
            print(f"Cursos da turma '{self.identificador}':")
            for curso in self.cursos:
                print(f"- {curso.nome}")
        else:
            print(f"A turma '{self.identificador}' não possui cursos associados.")

aluno1 = Aluno("Ana Silva", "2023001")
aluno2 = Aluno("Pedro Souza", "2023002")
aluno3 = Aluno("Carla Oliveira", "2024001")

curso1 = Curso("Engenharia de Software", "ES001")
curso2 = Curso("Ciência da Computação", "CC002")

turmaA = Turma("TMA01", 3)
turmaB = Turma("TMB02", 2)

aluno1.adicionar_curso(curso1)
aluno1.adicionar_curso(curso2)
aluno2.adicionar_curso(curso1)
aluno3.adicionar_curso(curso2)

print("\n--- Listagem de cursos dos alunos ---")
aluno1.listar_cursos()
aluno2.listar_cursos()
aluno3.listar_cursos()

turmaA.adicionar_curso(curso1)
turmaB.adicionar_curso(curso2)
turmaA.adicionar_curso(curso2) 

print("\n--- Listagem de turmas dos cursos ---")
curso1.listar_turmas()
curso2.listar_turmas()

turmaA.adicionar_aluno(aluno1)
turmaA.adicionar_aluno(aluno2)
turmaA.adicionar_aluno(aluno3) 
turmaA.adicionar_aluno(aluno1) 
turmaB.adicionar_aluno(aluno2)
turmaB.adicionar_aluno(aluno3)

print("\n--- Listagem de alunos nas turmas ---")
turmaA.listar_alunos()
turmaB.listar_alunos()

print("\n--- Listagem de cursos das turmas ---")
turmaA.listar_cursos_da_turma()
turmaB.listar_cursos_da_turma()