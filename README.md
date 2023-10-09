# Nandvorak – layout de teclado Dvorak em língua portuguesa

Este projeto contém o layout de teclado "Nandvorak", que tem base Dvorak, foca na língua portuguesa mas também suporta espanhol, francês, alemão, polonês e Esperanto.

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


## Por que usar um leiaute de teclado Dvorak?

Ele tem as letras mais usadas na *home row*, a linha central. Você digita 70% de um texto sem tirar a mão dessa linha. As vogais estão na mão esquerda e as consoantes na mão direita; isto aumenta o paralelismo entre as mãos. Estas são só algumas de muitas ideias que concorrem para o Dvorak ser bem mais confortável.

[Leia meu artigo a esse respeito.](http://dev.nando.audio/pages/teclado.html)

![Diagrama de um teclado Dvorak](https://dev.nando.audio/_images/teclado-dvorak-br.png)

## Como é esse leiaute?

- Dvorak com teclas mortas para acentuação, como o ABNT2 – porém compatível com hardware que tenha menos teclas.
- O cê cedilha (çÇ) é AltGr+c; acento agudo resulta em ćĆ – para o polonês.
- O teclado numérico oferece setas e glifos matemáticos.
- O ndash – que serve para separar cláusulas assim – está em AltGr+- e o mdash está em AltGr+=. Este é mais longo e pode ser usado como travessão na escrita de ficção: — Legal!

```
// ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┲━━━━━━━━━┓
// │ " ˝ │ ! ¡ │ @ ½ │ # ¾ │ $ ¼ │ % ‰ │ ¨ ¬ │ & ̣  │ * ̛  │ ( ̉  │ ) ˘ │ {  ̦ │ } ° ┃Backspace┃
// │ ' ˇ │ 1 ¹ │ 2 ² │ 3 ³ │ 4 ⁴ │ 5 ⁵ │ 6 ⁶ │ 7 ⁷ │ 8 ⁸ │ 9 ⁹ │ 0 ⁰ │ [ ª │ ] º ┃ ⌫       ┃
// ┢━━━━━┷━┱───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┺━┳━━━━━━━┫
// ┃ Tab   ┃ ? ¿ │ < « │ > » │ P Π │ Y ¥ │ F ‘ │ G ’ │ C Ç │ R ™ │ L Ł │ ` ¸ │ + ± ┃ ⏎     ┃
// ┃ ↹     ┃ / \ │ , ≤ │ . ≥ │ p π │ y £ │ f “ │ g ” │ c ç │ r ® │ l ł │ ´ ˛ │ = — ┃ Enter ┃
// ┣━━━━━━━┻┱────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┺┓      ┃
// ┃ Escape ┃     │     │     │     │     │     │  ⇐  │  ⇓  │  ⇑  │  ⇒  │     │     ┃      ┃
// ┃ (ex-   ┃ A Æ │ O Œ │ E € │ U Ŭ │ I © │ D   │ H ¶ │ T   │ N Ŋ │ S ẞ │ ^   │ _ § ┃      ┃
// ┃ CapsLk)┃ a æ │ o œ │ e   │ u ŭ │ i | │ d   │ h   │ t   │ n ŋ │ s ß │ ~ ˙ │ - – ┃      ┃
// ┣━━━━━━┳━┹───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┲━┷━━━━━┻━━━━━━┫
// ┃Shift ┃ Ç | │ : ̭  │ Q Ə │ J Ʒ │ K ‹ │ X › │ B   │ M µ │ W „ │ V ‚ │ Z ‛ ┃ Shift        ┃
// ┃ ⇧    ┃ ç \ │ ; ̭  │ q ə │ j ʒ │ k   │ x   │ b   │ m   │ w   │ v   │ z ‟ ┃ ⇧            ┃
// ┣━━━━━━┻┳━━━━┷━━┳━━┷━━━━┱┴─────┴─────┴─────┴─────┴─────┴────┲┷━━━━━╈━━━━━┻┳━━━━━━┳━━━━━━┫
// ┃ Ctrl  ┃ Alt   ┃ Nav   ┃ ␣ Space            Nobreakspace ⍽ ┃AltGr ┃Multi ┃ Ctxt ┃ Ctrl ┃
// ┃       ┃ ex-Sup┃ ex-Alt┃ ␣ Space            Nobreakspace ⍽ ┃      ┃      ┃ Menu ┃      ┃
// ┗━━━━━━━┻━━━━━━━┻━━━━━━━┹───────────────────────────────────┺━━━━━━┻━━━━━━┻━━━━━━┻━━━━━━┛
```

TODO ilustração do teclado numérico, que tem setas e símbolos matemáticos

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
`github <https://github.com/nandoflorestan/nandvorak>`_.
Para quaisquer outras ideias, pode
`criar um ticket <https://github.com/nandoflorestan/nandvorak/issues>`_. Contribua!


## Instalação no Linux

O diretório do XKB varia conforme a distribuição do Linux. Os leiautes brasileiros ficam num arquivo chamado "br". Verifique se os layouts no teu caso estão neste diretório:

    ls /usr/share/X11/xkb/symbols/

Adicione ali o nosso arquivo "custom". A presença de um arquivo "custom" (desenvolvido pelo usuário) é expressamente prevista pelo XKB.

    sudo cp xkb/symbols/custom /usr/share/X11/xkb/symbols/

Também pode fazer um link simbólico ao invés de copiar o arquivo.

Você pode trocar o layout através do comando setxbmap. Exemplos:

    setxkbmap br dvorak            # versão antiga: BRDK
    setxkbmap custom               # Nandvorak
    setxkbmap custom nandvorak     # Nandvorak (o mesmo)
    setxkbmap custom epo-nandvorak # Nandvorak Esperanto
    setxkbmap br abnt2             # qwerty brasileiro
    setxkbmap epo                  # qwerty esperanto
    setxkbmap us dvorak-intl       # Dvorak sem suporte ao português
    setxkbmap us dvorak-alt-intl   # Dvorak sem suporte ao português
    # Você pode descobrir outros layouts via tab completion.

O uso dos comandos acima faz o applet "Keyboard" do Linux Mint capotar e sumir da barra.

### Por enquanto só via setxkbmap

Por enquanto, eu só consigo que o teclado funcione se uso o comando acima.

Atualmente, no Linux Mint, se eu carrego o teclado pela tela "Keyboard" (procurando por "custom"), infelizmente ele carrega errado:

- As camadas AltGr não funcionam.
- A tecla CapsLock, ao invés de funcionar apenas como Escape, funciona como CapsLock simultaneamente.


## Créditos

Os arquivos deste projeto são de domínio público, resultado do trabalho de:

- [Nando Florestan](https://github.com/nandoflorestan)
  (código para Unix e documentação)


## Contribua

Ao fazer um *pull request* neste projeto, você concorda em doar o seu trabalho para o domínio público.

**TODO**

- Navegação: Home, End, PgUp, PgDown
- Adir o Nandvorak à lista (GUI).
- Enviar ao projeto XKB.
- Versão Wayland.
- Versão para Windows 11.

Algumas coisas que poderiam melhorar:

1) Seria ótimo se o cedilha pudesse ser obtido com a tecla morta tilde (til), mas só consegui fazer isso no Windows, não no XKB. Suspeito também que o efeito de ´c depende do locale do sistema: resultará em ć em todos os locales exceto pt_BR devido a uma exceção que hoje existe no arquivo /usr/share/X11/locale/pt_BR.UTF-8/Compose:

```
    #  Overriding C with acute:
    <dead_acute> <C>            : "Ç" Ccedilla  # LATIN CAPITAL LETTER C WITH CEDILLA
    <dead_acute> <c>            : "ç" ccedilla  # LATIN SMALL LETTER C WITH CEDILLA
```

## Lições que eu aprendi

- Tecla mapeada para Escape, combinada com AltGr, funciona no terminal, mas não no Sublime Text.
- Não adianta tentar que o Shift_R dispare Escape porque assim você perde o Shift_R que é muito importante para fazer maiúsculas com todas as letras da mão esquerda.
- Não adianta tentar fazer ⇐⇑⇒⇓ com AltGr. O Sublime Text não reage, o Vim já tem e o Alt+L já está tomado pelo łŁ do polonês. (o Vim usa HJKL para direções.)
- Não funciona no Sublime Text o Backspace combinado com AltGr.
