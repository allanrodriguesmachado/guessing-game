# Projeto Jogo de Adivinhação em C++

Bem-vindo ao projeto do Jogo de Adivinhação em C++. Este é um jogo de console simples no qual o jogador tenta adivinhar um número gerado aleatoriamente dentro de um intervalo predefinido. O jogo possui três níveis de dificuldade: Fácil, Médio e Difícil. Cada nível oferece uma quantidade diferente de chances para o jogador adivinhar o número correto. Além disso, a pontuação do jogador é calculada com base na proximidade do palpite em relação ao número secreto.

## Funcionalidades

- Escolha entre três níveis de dificuldade: Fácil, Médio e Difícil.
- O número a ser adivinhado é gerado aleatoriamente no intervalo de 0 a 100.
- Cada nível de dificuldade tem um número diferente de chances para adivinhar.
- A pontuação do jogador é calculada com base na precisão do palpite.
- Dicas são fornecidas para indicar se o número secreto é maior ou menor que o palpite do jogador.

## Regras do Jogo

1. Escolha o nível de dificuldade desejado: Fácil, Médio ou Difícil.
2. Um número será gerado aleatoriamente no intervalo de 0 a 100, com base no nível escolhido.
3. Você terá um número específico de chances para adivinhar o número correto, dependendo do nível de dificuldade escolhido.
4. Após cada palpite, você receberá uma dica se o número secreto é maior ou menor que o palpite.
5. Sua pontuação inicial será 1000.
6. A pontuação será ajustada com base na distância entre o número secreto e o palpite, usando a fórmula: pontuação -= abs(palpite - número_secreto) / 2.0.
7. O jogo terminará quando você adivinhar corretamente, ficar sem chances ou a sua pontuação atingir zero.

## Como Compilar e Executar

Certifique-se de ter um compilador C++ instalado no seu sistema. Você pode usar o **g++** ou qualquer outro compilador de sua preferência. Para compilar e executar o jogo, siga os passos abaixo:

1. Abra o terminal.
2. Navegue até o diretório onde o arquivo fonte (main.cpp) está localizado.
3. Execute o seguinte comando para compilar o jogo:
   
   ```bash
   g++ -o jogo main.cpp
   ```

   Isso criará um executável chamado "jogo".

4. Execute o jogo com o comando:

   ```bash
   ./jogo
   ```

## Contribuição

Este é um projeto simples desenvolvido para fins educacionais. Se você quiser contribuir com melhorias, correções de bugs ou novos recursos, sinta-se à vontade para criar um fork deste repositório, fazer as alterações e enviar um pull request.

Divirta-se jogando o Jogo de Adivinhação!
