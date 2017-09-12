# Monitoria

Data: 2017-08-29

## Como configurar o Upstream do Spacewar

### Caso 1: Configurando um Upstream novo.

1. Voce precisara adicionar um novo Upstream na BecoSystems

$ git remote add upstream git@github.com:BecoSystems/spacewar.git

2. Confira se seus ramos estao configurados com Upstream: BecoSystems e Origin: seu nome de usuario do github

$ git remote -v

### Caso 2: Reconfigurando o Upstream a partir de um ja configurado.

1. Confira seus ramos Origin e Upstream

$ git remote -v

2. Caso o ramo Upstream esteja com o seu nome (ex: git@github.com:seu.user.github/spacewar.git), voce precisa atualizar ele.

$ git remote set-url upstream git@github.com:BecoSystems/spacewar.git

3. Caso o ramo Origin esteja atualizado para o BecoSystems, altere para o seu usuario.

$ git remote set-url origin git@github.com:seu.user.github/spacewar.git

ex: git remote set-url origin git@github.com:daidson/spacewar.git

4. Por fim, verifique que seu Upstream e Origin estao atualizados

$ git remote -v

5. Voce deve ver como Upstream: BecoSystems e Origin: seu.user.github

## Como atualizar seu repositorio do Spacewar (fork)

1. Primeiro, certifique-se que seus ramos estao configurados.

Ver item anterior.

2. Capture a imagem dos arquivos que devem ser atualizados.

$ git fetch upstream master

3. Puxe os arquivos para seu local.

$ git pull upstream master

## Em caso de duvidas, entrar em contato com

Monitor: Daidson Fonseca Alves

E-mail: daidson.alves@gmail.com

Github: @daidson

Username Hydra: dfa

