# Monitor de Pulso Cardíaco

## Descrição do Problema de Saúde

Este projeto aborda a monitorização do pulso cardíaco utilizando um sensor de pulso. O código implementa uma solução simples para acender um LED quando o pulso ultrapassa um determinado limiar, indicando uma possível detecção de batimentos cardíacos.

## Visão Geral da Solução

O código utiliza um Arduino Uno R3 e um sensor de pulso para medir os níveis de pulsação. Quando o valor lido pelo sensor ultrapassa 600, o LED vermelho conectado ao pino 11 é aceso brevemente, indicando um possível batimento cardíaco detectado.

## Configuração e Execução

### Componentes Necessários:

- Sensor de Pulso
- Arduino Uno R3 - U3
- LED Vermelho - D1
- Resistor de 220 Ω - R1

### Instruções de Montagem:

1. Conecte o sensor de pulso no lugar do transistor PNP (BJT) T1, caso esteja usando um sensor de pulso em vez do transistor.
2. Conecte o LED Vermelho (D1) ao pino 11 do Arduino, usando um resistor de 220 Ω (R1) para limitar a corrente.
3. Carregue o código para o Arduino Uno R3 (U3) usando o Arduino IDE.
4. Alimente o Arduino e observe o LED acender quando um pulso é detectado.

### Visualização no Tinkercad:

Você pode visualizar a montagem do projeto no Tinkercad [aqui](https://www.tinkercad.com/things/eutsuIDznwr-sensor-cardiaco).

### Observações:

- Certifique-se de ajustar os valores no código conforme necessário para otimizar a detecção de pulsação de acordo com as características do seu sensor.

