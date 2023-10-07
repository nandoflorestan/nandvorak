# plenopets – driver para teclado Dvorak em língua portuguesa

Este projeto contém o layout de teclado "plenopets", que foca na língua portuguesa mas também suporta polonês, espanhol, inglês e Esperanto.

As prioridades do plenopets são:

- Layout Dvorak.
- Teclas mortas para acentuação como no ABNT2...
- ...mas sem depender das 2 teclas adicionais que só existem no ABNT2! Compatibilidade com teclados us, pl, es etc. sem perder os glifos \|çÇ
- Suporte a múltiplas línguas europeias.


TODO
- PL: Mover o dead_ogonek (ąę) que hoje é AltGr+8 para um lugar mais acessível.
- PL: Ter todos os acentos do polonês. O ż (z dot above) era AltGr+Shift+7, z.
- EO: Ter todos os acentos do esperanto.
- ES: Garantir espanhol: https://blog.busuu.com/spanish-accents/
- cedilha com dead keys mais fácil, sem perder o ć. Hoje o dead cedilla é AltGr+9. Seria ótimo se fosse ~c
- Talvez não mudar de lugar -=] em relação ao QWERTY; mas isto é desviar do padrão Dvorak.


## Por que usar um leiaute de teclado Dvorak?

[Leia meu artigo a esse respeito.](http://dev.nando.audio/pages/teclado.html)


## Como é esse leiaute?

- Base Dvorak.
- O cê cedilha (çÇ) é AltGr+c; acento agudo resulta em ćĆ – para o polonês.
- O ndash – que serve para separar cláusulas assim – está em AltGr+- e o mdash está em AltGr+=. Este é mais longo e pode ser usado como travessão na escrita de ficção: — Legal!


.. image:: ./plenopets.png


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


## Instalação no Linux

O diretório de destino varia conforme a distribuição do Linux. Verifique se os layouts no teu caso estão neste diretório:

    ls /usr/share/X11/xkb/symbols/

Copie o arquivo para o diretório /usr/share/X11/xkb/symbols/:

    sudo cp xkb/symbols/plenopets /usr/share/X11/xkb/symbols/

...e reinicie o computador. O layout estará disponível para você o habilitar nas configurações de teclado do seu desktop environment.


## Créditos

Os arquivos deste projeto são de domínio público, resultado do trabalho de:

- [Nando Florestan](https://github.com/nandoflorestan)
  (código para Unix e documentação)


## Contribua

Ao fazer um *pull request* neste projeto, você concorda em doar o seu trabalho para o domínio público.

Algumas coisas que poderiam melhorar:

1) Seria ótimo se o cedilha pudesse ser obtido com a tecla morta tilde (til), mas só consegui fazer isso no Windows, não no XKB. Suspeito também que o efeito de ´c depende do locale do sistema: resultará em ć em todos os locales exceto pt_BR devido a uma exceção que hoje existe no arquivo /usr/share/X11/locale/pt_BR.UTF-8/Compose:

    #  Overriding C with acute:
    <dead_acute> <C>            : "Ç" Ccedilla  # LATIN CAPITAL LETTER C WITH CEDILLA
    <dead_acute> <c>            : "ç" ccedilla  # LATIN SMALL LETTER C WITH CEDILLA
