// Nandvorak: Multilingual Dvorak
// Supports Portuguese, Polish, Esperanto, Spanish, French, German and English.
// 2023-10-21 - Nando Florestan  nandoflorestan+dvorak@gmail.com

// ┌─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┬─────┲━━━━━━━━━┓
// │ " ˝ │ ! ¡ │ @ ½ │ # ¾ │ $ ¼ │ % ‰ │ ¨ ¬ │ & ̣  │ * ̛  │ ( ̉  │ ) ˘ │ {  ̦ │ } ° ┃Backspace┃
// │ ' ˇ │ 1 ¹ │ 2 ² │ 3 ³ │ 4 ⁴ │ 5 ⁵ │ 6 ⁶ │ 7 ⁷ │ 8 ⁸ │ 9 ⁹ │ 0 ⁰ │ [ ª │ ] º ┃ ⌫       ┃
// ┢━━━━━┷━┱───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┴─┬───┺━┳━━━━━━━┫
// ┃ Tab   ┃ ? ¿ │ < « │ > » │ P π │ Y ¥ │ F ‘ │ G ’ │ C Ç │ R ™ │ L Ł │ ` ¸ │ + ± ┃ Enter ┃
// ┃ ↹     ┃ / \ │ , ≤ │ . ≥ │ p € │ y £ │ f “ │ g ” │ c ç │ r ® │ l ł │ ´ ˛ │ = — ┃   ⏎   ┃
// ┣━━━━━━━┻┱────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┴┬────┺┓      ┃
// ┃ Esc or ┃ A Æ │ O Œ │ E NO│ U Ŭ │ I © │ D   │ H ⇐ │ T ⇓ │ N ⇑ │ S ⇒ │ ^   │ _ § ┃      ┃
// ┃ CapsLk ┃ a æ │ o œ │ e NO│ u ŭ │ i | │ d   │ h ⇐ │ t ⇓ │ n ⇑ │ s ⇒ │ ~ ˙ │ - – ┃      ┃
// ┣━━━━━━┳━┹───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┬─┴───┲━┷━━━━━┻━━━━━━┫
// ┃Shift ┃ Ç | │ : ̭  │ Q Ə │ J Ʒ │ K BS│ X › │ B ẞ │ M Ho│ W Pg│ V Pg│ Z En┃ Shift        ┃
// ┃ ⇧    ┃ ç \ │ ; ̭  │ q ə │ j ʒ │ k BS│ x ‹ │ b ß │ m me│ w Dn│ v Up│ z  d┃ ⇧            ┃
// ┣━━━━━━┻┳━━━━┷━━┳━━┷━━━━┱┴─────┴─────┴─────┴─────┴─────┴────┲┷━━━━━╈━━━━━┻┳━━━━━━┳━━━━━━┫
// ┃ Ctrl  ┃ Alt   ┃ Nav   ┃ ␣ Space            Nobreakspace ⍽ ┃AltGr ┃Multi ┃ Ctxt ┃ Ctrl ┃
// ┃       ┃ ex-Sup┃ ex-Alt┃ ␣ Space            Nobreakspace ⍽ ┃      ┃      ┃ Menu ┃      ┃
// ┗━━━━━━━┻━━━━━━━┻━━━━━━━┹───────────────────────────────────┺━━━━━━┻━━━━━━┻━━━━━━┻━━━━━━┛
// TODO Del
// TODO degree °
// TODO 0x01002022, periodcentered ]}; // •·
default partial alphanumeric_keys modifier_keys function_keys keypad_keys alternate_group
    xkb_symbols "nandvorak" {
    name[Group1]="Portuguese (Nandvorak)";

    // include "kpdl(comma)"  // numeric keypad outputs ","
    include "keypad(ossmath)"
    include "keypad(ossnumber)"
    include "level3(ralt_switch)" // left alt = navigation, right alt = symbols

    // key.type[Group1] = "FOUR_LEVEL";

    key <BKSP> { // BackSpace + Shift == Delete
        symbols[Group1] = [BackSpace, Delete, BackSpace, Delete],
        actions[Group1] = [
          NoAction(), RedirectKey(key=<DELE>, clearmods=Mod3+Mod5+Shift),
          NoAction(), RedirectKey(key=<DELE>, clearmods=Mod3+Mod5+Shift)]};

    // Numeric row
    key <TLDE> {[ apostrophe,       quotedbl,
                  dead_caron, dead_doubleacute ]}; // ˇ˝
    key <AE01> {[          1,         exclam,
                 onesuperior,     exclamdown ]}; // ¹¡
    key <AE02> {[          2,             at,
                 twosuperior,        onehalf ]}; // ²½
    key <AE03> {[          3,     numbersign,
                 threesuperior,  threequarters ]}; // ³¾
    key <AE04> {[          4,         dollar,
                 foursuperior,     onequarter ]}; // ⁴¼
    key <AE05> {[          5,        percent,
                 fivesuperior,     0x01002030 ]}; // ⁵‰
    key <AE06> {[          6, dead_diaeresis,
                 sixsuperior,        notsign ]}; // ⁶¬
    key <AE07> {[          7,      ampersand,
                 sevensuperior,  dead_belowdot ]}; // ⁷̣
    key <AE08> {[          8,       asterisk,
                 eightsuperior,      dead_horn ]}; // ⁸̛
    key <AE09> {[          9,      parenleft,
                 ninesuperior,      dead_hook ]}; // ⁹̉
    key <AE10> {[          0,     parenright,
                 zerosuperior,     dead_breve ]}; // ⁰˘
    key <AE11> {[  bracketleft,    braceleft,
                 ordfeminine,     0x01000326 ]}; // ª̉
    key <AE12> {[ bracketright,   braceright,
                 masculine, dead_abovering ]}; // º°

    // Upper row
    // Backslash on the same key as slash; pipe (bar) on Dvorak I key:
    key <AD01> {[      slash,       question,
                   backslash,   questiondown ]}; // \¿
    key <AD02> {[      comma,           less,
               lessthanequal, guillemotleft  ]}; // ≤«
    key <AD03> {[     period,        greater,
            greaterthanequal, guillemotright ]}; // ≥»
    key <AD04> {[ p, P, EuroSign, Greek_pi ]}; // €π
    key <AD05> {[          y,              Y,
                    sterling,            yen ]}; //  ¥
    key <AD06> {[          f,              F,
         leftdoublequotemark,  leftsinglequotemark ]};
    key <AD07> { // [U] ⇒ [G]
        [g, G, rightdoublequotemark, rightsinglequotemark]}; // ”’
    // Most important: AltGr+c = ccedilla (no need for ABNT2 hardware)
    key <AD08> { // [I] ⇒ [C]
        [c, C, ccedilla, Ccedilla]}; // çÇ
    key <AD09> { // [O] ⇒ [R]
        [r, R, registered, trademark]}; // ®™
    key <AD10> { // [P] ⇒ [L]
        [l, L, lstroke, Lstroke]}; // łŁ
    // dead_ogonek is used in Polish: ąĄȩĘ. It's a cedilla that turns right.
    key <AD11> {[ dead_acute,     dead_grave,
                 dead_ogonek,   dead_cedilla ]}; // ˛¸
    key <AD12> {[      equal,           plus,
               0x01002014, plusminus ]}; // em dash: —

    // Main row
    key <AC01> {[          a,              A,
                          ae,             AE ]}; // æÆ
    key <AC02> {[          o,              O,
                          oe,             OE ]}; // œŒ
    key <AC03> {
        symbols[Group1] = [ e, E, BackSpace, BackSpace ], // NO
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<BKSP>, clearmods=Mod3+Mod5, mods=Control),
            RedirectKey(key=<BKSP>, clearmods=Mod3+Mod5, mods=Control)]};
    key <AC04> {[          u,              U,
                      ubreve,         Ubreve ]}; // ŭŬ
    key <AC05> {[          i,              I,
                         bar,      copyright ]}; // |©
    key <AC06> {[          d,              D,
                    NoSymbol,       NoSymbol ]};
    key <AC07> { // [J] ⇒ [H]
        symbols[Group1] = [h, H],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<LEFT>, clearmods=Mod3+Mod5),
            RedirectKey(key=<LEFT>, clearmods=Mod3+Mod5)]};
    key <AC08> { // [K] ⇒ [T]
        symbols[Group1] = [t, T],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<DOWN>, clearmods=Mod3+Mod5),
            RedirectKey(key=<DOWN>, clearmods=Mod3+Mod5)]};
    key <AC09> { // [L] ⇒ [N]
        symbols[Group1] = [n, N],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<UP>, clearmods=Mod3+Mod5),
            RedirectKey(key=<UP>, clearmods=Mod3+Mod5)]};
    key <AC10> { // [;] ⇒ [S]
        symbols[Group1] = [s, S],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<RGHT>, clearmods=Mod3+Mod5),
            RedirectKey(key=<RGHT>, clearmods=Mod3+Mod5)]};
    key <AC11> {[ dead_tilde, dead_circumflex,
               dead_abovedot,     0x01000336
        // ż (z dot above) is used in Polish.
        //  ̶ = 0x01000336 = dead: Combining Long Stroke Overlay
        ]};
    key <BKSL> {[      minus,     underscore,
                  0x01002013, section ]}; // en dash: –    section/paragraph: §

    // Lower row. The ccedilla key is only available in ABNT2 and steals space from ShiftL:
    key <LSGT> {[   ccedilla,       Ccedilla,
                   backslash,            bar ]}; // \|
    key <AB01> {[  semicolon,          colon,
                  0x01000331,     0x0100032D ]}; // ̱ ̭
    key <AB02> {[          q,              Q,
                  0x01000259,     0x0100018F ]}; // əƏ
    key <AB03> {[          j,              J,
                  0x01000292,     0x010001B7 ]}; // ʒƷ
    key <AB04> {
        symbols[Group1] = [ k, K, BackSpace, BackSpace ],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<BKSP>, clearmods=Mod3+Mod5),
            RedirectKey(key=<BKSP>, clearmods=Mod3+Mod5)]};
    key <AB05> {[x, X, 0x01002039, // ‹ = Single  Left-Pointing Angle Quotation Mark
                    0x0100203A ]}; // › = Single Right-Pointing Angle Quotation Mark
    key <AB06> {[b, B, ssharp, U1E9E]}; // ßẞ
    key <AB07> {
        symbols[Group1] = [ m, M, Home, Home ],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<HOME>, clearmods=Mod3+Mod5),
            RedirectKey(key=<HOME>, clearmods=Mod3+Mod5)]};
    key <AB08> {
        symbols[Group1] = [ w, W, Prior, Prior ],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<PGDN>, clearmods=Mod3+Mod5),
            RedirectKey(key=<PGDN>, clearmods=Mod3+Mod5)]};
        
    key <AB09> {
        symbols[Group1] = [ v, V, Next, Next ],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<PGUP>, clearmods=Mod3+Mod5),
            RedirectKey(key=<PGUP>, clearmods=Mod3+Mod5)]};
        
    key <AB10> {
        symbols[Group1] = [ z, Z, End, End ],
        actions[Group1] = [
            NoAction(), NoAction(),
            RedirectKey(key=<END>, clearmods=Mod3+Mod5),
            RedirectKey(key=<END>, clearmods=Mod3+Mod5)]};
        
    // This key is not available in US or PL keyboards:
    key <AB11> {[  backslash,            bar,
                   brokenbar,       NoSymbol ]};
    //       https://en.wikipedia.org/wiki/Vertical_bar#Solid_vertical_bar_vs_broken_bar

    key <SPCE> {[      space,          space,
                nobreakspace,   nobreakspace ]};


    // REMOVED: ¯ = dead_macron
    // REMOVED: 0x01000329  // dead: Combining Vertical Line Below
    // REMOVED: 0x01000313  // dead: Combining Comma Above
    // REMOVED: ̶ = 0x01000336  // dead: Combining Long Stroke Overlay
    // REMOVED: cent ¢
};


// Esperanto variant:  setxkbmap custom epo-nandvorak
partial alphanumeric_keys
xkb_symbols "epo-nandvorak" {
    name[Group1]="Esperanto (Nandvorak)";
    include "custom(nandvorak)"

    key <AB02> {[ scircumflex, Scircumflex, q, Q ]};
    key <AD05> {[ jcircumflex, Jcircumflex, y, Y ]};
    key <AB05> {[ ccircumflex, Ccircumflex, x, X ]};
    key <AB08> {[ gcircumflex, Gcircumflex, w, W ]};
    key <AC07> {[           h,           H, hcircumflex, Hcircumflex ]};
};
