// Nandvorak: Multilingual Dvorak
// Supports Portuguese, Polish, Esperanto, Spanish, French, German and English.
// 2023-10-09 - Nando Florestan  nandoflorestan+dvorak@gmail.com

// ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┲━━━━━━━━━┓
// │ " ˝ │ ! ¡ │ @ ½ │ # ¾ │ $ ¼ │ % ‰ │ ¨ ¬ │ & ̣  │ * ̛  │ ( ̉  │ ) ˘ │ {  ̦ │ } ° ┃Backspace┃
// │ ' ˇ │ 1 ¹ │ 2 ² │ 3 ³ │ 4 ⁴ │ 5 ⁵ │ 6 ⁶ │ 7 ⁷ │ 8 ⁸ │ 9 ⁹ │ 0 ⁰ │ [ ª │ ] º ┃ ⌫       ┃
// ┢━━━━━┷━┱───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┺━┳━━━━━━━┫
// ┃ Tab   ┃     │     │     │     │     │     │ Home│ PgDn│ PgUp│ End │     │     ┃ ⏎     ┃
// ┃ ↹     ┃ ? ¿ │ < « │ > » │ P Π │ Y ¥ │ F ‘ │ G ’ │ C Ç │ R ™ │ L Ł │ ` ¸ │ + ± ┃ Enter ┃
// ┃       ┃ / \ │ , ≤ │ . ≥ │ p π │ y £ │ f “ │ g ” │ c ç │ r ® │ l ł │ ´ ˛ │ = — ┃       ┃
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
default partial alphanumeric_keys modifier_keys function_keys keypad_keys alternate_group
    xkb_symbols "nandvorak" {
    name[Group1]="Portuguese (Nandvorak)";

    // include "kpdl(comma)"  // numeric keypad outputs ","
    include "keypad(ossmath)"
    include "keypad(ossnumber)"

    // left alt = navigation, right alt = symbols
    include "level3(lalt_switch)"
    include "level5(ralt_switch)"

    key.type[Group1] = "ONE_LEVEL"; // applies only for a few lines:  TODO document
    key <ESC>  {[ Caps_Lock ]};
    key <CAPS> {[ Escape    ]};
    key <LWIN> {[ Alt_L     ]};
    key <SUPR> {[ Alt_L     ]};

    // https://www.toomanyatoms.com/computer/Pointer_EnableKeys.html
    // key <NMLK> {
    //     symbols[Group1] = [ Num_Lock, Pointer_EnableKeys ],
    //     type[Group1] = "TWO_LEVEL"
    // };

    key.type[Group1] = "EIGHT_LEVEL";

    key <BKSP> { // BackSpace + Shift == Delete
        symbols[Group1] = [
            BackSpace, BackSpace, BackSpace, BackSpace,
            BackSpace, BackSpace, BackSpace, BackSpace
        ],
        actions[Group1] = [
          NoAction(), RedirectKey(key=<DELE>, clearmods=Mod3+Mod5+Shift),
          NoAction(), RedirectKey(key=<DELE>, clearmods=Mod3+Mod5+Shift),
          NoAction(), RedirectKey(key=<DELE>, clearmods=Mod3+Mod5+Shift),
          NoAction(), RedirectKey(key=<DELE>, clearmods=Mod3+Mod5+Shift)
        ]};

    // Numeric row
    key <TLDE> {[ apostrophe,       quotedbl, NoSymbol, NoSymbol,
                  dead_caron, dead_doubleacute ]}; // ˇ˝
    key <AE01> {[          1,         exclam, NoSymbol, NoSymbol,
                 onesuperior,     exclamdown ]}; // ¹¡
    key <AE02> {[          2,             at, NoSymbol, NoSymbol,
                 twosuperior,        onehalf ]}; // ²½
    key <AE03> {[          3,     numbersign, NoSymbol, NoSymbol,
                 threesuperior,  threequarters ]}; // ³¾
    key <AE04> {[          4,         dollar, NoSymbol, NoSymbol,
                 foursuperior,     onequarter ]}; // ⁴¼
    key <AE05> {[          5,        percent, NoSymbol, NoSymbol,
                 fivesuperior,     0x01002030 ]}; // ⁵‰
    key <AE06> {[          6, dead_diaeresis, NoSymbol, NoSymbol,
                 sixsuperior,        notsign ]}; // ⁶¬
    key <AE07> {[          7,      ampersand, NoSymbol, NoSymbol,
                 sevensuperior,  dead_belowdot ]}; // ⁷̣
    key <AE08> {[          8,       asterisk, NoSymbol, NoSymbol,
                 eightsuperior,      dead_horn ]}; // ⁸̛
    key <AE09> {[          9,      parenleft, NoSymbol, NoSymbol,
                 ninesuperior,      dead_hook ]}; // ⁹̉
    key <AE10> {[          0,     parenright, NoSymbol, NoSymbol,
                 zerosuperior,     dead_breve ]}; // ⁰˘
    key <AE11> {[  bracketleft,    braceleft, NoSymbol, NoSymbol,
                 ordfeminine,     0x01000326 ]}; // ª̉
    key <AE12> {[ bracketright,   braceright, NoSymbol, NoSymbol,
                 masculine, dead_abovering ]}; // º°

    // Upper row
    // Backslash on the same key as slash; pipe (bar) on the next key:
    key <AD01> {[      slash,       question, NoSymbol, NoSymbol,
                   backslash,   questiondown ]}; // \¿
    key <AD02> {[      comma,           less, NoSymbol, NoSymbol,
               lessthanequal, guillemotleft  ]}; // ≤«
    key <AD03> {[     period,        greater, NoSymbol, NoSymbol,
            greaterthanequal, guillemotright ]}; // ≥»
    key <AD04> {[          p,              P, NoSymbol, NoSymbol,
                    Greek_pi,       Greek_PI ]}; // πΠ
    key <AD05> {[          y,              Y, NoSymbol, NoSymbol,
                    sterling,            yen ]}; //  ¥
    key <AD06> {[          f,              F, NoSymbol, NoSymbol,
             leftdoublequotemark,  leftsinglequotemark ]};
    key <AD07> { // [U] ⇒ [G]
        symbols[Group1] = [g, G, g, g,
            rightdoublequotemark, rightsinglequotemark], // ”’
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<HOME>, clearmods=Mod3+Mod5),
            RedirectKey(key=<HOME>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<HOME>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<HOME>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    // Most important: AltGr+c = ccedilla (no need for ABNT2 hardware)
    key <AD08> { // [I] ⇒ [C]
        symbols[Group1] = [c, C, c, c, ccedilla, Ccedilla], // çÇ
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<PGDN>, clearmods=Mod3+Mod5),
            RedirectKey(key=<PGDN>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<PGDN>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<PGDN>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    key <AD09> { // [O] ⇒ [R]
        symbols[Group1] = [r, R, r, r, registered, trademark], // ®™
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<PGUP>, clearmods=Mod3+Mod5),
            RedirectKey(key=<PGUP>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<PGUP>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<PGUP>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    key <AD10> { // [P] ⇒ [L]
        symbols[Group1] = [l, L, l, l, lstroke, Lstroke], // łŁ
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<END>, clearmods=Mod3+Mod5),
            RedirectKey(key=<END>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<END>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<END>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    // dead_ogonek is used in Polish: ąĄȩĘ. It's a cedilla that turns right.
    key <AD11> {[ dead_acute,     dead_grave, NoSymbol, NoSymbol,
                 dead_ogonek,   dead_cedilla ]}; // ˛¸
    key <AD12> {[      equal,           plus, NoSymbol, NoSymbol,
               0x01002014, plusminus ]}; // em dash: —

    // Main row
    key <AC01> {[          a,              A, NoSymbol, NoSymbol,
                          ae,             AE ]}; // æÆ
    key <AC02> {[          o,              O, NoSymbol, NoSymbol,
                          oe,             OE ]}; // œŒ
    key <AC03> {[          e,              E, NoSymbol, NoSymbol,
                    NoSymbol,       EuroSign ]}; //  €
    key <AC04> {[          u,              U, NoSymbol, NoSymbol,
                      ubreve,         Ubreve ]}; // ŭŬ
    key <AC05> {[          i,              I, NoSymbol, NoSymbol,
                         bar,      copyright ]}; // |©
    key <AC06> {[          d,              D, NoSymbol, NoSymbol,
                    NoSymbol,       NoSymbol ]};
    key <AC07> { // [J] ⇒ [H]
        symbols[Group1] = [h, H, h, h, NoSymbol, paragraph], // ¶
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<LEFT>, clearmods=Mod3+Mod5),
            RedirectKey(key=<LEFT>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<LEFT>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<LEFT>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    key <AC08> { // [K] ⇒ [T]
        symbols[Group1] = [t, T, t, t, NoSymbol, NoSymbol],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<DOWN>, clearmods=Mod3+Mod5),
            RedirectKey(key=<DOWN>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<DOWN>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<DOWN>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    key <AC09> { // [L] ⇒ [N]
        symbols[Group1] = [n, N, n, n, eng, ENG ], // ŋŊ
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<UP>, clearmods=Mod3+Mod5),
            RedirectKey(key=<UP>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<UP>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<UP>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    key <AC10> { // [;] ⇒ [S]
        symbols[Group1] = [s, S, s, s, ssharp, U1E9E], // ßẞ
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<RGHT>, clearmods=Mod3+Mod5),
            RedirectKey(key=<RGHT>, clearmods=Mod3+Mod5),
            NoAction(), NoAction(),
            RedirectKey(key=<RGHT>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<RGHT>, clearmods=Mod3+Mod5, mods=Shift+Control)
        ]};
    key <AC11> {[ dead_tilde, dead_circumflex, NoSymbol, NoSymbol,
               dead_abovedot,     0x01000336
        // ż (z dot above) is used in Polish.
        //  ̶ = 0x01000336 = dead: Combining Long Stroke Overlay
        ]};
    key <BKSL> {[      minus,     underscore, NoSymbol, NoSymbol,
                  0x01002013, section ]}; // en dash: –

    // Lower row. The ccedilla key is only available in ABNT2 and steals space from ShiftL:
    key <LSGT> {[   ccedilla,       Ccedilla, NoSymbol, NoSymbol,
                   backslash,            bar ]}; // \|
    key <AB01> {[  semicolon,          colon, NoSymbol, NoSymbol,
                  0x01000331,     0x0100032D ]}; // ̱ ̭
    key <AB02> {[          q,              Q, NoSymbol, NoSymbol,
                  0x01000259,     0x0100018F ]}; // əƏ
    key <AB03> {[          j,              J, NoSymbol, NoSymbol,
                  0x01000292,     0x010001B7 ]}; // ʒƷ
    key <AB04> {[          k,              K, NoSymbol, NoSymbol,
                    NoSymbol, 0x01002039 ]}; // ‹ = Single  Left-Pointing Angle Quotation Mark
    key <AB05> {[          x,              X, NoSymbol, NoSymbol,
                    NoSymbol, 0x0100203A ]}; // › = Single Right-Pointing Angle Quotation Mark
    key <AB06> {[          b,              B, NoSymbol, NoSymbol,
                    NoSymbol,       NoSymbol ]};
    key <AB07> {[          m,              M, NoSymbol, NoSymbol,
                    NoSymbol,             mu ]}; //  µ
    key <AB08> {[          w,              W,   Return, NoSymbol,
                    NoSymbol, doublelowquotemark ]};
    key <AB09> {[          v,              V, NoSymbol, NoSymbol,
                    NoSymbol, singlelowquotemark ]};
    key <AB10> {[          z,              Z, NoSymbol, NoSymbol,
                  0x0100201F,     0x0100201B ]};
    // This key is not available in US or PL keyboards:
    key <AB11> {[  backslash,            bar, NoSymbol, NoSymbol,
                   brokenbar,       NoSymbol ]};
    //       https://en.wikipedia.org/wiki/Vertical_bar#Solid_vertical_bar_vs_broken_bar

    key <SPCE> {[      space,          space, NoSymbol, NoSymbol,
                nobreakspace,   nobreakspace ]};


    // REMOVED: ¤ = "currency". Not a popular glyph.
    //      https://en.wikipedia.org/wiki/Currency_sign_(typography)
    // REMOVED: ¯ = dead_macron
    // REMOVED: 0x01000329  // dead: Combining Vertical Line Below
    // REMOVED: 0x01000313  // dead: Combining Comma Above
    // REMOVED: ̶ = 0x01000336  // dead: Combining Long Stroke Overlay
    // REMOVED: ― = 0x01002015 (longer than em dash!)
    // REMOVED: ø = oslash: Latin Small Letter O With Stroke
    // REMOVED: Ø = Ooblique: Latin Capital Letter O With Stroke
    // REMOVED: ð = eth, Ð = ETH
    // REMOVED: thorn,      THORN ]}; // þÞ
    // REMOVED: idotless,      Iabovedot ]}; // ıİ
    // REMOVED: cent ¢
    // TODO degree °
    // TODO 0x01002022, periodcentered ]}; // •·
};


// Esperanto variant:  setxkbmap custom epo-nandvorak
partial alphanumeric_keys
xkb_symbols "epo-nandvorak" {
    name[Group1]="Esperanto (Nandvorak)";
    include "custom(nandvorak)"

    key <AB02> {[ scircumflex, Scircumflex, NoSymbol, NoSymbol, q, Q ]};
    key <AD05> {[ jcircumflex, Jcircumflex, NoSymbol, NoSymbol, y, Y ]};
    key <AB05> {[ ccircumflex, Ccircumflex, NoSymbol, NoSymbol, x, X ]};
    key <AB08> {[ gcircumflex, Gcircumflex, NoSymbol, NoSymbol, w, W ]};
    key <AC07> {[           h,           H, NoSymbol, NoSymbol, hcircumflex, Hcircumflex ]};
};
