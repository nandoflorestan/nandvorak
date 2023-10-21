# Nandvorak – layout de teclado Dvorak em língua portuguesa

Este projeto contém o layout de teclado "Nandvorak", que tem base Dvorak e suporta estas línguas:

- Português, com teclas mortas como as do ABNT2.
- Polonês: ąĄ ęĘ ćĆ łŁ ńŃ óÓ śŚ źŹ żŻ
- Esperanto: ĉĈ ĝĜ ĥĤ ĵĴ ŝŜ ŭŬ
- Espanhol: ñÑ
- Francês: àÀ, Ââ, æÆ, çÇ, éÉ, èÈ, êÊ, ëË
- Alemão: äÄ öÖ üÜ ßẞ

As outras prioridades do Nandvorak são:

- Layout Dvorak, que traz mais conforto de múltiplas maneiras.
- Teclas mortas para acentuação como no ABNT2...
- ...mas sem precisar das 2 teclas adicionais que só existem no ABNT2! Compatibilidade com teclados menores sem perder o acesso aos importantes glifos ç Ç \\ |
- Não tirar a mão do lugar: são dadas alternativas a teclas distantes como Escape, Page Up, Home, Delete...
- Uso do polegar: é muito mais ergonômico segurar teclas com o polegar do que com o mindinho.
- Tecla Compose para muitos glifos extra.


## Por que usar um leiaute de teclado Dvorak?

Ele tem as letras mais usadas na *home row*, a linha central. Você digita 70% de um texto sem tirar a mão dessa linha. As vogais estão na mão esquerda e as consoantes na mão direita; isto aumenta o paralelismo entre as mãos. Estas são só algumas de muitas ideias que concorrem para o Dvorak ser bem mais confortável.

