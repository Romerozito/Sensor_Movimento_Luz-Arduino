# Projeto Arduino

<br>

## Sensor de Movimento para acender uma lâmapda
<p align=justify>O obejetivo deste projeto, é utilizar um arduino para fazer o acionamento de uma lâmpada para iluminar o trajeto que percorro do portão da rua até a porta de casa, iluminando os 5 degrais e entre outros obstaculos que pode ter pelo caminho, para não precisar utilizar um interruptor convencional, irei utilizar 2 sensores de distancia, e um sensor de luminosidade, para a lâmpada ser acioanada realmente só quando nescessário.</p>

<br>

### Materiais utilizados:
- Arduino Uno (Modelo fabricado pela RoboCore: Blackboard)
- Biblioteca para arduino: NewPing
- Sensor LDR
- Resistor 10kΩ
- Sensor Ultrassonico
- Modulo Relé 
- Cabos de rede para as ligações

<p align=justify>Utilizando esses matériais, foi feito a ligação como descrito na imaegem a baixo. Para o codigo do arduino, é simples, primeiro é feito uma leitura da quantidade de luz no ambiente, e caso esse valor ser abaixo do definido, ou seja, se estiver escuro, o codigo continua, se não, ele fica verificando esse valor em Loop. Após essa primeira verificação, é feita agora a verificação dos sensores de distancia, utilizando a bibilioteca NewPing, para poder utilizar varios sensores em paralelo, caso algum desses sensores detecte algo, o codigo então acionara um rele para acender a luz por um determinado tempo, tempo suficiente para alguma pessoa percorrer todo o trajeto do ambiente.</p>

## Esquemático da ligação entre os componetes
![ligação](Esquema_ligacao_sensor_Movimento.png)

*Foi utilizado apenas 2 sensores ultrassonicos neste projeto, mas é possivel adicionar quantos quiser, apenas mudandos os valores nas variaves*
<br>

<br>

### Ideias para o futuro
<p align=justify>Futuramente, a ideia para fazer atualizações neste projeto é mudar o modelo do arduino UNO para um arduino mini ou nano, pelo custo beneficio e seu pequeno tamanho. Outra implementação que gostaria de fazer, é adcionar um modulo Wi-fi ESP8266, para poder fazer o acionamento da luz, via algum app ou pagina web, e também monitorar o acionamento e movimentação pelos sensores.</p>

<br>

### Sugestões
<p align=justify>Caso você tenha sugestões e ideias para implementar/acrescentar em meu projeto, por favor entre em contato, eu adoraria discutir e ouvir! <a href=mailto:viniciusdename@hotmail.com>Me mande um email</a> </p>
<br>
<br>

<p align=center>©Romerozito</p>
<p align=center>Itirapina/SP - 2021</p>
