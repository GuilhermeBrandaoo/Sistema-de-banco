# 🏦 Sistema Bancário em C

![C Language](https://img.shields.io/badge/Linguagem-C-blue?style=for-the-badge&logo=c) 
![Status](https://img.shields.io/badge/Status-Concluido-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/Licenca-MIT-orange?style=for-the-badge)

> 💡 Projeto desenvolvido para prática de **C**, **lógica de programação**, **arrays**, **strings** e **controle de fluxo**.

---

## ✨ Funcionalidades

| ✅ Função      | Descrição |
|----------------|------------|
| 🔐 **Login**   | Usuário e senha predefinidos (`admin` / `1234`). Até 3 tentativas. |
| 💰 **Depósito** | Adiciona valor à conta e registra operação no extrato. |
| 🏧 **Saque**   | Permite retirar valor (apenas se houver saldo) e registra operação. |
| 💵 **Saldo**   | Mostra saldo atual da conta. |
| 📄 **Extrato** | Lista todas as operações realizadas e saldo final. |
| 🚪 **Sair**    | Encerra o programa. Pergunta se deseja continuar após cada operação. |

---

## 💻 Estrutura do Código

- **Variáveis principais**
  - `usuario[20]` / `senha[20]` → guardam login do usuário.
  - `saldoConta` → saldo atual da conta.
  - `extrato[100][50]` → armazena até 100 operações.
  - `numOperacoes` → conta as operações realizadas.
  - `continuar` → resposta do usuário para continuar no menu.

- **Funções importantes**
  - `strcmp()` → compara strings (usuário e senha).  
  - `sprintf()` → cria linhas formatadas para o extrato.  
  - `system("cls")` → limpa a tela no Windows.  

---

## 🚀 Como Executar

1. Clone ou baixe o repositório.  
2. Abra no **Dev C++**, **Code::Blocks** ou outro compilador C.  
3. Compile o programa.  
4. Execute o programa.  
5. Faça login com:
   - **Usuário:** `admin`
   - **Senha:** `1234`
6. Escolha a opção desejada no menu.

---

## 🖱️ Menu Interativo

| 🔢 Opção | 📝 Descrição | Emoji |
|-----------|-------------|-------|
| 1         | Depósito    | 💰 |
| 2         | Saque       | 🏧 |
| 3         | Saldo       | 💵 |
| 4         | Extrato     | 📄 |
| 5         | Sair        | 🚪 |

---

## 📷 Capturas de Tela

**Login**

<img width="441" height="213" alt="imagem1_admin_1234" src="https://github.com/user-attachments/assets/1129d7be-54e5-4bb0-858e-f42dcd8cd3b1" />

**Erro usuario e senha**

<img width="442" height="301" alt="imagembloqueio" src="https://github.com/user-attachments/assets/24f3d37f-be71-4dda-bca0-5256398c9394" />


**Menu**

<img width="380" height="217" alt="imagem2_menu" src="https://github.com/user-attachments/assets/2934a83b-3813-4e22-bf8f-8f8c0d20d813" />

**Depósito**

<img width="382" height="286" alt="imagem3_opcao1" src="https://github.com/user-attachments/assets/85ca96e6-ce5a-4ce8-bf93-e5e2eddf2d79" />

**Saque**

<img width="414" height="290" alt="imagem4_opcao2" src="https://github.com/user-attachments/assets/72f0fe77-817f-47a0-9eb3-231c2a9d736b" />

**Saldo**

<img width="404" height="275" alt="imagem 5_opcao3" src="https://github.com/user-attachments/assets/d9f16280-50f3-4129-b8c0-1d111839d451" />

**Extrato**

<img width="434" height="305" alt="imagem5_opcao3" src="https://github.com/user-attachments/assets/7b49885a-b2e1-40c7-aa3c-7ec84d511ab5" />

**Sair**

<img width="475" height="270" alt="imagem6_opcao4" src="https://github.com/user-attachments/assets/767fcd5f-f8b9-4856-be46-91610925ce1d" />




## 🧩 Dificuldades e Aprendizados

Durante o desenvolvimento, enfrentei algumas dificuldades, que se tornaram grandes aprendizados:

1. **Comparação de Strings (`strcmp`)**
   - Aprendi que `==` não compara strings em C.
   - `strcmp(str1, str2)` retorna `0` quando são iguais.

2. **Laços de Repetição (`do...while`)**
   - Útil para executar o menu pelo menos uma vez antes de checar a condição.

3. **Arrays de Strings**
   - `extrato[100][50]` permite armazenar várias operações.
   - `sprintf()` formata cada operação antes de guardar.

4. **Formatação de Saída (`printf` / `sprintf`)**
   - Usei `%.2f` para valores monetários com 2 casas decimais.

5. **Controle de Fluxo no Menu**
   - Variáveis `opcao` e `continuar` permitem continuar ou sair do menu sem reiniciar o programa.

💡 **Conclusão:**  
Essas dificuldades ajudaram a consolidar conceitos de **C**, **arrays**, **strings**, **loops** e **formatação de saída**.

---

## ⚠️ Observações

- `system("cls")` funciona apenas no **Windows**.  
- Extrato suporta até **100 operações**.  
- Usuário e senha suportam até **19 caracteres**.  
- Programa ideal para **aprendizado e prática de lógica em C**.

---

## 👨‍💻 Autor

- **Guilherme Brandão**  
- GitHub: ([https://github.com/seu-usuario](https://github.com/GuilhermeBrandaoo))

---

## 🎯 Próximas Melhorias

- 🔄 Transferência entre contas  
- 💾 Salvar extrato em arquivo externo  
- 🎨 Interface gráfica simples com bibliotecas C







