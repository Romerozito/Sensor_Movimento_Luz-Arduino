# Projeto Arduino

### Sensor de Movimento para acender uma luz

Materiais:
- Arduino Uno (Modelo fabricado pela RoboCore: Blackboard)
- Biblioteca para arduino: NewPing
- Sensor LDR
- Sensor Ultrassonico
- Relé 5vdc 

<p>Utilizando esses materiais, foi desenvolvido um codigo onde verifica a quantidade de luz no local, e determina se todo o projeto vai funcionar ou não. Após a verificação da luz no local, o codigo entra em um loop, verificando cada sensor ultrassonico, e se caso ele detectar alguma movimentação, ele aciona o relé que deixa a energia passar para uma lâmpada, e após um determinado tempo, interrompe a energia para a lâmpada, e volta ao seu loop de detcção de movimento com os sensores</p>

<br>

<p>foi utilizado apenas 2 sensores ultrassonicos neste projeto, mas é possivel adicionar quantos quiser, apenas mudandos os valores nas variaves</p>