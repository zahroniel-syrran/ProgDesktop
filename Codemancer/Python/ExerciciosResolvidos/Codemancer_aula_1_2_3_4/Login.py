# Verificação de login: Crie um programa que só permita acesso se o usuário for "python" e a senha "123".


usuario = input("Usuário: ")
senha = input("Senha: ")

if usuario == "python" and senha == "123":
    print("Acesso permitido!")
else:
    print("Usuário ou senha incorretos.")

# 👉 Verificação direta com and.