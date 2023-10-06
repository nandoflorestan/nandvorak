# ptpleo – driver para teclado Dvorak em língua portuguesa

Este projeto contém o layout de teclado "ptpleo", que foca na língua portuguesa mas também suporta polonês, esperanto e inglês.


## Por que usar um leiaute de teclado Dvorak?

[Leia meu artigo a esse respeito.](http://dev.nando.audio/pages/teclado.html)


## Como é esse leiaute?

.. image:: ./ptpleo.png


### Teclas mortas

TODO


## Status do projeto

- [para Linux e assemelhados via XKB](xkb/)
- Pretendo adicionar versão para Windows 10 em breve.

Mas e os **outros sistemas operacionais**?

Colaboração *open source* é bem-vinda e por isso é que os fontes estão no
`github <https://github.com/nandoflorestan/teclado-br>`_.
Para quaisquer outras ideias, pode
`criar um ticket <https://github.com/nandoflorestan/teclado-br/issues>`_. Contribua!


## Créditos

Os arquivos deste projeto são de domínio público, resultado do trabalho de:

- [Nando Florestan](https://github.com/nandoflorestan)
  (código para Unix e documentação)


## Contribua

Ao fazer um *pull request* neste projeto, você concorda em doar o seu trabalho para o domínio público.


## Instalação no Linux

O diretório de destino varia conforme a distribuição do Linux. Verifique se os layouts no teu caso estão neste diretório:

    ls /usr/share/X11/xkb/symbols/

Copie o arquivo para o diretório /usr/share/X11/xkb/symbols/:

    sudo cp xkb/symbols/ptpleo /usr/share/X11/xkb/symbols/

...e reinicie o computador. O layout estará disponível para você o habilitar nas configurações de teclado do seu desktop environment.
