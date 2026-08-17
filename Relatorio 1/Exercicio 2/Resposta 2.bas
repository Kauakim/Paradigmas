Dim pin As Integer
Dim pinDigitado as Integer

pin = 8997

Input pinDigitado
While pinDigitado <> pin
    Print "Pin invalido. Tente novamente."
    Input pinDigitado
Wend

Print "Transacao autorizada!"

Sleep
