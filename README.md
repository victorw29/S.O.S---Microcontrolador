# 1. Objetivo do Projeto
# O objetivo deste projeto é implementar a transmissão do sinal S.O.S em código Morse 

utilizando um LED conectado a um pino GPIO da Raspberry Pi Pico W. O sinal S.O.S 
consiste em três pontos (...), seguidos por três traços (---), e termina com três pontos 
novamente (...). O LED piscará de acordo com os seguintes tempos:

 Ponto (.): O LED acende por 200ms.

 Traço (-): O LED acende por 800ms.

 GAP: Intervalo entre pontos e traços dentro da mesma letra, de 125ms.

 Intervalo entre letras: 250ms.

 Pausa após o sinal: 3000ms.

O código foi desenvolvido utilizando a linguagem C e foi simulado na plataforma 
Wokwi Web e no Visual Studio Code integrado ao Wokwi, sendo posteriormente 
testado na Raspberry Pi Pico W.

# 2. Configuração do Ambiente de Desenvolvimento
Antes de iniciar o desenvolvimento do código, foi necessário configurar o ambiente de 
desenvolvimento. Abaixo estão as ferramentas e plataformas utilizadas:

 Plataforma de Desenvolvimento: Raspberry Pi Pico W.

 Editor de Código: Visual Studio Code (VSCode).

 Simulação: Wokwi Web, uma plataforma que permite simular placas como a 
Raspberry Pi Pico W.

 Linguagem de Programação: C.

 Plataforma de Simulação: Wokwi, uma ferramenta online para simulação de 
circuitos e microcontroladores.

# Para configurar o ambiente:
1. Instalação do Visual Studio Code: O VSCode foi instalado no computador, 
junto com a extensão do Wokwi para permitir a integração e simulação.

3. Configuração do Wokwi: A conta no Wokwi foi criada e o projeto foi 
configurado com a Raspberry Pi Pico W. No Wokwi, a simulação foi feita 
conectando um LED ao pino GPIO 12 (poderia ser 11 ou 13) da Raspberry Pi 
Pico W.
