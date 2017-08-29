## Monitoria

Data: 2017-08-29

# Como configurar o Upstream do Spacewar

1. Confira seus ramos origin e upstream

$ git remote -v

2. Caso o ramo upstream esteja com o seu nome (ex: git@github.com:seu.user.github/spacewar.git), voce precisa atualizar ele.

$ git remote set-url upstream git@github.com:BecoSystems/spacewar.git

3. Caso o ramo origin esteja atualizado para o BecoSystems, altere para o seu usuario.

$ git remote set-url origin git@github.com:seu.user.github/spacewar.git

ex: git remote set-url origin git@github.com:daidson/spacewar.git

4. Por fim, verifique que seu upstream e origin estao atualizados

$ git remote -v

5. Voce deve ver como upstream: BecoSystems e origin: seu.user.github

