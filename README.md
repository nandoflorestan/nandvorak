# Nandvorak – layout de teclado Dvorak multilíngue

Este projeto contém o layout de teclado "Nandvorak", que tem base Dvorak e suporta estas línguas:

- Português, com teclas mortas como as do ABNT2.
- Espanhol: ñÑ
- Francês: àÀ, Ââ, æÆ, çÇ, éÉ, èÈ, êÊ, ëË
- Alemão: äÄ öÖ üÜ ßẞ
- Polonês: ąĄ ęĘ ćĆ łŁ ńŃ óÓ śŚ źŹ żŻ
- Esperanto: ĉĈ ĝĜ ĥĤ ĵĴ ŝŜ ŭŬ

As outras **prioridades do Nandvorak** são:

- **Layout Dvorak**, que traz mais conforto de múltiplas maneiras.
- Teclas mortas para acentuação no mindinho direito, como no ABNT2...
- ...mas sem precisar das 2 teclas adicionais que só existem no ABNT2! Compatibilidade com teclados menores sem perder o acesso aos importantes glifos ç Ç \\ |
- **Não tirar a mão do lugar.** São dadas alternativas a teclas distantes como Escape, Page Up, Home, Delete...
- Uso do polegar: é muito mais ergonômico segurar teclas com o polegar do que com o mindinho.
- Layout apropriado para escritores, programadores e poliglotas.
- Tecla Compose para muitos glifos extra.


## Por que usar um leiaute de teclado Dvorak?

O leiaute Dvorak tem as letras mais usadas na *home row*, a linha central.
Você digita 70% de um texto sem tirar a mão dessa linha.
As vogais estão na mão esquerda e as consoantes na mão direita;
isto aumenta o paralelismo entre as mãos. Estas são só algumas de muitas
ideias que concorrem para o Dvorak ser bem mais confortável.

