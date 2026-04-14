
# Biblioteca     LED


Bibliote  simples para controlae nnão bloqueante de LED com Arduino e ESP32. 

a classe 'LED' permite: 

- ligar o LED continuamente 
- ligar por um tempo determinado 
- apagar
- alternar estado 
- piscar continuamente 
- piscar uma quanidade definida de vezes


o funcionamento  é não bloqueante , usando `millis()`.
Por isso , o método `update()` deve ser chamado repetidamente dentro do `loop()`.

---

## Estrutura da Biblioteca


```text
LED/
├── exemples
├── src
│    ├── LED.cpp
│    └──LED.h
├── library.json
├── LICENSE
└── README.md