[Leia meu artigo a esse respeito.](http://dev.nando.audio/pages/teclado.html)

![Diagrama de um teclado Dvorak](https://dev.nando.audio/_images/teclado-dvorak-br.png)

## Como é esse leiaute?

- Dvorak com teclas mortas para acentuação que, como no ABNT2, ficam no mindinho direito. Mas há muitas outras teclas mortas.
- A tecla cê cedilha (çÇ) só existe em teclados ABNT2. Quem não a tem pode usar AltGr + c. Geralmente a tecla morta de acento agudo gera ćĆ – para o polonês.

```
┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┲━━━━━━━━━┓
│ " ˝ │ ! ¡ │ @ ½ │ # ¾ │ $ ¼ │ % ‰ │ ¨ ¬ │ & ̣  │ * ̛  │ ( ̉  │ ) ˘ │ {  ̦ │ } ° ┃Backspace┃
│ ' ˇ │ 1 ¹ │ 2 ² │ 3 ³ │ 4 ⁴ │ 5 ⁵ │ 6 ⁶ │ 7 ⁷ │ 8 ⁸ │ 9 ⁹ │ 0 ⁰ │ [ ª │ ] º ┃ ⌫       ┃
┢━━━━━┷━┱───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┺━┳━━━━━━━┫
┃ Tab   ┃ ? ¿ │ < « │ > » │ P π │ Y ¥ │ F ‘ │ G ’ │ C Ç │ R ™ │ L Ł │ ` ¸ │ + ± ┃ Enter ┃
┃ ↹     ┃ / \ │ , ≤ │ . ≥ │ p € │ y £ │ f “ │ g ” │ c ç │ r ® │ l ł │ ´ ˛ │ = — ┃   ⏎   ┃
┣━━━━━━━┻┱────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┺┓      ┃
┃ Esc or ┃ A Æ │ O Œ │ E NO│ U Ŭ │ I © │ D › │ H ⇐ │ T ⇓ │ N ⇑ │ S ⇒ │ ^   │ _ § ┃      ┃
┃ CapsLk ┃ a æ │ o œ │ e NO│ u ŭ │ i | │ d ‹ │ h ⇐ │ t ⇓ │ n ⇑ │ s ⇒ │ ~ ˙ │ - – ┃      ┃
┣━━━━━━┳━┹───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┲━┷━━━━━┻━━━━━━┫
┃Shift ┃ Ç | │ : ̭  │ Q Ə │ J Ʒ │ K BS│ X De│ B ẞ │ M Ho│ W Pg│ V Pg│ Z En┃ Shift        ┃
┃ ⇧    ┃ ç \ │ ; ̭  │ q ə │ j ʒ │ k BS│ x  l│ b ß │ m me│ w Dn│ v Up│ z  d┃ ⇧            ┃
┣━━━━━━┻┳━━━━┷━━┳━━┷━━━━┱┴─────┴─────┴─────┴─────┴─────┴────┲┷━━━━━╈━━━━━┻┳━━━━━━┳━━━━━━┫
┃ Ctrl  ┃ Alt   ┃ Nav   ┃ ␣ Space            Nobreakspace ⍽ ┃AltGr ┃Multi ┃ Ctxt ┃ Ctrl ┃
┃       ┃ ex-Sup┃ ex-Alt┃ ␣ Space            Nobreakspace ⍽ ┃      ┃      ┃ Menu ┃      ┃
┗━━━━━━━┻━━━━━━━┻━━━━━━━┹───────────────────────────────────┺━━━━━━┻━━━━━━┻━━━━━━┻━━━━━━┛
```

- O ndash – que serve para separar cláusulas assim – está em AltGr+- e o mdash está em AltGr+=. Este é mais longo e pode ser usado como travessão na escrita de ficção: — Legal!
- O teclado numérico oferece setas e glifos matemáticos.

TODO ilustração do teclado numérico

### Para não tirar as mãos do lugar

- Escape e CapsLock devem trocar de lugar, refletindo a frequência de seu uso. Isto é opcional. Mais abaixo mostro como fazer isso.
- As 2 camadas de glifos mais raros são ativadas segurando AltGr com ou sem Shift.
- Segurar a tecla AltGr oferece uma camada de navegação estilo Vim: as 4 teclas em que repousam os 4 dedos da mão direita tornam-se setas. As 4 teclas abaixo destas contêm teclas de navegação distantes: Home, Page Down, Page Up, End.
- Todas as pessoas que digitam muito rápido usam a combinação Ctrl+Backspace, que apaga a palavra inteira ao invés de uma letra só. É mais fácil digitar novamente a palavra errada do que editá-la. E o apagamento assim também é mais rápido do que ficar repetindo a tecla Backspace. Mas vi que ambas as teclas dessa combinação são muito distantes e difíceis de alcançar. Então, AltGr + E dispara essa combinação. Eu a chamo de "acorde NO". Ela é muito fácil de usar porque fica diretamente sob o dedo médio da mão esquerda.
- A tecla Delete também está disponível como AltGr + X (B no QWERTY).
- BackSpace + Shift disparam Delete.


## Status do projeto

- [para Linux e assemelhados via XKB](xkb/)
- Pretendo adicionar versão para Windows 10 em breve.

Mas e os **outros sistemas operacionais**?

Colaboração *open source* é bem-vinda e por isso é que os fontes estão no [github](https://github.com/nandoflorestan/nandvorak).
Para quaisquer outras ideias, pode [criar um ticket](https://github.com/nandoflorestan/nandvorak/issues). Contribua!

### Projetos similares

- [Motion Dvorak BR](https://github.com/GabrielCoelho/motiondvorakbr)
- Um [projeto arquivado](https://github.com/nandoflorestan/teclado-br) em 2023 ainda funciona noutros sistemas operacionais.
- [Este vídeo](https://www.youtube.com/watch?v=92pRAQeRIak) é a principal influência sobre o Nandvorak.


## Instalação no Linux

O diretório do XKB varia conforme a distribuição do Linux. Os leiautes brasileiros ficam num arquivo chamado "br". Verifique se os layouts no teu caso estão neste diretório:

    ls /usr/share/X11/xkb/symbols/

Adicione ali o nosso arquivo "custom". A presença de um arquivo "custom" (desenvolvido pelo usuário) é expressamente prevista pelo XKB.

    sudo cp xkb/symbols/4-layer-nandvorak.c /usr/share/X11/xkb/symbols/custom

Também pode fazer um link simbólico ao invés de copiar o arquivo:

    sudo ln -s FULL/PATH/TO/xkb/symbols/4-layer-nandvorak.c /usr/share/X11/xkb/symbols/custom

Você pode trocar o layout através do comando setxbmap. Exemplos:

    setxkbmap br dvorak -option ''              # versão antiga: BRDK
    setxkbmap custom -option caps:swapescape    # Nandvorak trocando Caps e Esc
    setxkbmap custom nandvorak                  # Nandvorak (sem a troca)
    setxkbmap custom epo-nandvorak # Esperanto; não recomendado; apenas um teste
    setxkbmap br abnt2             # qwerty brasileiro
    setxkbmap epo                  # qwerty esperanto
    setxkbmap us dvorak-intl       # Dvorak sem suporte ao português
    setxkbmap us dvorak-alt-intl   # Dvorak sem suporte ao português
    # Você pode descobrir outros layouts via tab completion.

O uso dos comandos acima pode fazer o applet "Keyboard" do Linux Mint (responsável por trocar layouts de teclado) sumir da barra, mas o applet também volta a aparecer quando certos layouts são carregados via setxkbmap.

### GUI do Linux Mint

No Linux Mint em 2023, se eu carrego o teclado pela tela "Keyboard" (procurando por "custom"), infelizmente ele carrega errado:

1. As camadas AltGr não funcionam.
2. A tecla CapsLock, ao invés de funcionar apenas como Escape, funciona como CapsLock simultaneamente.

Mas há um conserto. A tela de configuração chamada "Keyboard" possui um botão "Options...". O Nandvorak funciona normalmente se habilitamos as seguintes opções:

- Alt and Win behavior / Alt is swapped with Win
- Caps Lock behavior / Swap Esc and Caps Lock (resolve o problema 2)
- Key to choose 5th level / Right Alt chooses 5th level (resolve o problema 1)

O problema é que essas opções não são aplicadas a um layout individual e sim a todos. Quando você alternar para outros layouts de teclado, talvez precise desligar as opções acima.

Recomendo habilitar também, apenas por ser boa ideia:

- Ctrl position / Swap Right Win with Right Ctrl (deixa o Ctrl mais perto e o Win mais longe)

Depois de carregar o teclado da forma acima, há um comando que lista as opções aplicadas:

    $ setxkbmap -query
	rules:      evdev
	model:      pc105
	layout:     custom
	options:    caps:swapescape,ctrl:swap_rwin_rctl,compose:paus,compose:sclk,lv5:ralt_switch,altwin:swap_alt_win

Quando reinicio, às vezes o Alt esquerdo dispara Win ao invés de 5th level. Quando isso acontece, volto à tela Keyboard / Layouts / Options e reaplico "Key to choose 5th level".


## Problema no Lubuntu (LXQt)

O Lubuntu recusa-se a fazer a tecla Win funcionar como Alt; o teclado fica sem Alt esquerdo.  Ainda não sei como resolver; quem conseguir por favor me ensine.


## Créditos

Os arquivos deste projeto são de domínio público, resultado do trabalho de:

- [Nando Florestan](https://github.com/nandoflorestan)
  (código para Unix e documentação)


## Contribua

Ao fazer um *pull request* neste projeto, você concorda em doar o seu trabalho para o domínio público.

**TODO**

- Nav: BackSpace, Enter, Escape, Delete.
- Implementando algum acorde para CapsLock, liberar a tecla Esc⇒CapsLock para alguma outra função.
- Nav: Multimedia keys, starting with volume and brightness.
- Toggle layers sem mexer nos Alts, que não são toggle, são hold. https://erikbackman.github.io/notes/sticky-modifiers.html
- Adir o Nandvorak à lista (GUI) e conseguir que carregue normalmente.
- Upstreams.
- Versão para Windows 11.

Algumas coisas que poderiam melhorar:

1) Seria ótimo se o cedilha pudesse ser obtido com a tecla morta tilde (til), mas só consegui fazer isso no Windows, não no XKB. Suspeito também que o efeito de ´c depende do locale do sistema: resultará em ć em todos os locales exceto pt_BR devido a uma exceção que hoje existe no arquivo /usr/share/X11/locale/pt_BR.UTF-8/Compose:

```
    #  Overriding C with acute:
    <dead_acute> <C>            : "Ç" Ccedilla  # LATIN CAPITAL LETTER C WITH CEDILLA
    <dead_acute> <c>            : "ç" ccedilla  # LATIN SMALL LETTER C WITH CEDILLA
```

2) Acho que há hoje um excesso de caracteres especiais no leiaute; ocupam espaço e são pouco usados. [É para isso que serve uma tecla Compose](https://superuser.com/questions/511472/how-to-compose-key-in-linux). Poderíamos fornecer uma coleção de módulos como [neste projeto](https://github.com/nshepperd/xcompose/blob/master) e muitos outros. O arquivo ~/.XCompose suporta includes.

## Versão de 8 camadas

Eu iniciei, mas não terminei, um leiaute de 8 camadas ao invés de 4. Nessa versão o Alt esquerdo foi movido mais para a esquerda (ocupa a tecla Super), para dar espaço a uma nova tecla de camada: Nav. A ideia das camadas é deixar cada polegar entre Espaço e uma das teclas vizinhas. Recomendo comprar teclado com tecla Espaço pequena, assim a posição da mão fica mais natural.

Infelizmente as 8 camadas se revelaram menos compatíveis com variadas distribuições do Linux. E perderam importância quando descobri como funciona a tecla Compose... esta eu recomendo. Ela permite que se tenham centenas de glifos exóticos ou mesmo frases inteiras. Assim o layout de teclado não precisa focar nesses glifos.