[Leia meu artigo a esse respeito.](http://dev.nando.audio/pages/teclado.html)

![Diagrama de um teclado Dvorak](https://dev.nando.audio/_images/teclado-dvorak-br.png)


## Como é esse leiaute?

- Dvorak com teclas mortas para acentuação que, como no ABNT2, ficam no mindinho direito. Mas há muitas outras teclas mortas.
- A tecla cê cedilha (çÇ) só existe em teclados ABNT2. Quem não a tem pode usar AltGr + ;. Geralmente a tecla morta de acento agudo gera ćĆ – para o polonês.

```
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┲━━━━━━━━━┓
│ " ˝ │ ! ¡ │ @ ½ │ # ¾ │ $ ¼ │ % ‰ │ ¨ ¬ │ & ̣  │ * ̛  │ ( ̉  │ ) ˘ │ {  ̦ │ } ° ┃Backspace┃
│ ' ˇ │ 1 ¹ │ 2 ² │ 3 ³ │ 4 ⁴ │ 5 ⁵ │ 6 ⁶ │ 7 ⁷ │ 8 ⁸ │ 9 ⁹ │ 0 ⁰ │ [ ª │ ] º ┃ ⌫       ┃
┢━━━━━┷━┱───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┺━┳━━━━━━━┫
┃ Tab   ┃ ? ¿ │ < « │ > » │ P ‘ │ Y ’ │ F Ŝ │ G Ĝ │ C Ĉ │ R ™ │ L Ł │ ` ¸ │ + ± ┃ Enter ┃
┃ ↹     ┃ / \ │ , ≤ │ . ≥ │ p “ │ y ” │ f ŝ │ g ĝ │ c ĉ │ r ® │ l ł │ ´ ˛ │ = — ┃   ⏎   ┃
┣━━━━━━━┻┱────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┺┓      ┃
┃ Esc or ┃ A Æ │ O Œ │ E NO│ U Ŭ │ I © │ D › │ H ⇐ │ T ⇓ │ N ⇑ │ S ⇒ │ ^   │ _ § ┃      ┃
┃ CapsLk ┃ a æ │ o œ │ e NO│ u ŭ │ i | │ d ‹ │ h ⇐ │ t ⇓ │ n ⇑ │ s ⇒ │ ~ ˙ │ - – ┃      ┃
┣━━━━━━┳━┹───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┲━┷━━━━━┻━━━━━━┫
┃Shift ┃ Ç | │ : Ç │ Q Ĥ │ J Ĵ │ K BS│X Del│ B ẞ │ M Ho│ W Pg│ V Pg│ Z En┃ Shift        ┃
┃ ⇧    ┃ ç \ │ ; ç │ q ĥ │ j ĵ │ k BS│x Del│ b ß │ m me│ w Dn│ v Up│ z  d┃ ⇧            ┃
┣━━━━━━┻┳━━━━┷━━┳━━┷━━━━┱┴─────┴─────┴─────┴─────┴─────┴────┲┷━━━━━╈━━━━━┻┳━━━━━━┳━━━━━━┫
┃ Ctrl  ┃ Super ┃ Alt   ┃ _ Underline        ⍽ Nobreakspace ┃AltGr ┃Multi ┃ Ctxt ┃ Ctrl ┃
┃       ┃       ┃       ┃ ␣ Space            _ Underline    ┃      ┃      ┃ Menu ┃      ┃
┗━━━━━━━┻━━━━━━━┻━━━━━━━┹───────────────────────────────────┺━━━━━━┻━━━━━━┻━━━━━━┻━━━━━━┛
```

- O ndash – que serve para separar cláusulas assim – está em AltGr+-
- O mdash está em AltGr+=. É mais longo, pode ser usado como travessão na escrita de ficção: — Legal!
- O sublinhado, importante em programação, está não só no lugar de sempre (Shift+-) mas
  também em Shift+Espaço e em AltGr+Espaço.
- Todos os glifos acentuados do Esperanto estão disponíveis com AltGr: ŭĉĝĥĵŝ.
- O teclado numérico oferece setas e glifos matemáticos:

```
┌─────┬─────┬─────┬─────┐
│ Num │ ∕   │ ⋅   │ −   │
│ Lck │ / ÷ │ * × │ - − │
├─────┼─────┼─────┼─────┤
│   ⇖ │   ⇑ │   ⇗ │     │
│ 7 ↖ │ 8 ↑ │ 9 ↗ │     │
├─────┼─────┼─────┤  +  │
│   ⇐ │   ⇔ │   ⇒ │     │
│ 4 ← │ 5 ↔ │ 6 → │     │
├─────┼─────┼─────┼─────┤
│   ⇙ │   ⇓ │   ⇘ │  E  │
│ 1 ↙ │ 2 ↓ │ 3 ↘ │  n  │
├─────┴─────┼─────┤  t  │
│           │ Del │  e  │
│ 0         │ .   │  r  │
└───────────┴─────┴─────┘
```


### Para não tirar as mãos do lugar

No uso do computador, velocidade, conforto e resistência dependem da economia de movimentos. As seguintes medidas promovem essa economia:

- Escape e CapsLock devem trocar de lugar, refletindo a frequência de seu uso. Isto é opcional. Mais abaixo mostro como fazer isso.
- As 2 camadas de glifos mais raros são ativadas segurando AltGr com ou sem Shift.
- A camada AltGr oferece navegação estilo Vim: as 4 teclas em que repousam os 4 dedos da mão direita tornam-se setas. As 4 teclas abaixo destas equivalem a teclas de navegação distantes: Home, Page Down, Page Up, End.
- Todas as pessoas que digitam muito rápido usam a combinação Ctrl+Backspace, que apaga a palavra inteira ao invés de uma letra só. Em alta velocidade, é mais fácil digitar novamente a palavra errada do que editá-la, porque redigitar não requer compreensão do erro. E o apagamento assim também é mais rápido do que ficar repetindo a tecla Backspace. Mas vi que ambas as teclas dessa combinação são muito distantes e difíceis de alcançar. Então, AltGr + E dispara essa combinação. Eu a chamo de "acorde NO". Fácil de usar porque fica diretamente sob o dedo médio da mão esquerda.
- A tecla Delete também está repetida como AltGr + X (B no QWERTY).
- BackSpace com Shift disparam Delete.


## Status do projeto

- [para Linux e assemelhados via XKB](xkb/)
- Pretendia adicionar versão para Windows, porém a MS tem sucateado seu sistema operacional a um tal ponto que eu duvido que eu volte a usá-lo – mesmo para as atividades em que ele ainda é superior.

Mas e os **outros sistemas operacionais**?

Colaboração *open source* é bem-vinda e por isso é que os fontes estão no [github](https://github.com/nandoflorestan/nandvorak).
Para quaisquer outras ideias, pode [criar um ticket](https://github.com/nandoflorestan/nandvorak/issues). Contribua!


## Instalação no Linux

A instalação é igual para Wayland e servidor X.

O diretório do XKB varia conforme a distribuição do Linux.
Os leiautes brasileiros ficam num arquivo chamado "br".
Verifique se os layouts no teu caso estão neste diretório:

    ls /usr/share/X11/xkb/symbols/

Adicione ali o nosso arquivo "custom".
A presença de um arquivo "custom" (desenvolvido pelo usuário) é
expressamente prevista pelo XKB.

    sudo cp xkb/symbols/4-layer-nandvorak.c /usr/share/X11/xkb/symbols/custom

Também pode fazer um link simbólico ao invés de copiar o arquivo:

    sudo ln -s FULL/PATH/TO/xkb/symbols/4-layer-nandvorak.c /usr/share/X11/xkb/symbols/custom

Instalado o arquivo "custom", é necessário escolhê-lo para uso no desktop.


## Configuração no Linux com Wayland

Pelo que pude perceber até 2025-07, ao contrário do X, o
[Wayland](https://en.wikipedia.org/wiki/Wayland_(protocol))
oferece uma biblioteca chamada
[libinput](https://wayland.freedesktop.org/libinput/doc/latest/what-is-libinput.html)
que é reaproveitada pela maioria dos *compositors*.
Quem interpreta o nosso leiaute de teclado? Não tenho certeza, mas parece ser
[libxkbcommon](https://github.com/xkbcommon/libxkbcommon/blob/master/doc/compatibility.md).

Por exemplo, no Debian, o leiaute funciona com Plasma sobre Wayland, contanto que...

1. você acrescente o arquivo "custom" como descrito abaixo, e
2. você escolha "custom" na configuração de teclado do Plasma.

O comando ``setxbmap`` é parte do X e não funciona no Wayland:

    WARNING: Running setxkbmap against an XWayland server

...mas o leiaute funciona, ativado por algum outro meio.
Por exemplo, no Gnome, acesso o leiaute clicando "Other" e depois
"A user-defined custom layout".


### Solução para recursos faltando no Wayland

No Wayland as combinações de teclas implementadas com RedirectKey() não funcionam.
Isto inclui as setas na home row da mão direita e o AltGr+E para apagar palavra inteira.
[Post de 2015 explica.](https://github.com/xkbcommon/libxkbcommon/issues/18#issuecomment-72728366)

Para suprir isto, usuários de Wayland têm usado algum daemon para mapear eventos de
entrada. O Debian inclui um utilitário chamado
[Input Remapper](https://github.com/sezanzeb/input-remapper/):

    sudo apt install input-remapper

Para resolver este problema, eu abro o Input Remapper, seleciono meu teclado no topo,
crio um Preset e incluo nele estes mapeamentos:

- ISO Level3 Shift + h → KEY_LEFT
- ISO Level3 Shift + t → KEY_DOWN
- ISO Level3 Shift + n → KEY_UP
- ISO Level3 Shift + s → KEY_RIGHT
- ISO Level3 Shift + e → KEY_LEFTCTRL+BackSpace
- ISO Level3 Shift + BackSpace → KEY_LEFTCTRL+BackSpace

Aperto o botão **Apply** e posso testar o resultado.

Outros utilitários similares:

- [Kanata](https://github.com/jtroo/kanata)
- [KMonad](https://github.com/kmonad/kmonad)
- [keyd](https://github.com/rvaiya/keyd)


## Configuração no Linux com servidor X

Você pode ver a configuração atual do xkb com o comando `setxkbmap -query`

Você pode trocar o layout através do comando setxbmap. Exemplos:

    # Nandvorak trocando Caps por Esc e usando Pause como Compose key:
    setxkbmap custom -option caps:swapescape -option compose:paus

    setxkbmap custom epo-nandvorak # Esperanto; não recomendado; apenas um teste

    setxkbmap br dvorak -option '' # versão antiga (BRDK) apagando as options
    setxkbmap br abnt2             # qwerty brasileiro
    setxkbmap epo                  # qwerty esperanto
    setxkbmap us dvorak-intl       # Dvorak sem suporte ao português
    setxkbmap us dvorak-alt-intl   # Dvorak sem suporte ao português
    # Você pode descobrir outros layouts via tab completion.

O uso dos comandos acima pode fazer o applet "Keyboard" do Linux Mint (responsável por trocar layouts de teclado) sumir da barra, mas o applet também volta a aparecer quando certos layouts são carregados via setxkbmap. (2023)


## Créditos

Os arquivos deste projeto são de domínio público, resultado do trabalho de:

- [Nando Florestan](https://github.com/nandoflorestan)
  (código para Unix e documentação)


## Contribua

Ao fazer um *pull request* neste projeto, você concorda em doar o seu trabalho para o domínio público.

**TODO**

- Resolver no Wayland: não funciona segurar a tecla Backspace.
- Adir smileys aos arquivos de Compose.
- Implementando algum acorde para CapsLock, liberar a tecla Esc⇒CapsLock para alguma outra função.
- Upstreams.
- Versão para Windows 11.

Algumas coisas que poderiam melhorar:

1) Seria ótimo se o cedilha pudesse ser obtido com a tecla morta tilde (til), mas só consegui fazer isso no Windows, não no XKB. Suspeito também que o efeito de ´c depende do locale do sistema: resultará em ć em todos os locales exceto pt_BR devido a uma exceção que hoje existe no arquivo /usr/share/X11/locale/pt_BR.UTF-8/Compose:

```
    #  Overriding C with acute:
    <dead_acute> <C>            : "Ç" Ccedilla  # LATIN CAPITAL LETTER C WITH CEDILLA
    <dead_acute> <c>            : "ç" ccedilla  # LATIN SMALL LETTER C WITH CEDILLA
```

2) Quem desenvolve um novo leiaute passa muito tempo pensando em caracteres especiais, os quais ocupam espaço e geralmente são pouco usados. [É para isso que serve uma tecla Compose](https://superuser.com/questions/511472/how-to-compose-key-in-linux). Neste projeto também fornecemos uma pequena coleção de módulos como [os deste projeto](https://github.com/nshepperd/xcompose/blob/master). O arquivo ~/.XCompose suporta includes.


### Projetos similares

- [Motion Dvorak BR](https://github.com/GabrielCoelho/motiondvorakbr)
- Um [projeto arquivado](https://github.com/nandoflorestan/teclado-br) em 2023 ainda funciona noutros sistemas operacionais.
