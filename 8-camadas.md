# Nandvorak – versão de 8 camadas

Além do [Nandvorak recomendado padrão](README.md)... fiz, mas não refinei, um leiaute de 8 camadas ao invés de 4. Nesta versão o Alt esquerdo foi movido mais para a esquerda (ocupa a tecla Super), para dar espaço a uma nova tecla de camada: Nav. A ideia das camadas é deixar cada polegar entre Espaço e uma das teclas vizinhas. Recomendo comprar teclado com tecla Espaço pequena, assim a posição da mão fica mais natural.

- [Este vídeo](https://www.youtube.com/watch?v=92pRAQeRIak) é a principal influência sobre a versão de 8 camadas.

Infelizmente as 8 camadas se revelaram menos compatíveis com variadas distribuições do Linux. E perderam importância quando descobri como funciona a tecla Compose... esta eu recomendo. Ela permite que se preparem centenas de glifos exóticos ou mesmo frases inteiras. Assim o layout de teclado não precisa focar nesses glifos.


## GUI do Linux Mint

No Linux Mint em 2023, se eu carrego a versão de 8 camadas pela tela "Keyboard" (procurando por "custom"), infelizmente ele carrega errado:

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


## TODO

- Nav: Multimedia keys, starting with volume and brightness.
- Adir o Nandvorak à lista (GUI) e conseguir que carregue normalmente.
- O **Lubuntu 2023.04** (LXQt) recusa-se a fazer a tecla Win funcionar como Alt; o teclado fica sem Alt esquerdo.  Ainda não sei como resolver; quem conseguir por favor me ensine.
- Toggle layers sem mexer nos Alts, que não são toggle, são hold. https://erikbackman.github.io/notes/sticky-modifiers.html
