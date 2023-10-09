# Nandvorak – driver para teclado Dvorak em língua portuguesa

Este projeto contém o layout de teclado "Nandvorak", que tem base Dvorak, foca na língua portuguesa mas também suporta espanhol, francês, alemão e Esperanto.

As prioridades do Nandvorak são:

- Layout Dvorak.
- Teclas mortas para acentuação como no ABNT2...
- ...mas sem precisar das 2 teclas adicionais que só existem no ABNT2! Compatibilidade com teclados menores sem perder o acesso aos importantes glifos çÇ\|
- Suporte ao português, evidentemente.
- Suporte ao alfabeto polonês: ąĄ ęĘ ćĆ łŁ ńŃ óÓ śŚ źŹ żŻ
- Suporte ao Esperanto: ĉĈ ĝĜ ĥĤ ĵĴ ŝŜ ŭŬ
- Suporte ao espanhol: ñÑ
- Suporte ao francês: àÀ, Ââ, æÆ, çÇ, éÉ, èÈ, êÊ, ëË
- Suporte ao alemão: äÄ öÖ üÜ ßẞ
- Rica escolha de glifos extra.
- Não tirar a mão do lugar: são dadas alternativas a teclas distantes como Escape.

TODO
- Não precisar segurar Nav.
- Navegação
- Til+c = ccedilha
- Adir o Nandvorak à lista (GUI).
- Enviar ao projeto XKB.
- Versão Wayland.
- Versão para Windows 11.

## Por que usar um leiaute de teclado Dvorak?

[Leia meu artigo a esse respeito.](http://dev.nando.audio/pages/teclado.html)


## Como é esse leiaute?

- Baseado no Dvorak.
- O cê cedilha (çÇ) é AltGr+c; acento agudo resulta em ćĆ – para o polonês.
- O teclado numérico oferece setas e glifos matemáticos.
- O ndash – que serve para separar cláusulas assim – está em AltGr+- e o mdash está em AltGr+=. Este é mais longo e pode ser usado como travessão na escrita de ficção: — Legal!


TODO
.. image:: ./Nandvorak.png

TODO ilustração do teclado numérico

### Teclas mortas

- Teclas mortas para acentuação, como no ABNT2, ficam no mindinho direito. Mas há muitas outras teclas mortas.

TODO

### Para não tirar as mãos do lugar

- Escape e CapsLock trocam de lugar, pois Esc é muito mais utilizada.
- As duas teclas Alt, usadas com o polegar, selecionam camadas. Somadas ao Shift, dão acesso a 8 camadas no total.
- BackSpace + Shift disparam Delete.

### O segundo teclado (via Caps Lock)

TODO ilustração


## Status do projeto

- [para Linux e assemelhados via XKB](xkb/)
- Pretendo adicionar versão para Windows 10 em breve.

Mas e os **outros sistemas operacionais**?

Colaboração *open source* é bem-vinda e por isso é que os fontes estão no
`github <https://github.com/nandoflorestan/teclado-br>`_.
Para quaisquer outras ideias, pode
`criar um ticket <https://github.com/nandoflorestan/teclado-br/issues>`_. Contribua!


## Instalação no Linux

O diretório do XKB varia conforme a distribuição do Linux. Os leiautes brasileiros ficam num arquivo chamado "br". Verifique se os layouts no teu caso estão neste diretório:

    ls /usr/share/X11/xkb/symbols/

Renomeie o arquivo "br" existente, à guisa de backup:

    sudo mv /usr/share/X11/xkb/symbols/br /usr/share/X11/xkb/symbols/br-backup

Substitua-o pelo nosso arquivo "br":

    sudo cp xkb/symbols/br /usr/share/X11/xkb/symbols/

Você pode trocar o layout através do comando setxbmap. Exemplos:

    setxkbmap br nandvorak    # novo
    setxkbmap br dvorak       # versão antiga
    setxkbmap br abnt2        # qwerty brasileiro
    setxkbmap epo             # qwerty esperanto
    setxkbmap us dvorak-intl
    setxkbmap us dvorak-alt-intl
    # Você pode descobrir outros layouts via tab completion.

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


## Lições que eu aprendi

- Tecla mapeada para Escape, combinada com AltGr, funciona no terminal, mas não no Sublime Text.
- Não adianta tentar que o Shift_R dispare Escape porque assim você perde o Shift_R que é muito importante para fazer maiúsculas com todas as letras da mão esquerda.
- Não adianta tentar fazer ⇐⇑⇒⇓ com AltGr. O Sublime Text não reage, o Vim já tem e o Alt+L já está tomado pelo łŁ do polonês. (o Vim usa HJKL para direções.)
- Não funciona no Sublime Text Backspace combinado com AltGr.
