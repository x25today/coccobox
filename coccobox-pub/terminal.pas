{
Fornisco il mio tentativo di illustrare il maniacale funzionamento della porta
seriale di un PC. Per fare questo preferisco seguire un sorgente pascal,
interamente scritto da me :)
}

program Terminale;

uses
  Crt,Dos,Scrnsavr;
const
  IMAGEDATA_WIDTH=80;
  IMAGEDATA_DEPTH=25;
  IMAGEDATA_LENGTH=2000;
  IMAGEDATA : array [1..2000] of Char = (
    ' ',' ',' ','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','M','i','n','i',' ',
    'T','e','r','m','i','n','a','l',' ','V','1','.','0',' ','B','e','t',
    'a',' ','(','F','r','e','e','W','a','r','e',')',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',
    ' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ','-','+','-','+','-','+','-','+','-','+','-',
    '+','-','+','-','+','-','+','-','+','-','+','-','+','-','+','-','+',
    '-','+','-','+','-','+','-',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',
    '€',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','W','r',
    'i','t','t','e','n',' ','I','n',' ','T','u','r','b','o',' ','P','a',
    's','c','a','l',' ','B','y',' ','S','a','n','d','r','o',' ','M','.',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ','-','+','-','+','-','+','-','+','-',
    '+','-','+','-','+','-','+','-','+','-','+','-','+','-','+','-','+',
    '-','+','-','+','-','+','-','+','-','+','-','+','-','+','-','+','-',
    '+','-','+','-',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',
    ' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',
    ' ',' ','€',' ',' ',' ',' ','Q','u','e','s','t','o',' ','p','r','o',
    'g','r','a','m','m','a',' ','e',#39,' ','F','r','e','e','W','a','r',
    'e',' ','e',' ','q','u','i','n','d','i',' ','l','i','b','e','r','a',
    'm','e','n','t','e',' ','d','i','s','t','r','i','b','u','i','b','i',
    'l','e',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',
    ' ',' ','a',' ','p','a','t','t','o',' ','c','h','e',' ','i','l',' ',
    'n','o','m','e',' ','d','e','l','l',#39,'a','u','t','o','r','e',' ',
    'e','d',' ','i',' ','f','i','l','e','s',' ','c','o','n','t','e','n',
    'u','t','i',' ','n','e','l','l',#39,'a','r','c','h','i','-',' ',' ',
    '€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ','v','i','o',
    ' ','n','o','n',' ','v','e','n','g','a','n','o',' ','m','o','d','i',
    'f','i','c','a','t','i','.',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',
    ' ',' ',' ',' ','€',' ',' ',' ',' ','S','e',' ','q','u','a','l','c',
    'u','n','o',' ','t','r','o','v','a','s','s','e',' ','e','v','e','n',
    't','u','a','l','i',' ','b','u','g','s',' ','p','u','o',#39,' ','c',
    'o','n','t','a','t','t','a','r','m','i',' ','i','n',' ','m','a','t',
    'r','i','x',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',
    ' ',' ',' ',' ','a','l',' ','2',':','3','3','1','/','2','1','5','.',
    '2',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',')',' ','.',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ','N',
    'o','n',' ','c','r','e','d','o',' ','c','h','e',' ','a','n','d','r',
    'o',#39,' ','a','v','a','n','t','i',' ','n','e','l','l','o',' ','s',
    'v','i','l','u','p','p','o',' ','d','i',' ','q','u','e','s','t','o',
    ' ','p','r','o','g','r','a','m','m','a',' ',' ',' ',' ','€',' ',' ',
    ' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ','q','u','i','n','d','i',
    ',','s','e',' ','q','u','a','l','c','u','n','o',' ','v','o','l','e',
    's','s','e',' ','c','o','n','t','i','n','u','a','r','e',' ','l','a',
    ' ','m','i','a',' ','o','p','e','r','a',' ','p','u','o',#39,' ','r',
    'i','c','h','i','e','-',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',
    ' ','€',' ',' ',' ',' ','d','e','r','m','i',' ','d','i','r','e','t',
    't','a','m','e','n','t','e',' ','i','l',' ','s','o','r','g','e','n',
    't','e',' ','a','l','l',#39,'i','n','d','i','r','i','z','z','o',' ',
    's','o','p','r','a',' ','r','i','p','o','r','t','a','t','o','.',' ',
    ' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',
    ' ','Q','u','e','s','t','o',' ','e',#39,' ','t','u','t','t','o',',',
    'b','u','o','n',' ','d','i','v','e','r','t','i','m','e','n','t','o',
    '.',' ',':','-',')',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',
    ' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',
    ' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ','+','-','+','-',' ','P','o','I','n','T',' ','O','f',' ','I','l',
    'L','u','S','i','O','n','S',' ','-','+','-','+',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',
    ' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ',
    '€',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ','€',' ',' ',' ',' ',' ',' ',' ',' ','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',
    '€','€','€','€','€','€','€','€','€','€','€','€','€','€','€','€',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',
    ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ');


const
  BuffSize= 8192;
  CommPortAddr: array [1..4] of Word = ($03F8,$02F8,$03E8,$02E8);
  CommPortIRQ: array [1..4] of Byte = (4,3,4,3);
  CommPortInt: array [1..4] of Byte = ($C,$B,$C,$B);
  {
  Per ogni porta devi sapere l'indirizzo, l'IRQ ovvero la richiesta di
  interrupt e l'interrupt effettivamente chiamato, perche' devi:
  1- Avere un interrupt che sfrutti la porta;
  2- Installarlo al posto di quello vecchio ($C o $B);
  3- Attivare sul PIC (Programmable Interrupt Controller) la linea di IRQ
     relativa alla tua porta.
  Fatto tutto questo, puoi semplicemente scrivere in un buffer e la seriale
  provvedera' a fare tutto il resto (si fa per dire)
  }

  { Seguono gli offset della seriale: }
  THR= 00;   { Transmitter Holding Register }
  RBR= 00;   { Receiver Buffer Register }

  {
  Questo registro contiene nei quattro bit bassi (0123) gli interruttori per
  le possibili richieste di interrupt.
  In pratica la porta richiama l'interrupt in quattro casi:
  - E' cambiato lo stato della linea (bisogna leggere il nuovo stato)
  - E' stato ricevuto un carattere alla porta
  - Il Buffer di trasmissione (THR) e' libero
  - E' cambiato lo stato del modem (bisogna leggere il nuovo stato)
  }
  IER= 01;   { Interrupt Enable Register }

  {
  Quello che segue invece serve alla routine di interrupt per capire cosa
  cavolo e' successo! Appena viene richiamata deve leggere qui che cosa e'
  successo.
  }
  IIR= 02;   { Interrupt Identification Register }

  {
  I due registri che seguono identificano il comportamento della seriale:
  parity, stop bits, ecc...
  }
  LCR= 03;   { Line Control Register }
  MCR= 04;   { Modem Control Register }

  LSR= 05;   { Line Status Register }
  MSR= 06;   { Modem Status Register }

type
  Buffer= record
    Dati: array [1..BuffSize] of Char;
    Testa,Coda: Word;
  end;

var
  RBuf,TBuf: Buffer;

  PortAddr: Word;
  PortIRQ,PortInt: Byte;
  CommBaud: LongInt;
  CommPort,CommLine,CommModem,CommIIR: Byte;
  OldInt: Pointer;

  Uscita: Boolean;
  Ch: Char;
  I:integer;

procedure CommInt; interrupt;
begin
  Port[$20]:= $20;
  repeat
    CommIIR:= Port[PortAddr+IIR];
    case CommIIR of
      0: CommModem:= Port[PortAddr+MSR];
      2: with TBuf do
         begin
           while (Testa<>Coda) and (CommLine and $20=$20) do
           begin
             Port[PortAddr+THR]:= Ord(Dati[Testa]);
             Testa:= (Testa mod BuffSize)+1;
           end;
           { Se non ci sono pió dati da mandare, disabilita le interruzioni
             per la trasmissione }
           if Testa=Coda then
             Port[PortAddr+IER]:= Port[PortAddr+IER] and $FD;
         end;
      4: with RBuf do
           while Port[PortAddr+LSR] and $01=$01 do
           begin
             Dati[Coda]:= Chr(Port[PortAddr+RBR]);
             Coda:= (Coda mod BuffSize)+1;
           end;
      6: CommLine:= Port[PortAddr+LSR];
    end;
  until CommIIR=$01;
end;

procedure CommWrite (C: Char);
begin
  with TBuf do
  begin
    Dati[Coda]:= C;
    Coda:= (Coda mod BuffSize)+1;
  end;
  { Abilita le interruzioni per la trasmissione }
  Port[PortAddr+IER]:= Port[PortAddr+IER] or $02;
end;

function CommReadKey: Char;
begin
  with RBuf do
  begin
    CommReadKey:= Dati[Testa];
    Testa:= (Testa mod BuffSize)+1;
  end;
end;

function CommKeyPressed: Boolean;
begin
  with RBuf do
    CommKeyPressed:= Testa<>Coda;
end;

procedure CommInit (Porta: Byte;Baud: LongInt);
begin
  { Prepariamo i due buffer }
  RBuf.Testa:= 1;
  RBuf.Coda:= 1;
  TBuf.Testa:= 1;
  TBuf.Coda:= 1;

  PortAddr:= CommPortAddr[Porta];
  PortIRQ:= CommPortIRQ[Porta];
  PortInt:= CommPortInt[Porta];

  { Installiamo il nostro interrupt }
  GetIntVec (PortInt,OldInt);
  SetIntVec (PortInt,@CommInt);

  inline($FA); { CLI }
  { Sistemiamo il PIC }
  Port[$21]:= Port[$21] and ((1 shl PortIRQ) xor $FF);

  { Abilitiamo tutti i tipi di interruzioni eccetto che per il THR}
  Port[PortAddr+IER]:= $0D;
  Port[PortAddr+MCR]:= Port[PortAddr+MCR] or $08; { OUT2 Attivo }

  { Per sicurezza facciamo tutte le azioni necessarie ad eliminare
    eventuali interrupt in attesa }
  CommLine:= Port[PortAddr+LSR];
  CommModem:= Port[PortAddr+MSR];
  CommPort:= Port[PortAddr+RBR];
  CommPort:= Port[PortAddr+IIR];
  inline($FB); { STI }

  { Regoliamo la porta con la velocitÖ scelta }
  Port[PortAddr+LCR]:= $80;
  Port[PortAddr]:= Lo(115200 div Baud);
  Port[PortAddr+1]:= Hi(115200 div Baud);
  Port[PortAddr+LCR]:= $03; { 8N1 }
  CommPort:= Porta;
  CommBaud:= Baud;
end;

procedure CommClose;
begin
  { OUT2 Disattivato }
  Port[PortAddr+MCR]:= 0;
  { Maschera tutti gli interrupt }
  Port[PortAddr+IER]:= 0;

  { Sistema gli interrupt come li aveva trovati }
  SetIntVec (PortInt,OldInt);

  { Sistema il PIC come prima }
  Inline($FA);
  Port[$21]:= Port[$21] and (1 shl PortIRQ);
  InLine ($FB);
end;

procedure CommHangUp;
begin
  WriteLn;
  Write ('Sto appendendo... ');
  { Data Terminal Ready? No. }
  Port[PortAddr+MCR]:= Port[PortAddr+MCR] and $FE;
  { Aspettiamo un secondo, in modo che anche il modem se ne accorga }
  Delay (1000);
  { Data Terminal Ready? Si. }
  Port[PortAddr+MCR]:= Port[PortAddr+MCR] or $01;
  WriteLn ('fatto.');
end;

begin
  { Vogliamo usare un driver ANSI per i colori e gli effetti }
  Assign (Input,'');
  Assign (Output,'');
  ReSet (Input);
  ReWrite (Output);
  { Un po' di banner... :-) }
  ClrScr;
  WriteLn ('    -+-+-+- Mini Terminale v1.0 - Written By Sandro M. -+-+-+-');
  writeln;
  { Attiviamo la porta del modem (questa ä la mia, ovviamente) }
  CommInit (2,57600);

  Uscita:= False;
  repeat
    { Se arriva un carattere, mandalo al video... }
    if CommKeyPressed then
      Write (CommReadKey);
    { ...se premiamo un tasto, invece, lo interpretiamo }
    if KeyPressed then
    begin
      Ch:= ReadKey;
      if Ch=#00 then
        case ReadKey of
          #35: CommHangUp;    { Alt-H }
          #45: Uscita:= True; { Alt-X }
          #59:begin
          clrscr;
          writeln ('          ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹');
writeln ('          €                                                      €');
writeln ('          €  Mini Terminal V1.0Beta Written By Sandro M.         €');
writeln ('          €  -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-   €');
writeln ('          €  Questo e'' uno dei tanti esempi di come poter gesti- €');
writeln ('          €  re la seriale in linguaggio Turbo Pascal.           €');
writeln ('          €  Questo terminale e'' in grado di connettersi a qua-  €');
writeln ('          €  lunque BBS purche'' questa rispetti i parametri di   €');
writeln ('          €  collegamento 8N1,ma non e'' in grado di eseguire     €');
writeln ('          €  le operazione di UPLOAD (manda dati) e DOWNLOAD     €');
writeln ('          €  (ricevi dati) le quali saranno implementate in una  €');
writeln ('          €  prossima release.                                   €');
writeln ('          €  Molte BBS usano lo standard ANSI e quindi,per riu-  €');
writeln ('          €  scire a vedere in modo corretto le loro schermate   €');
writeln ('          €  dovete NECESSARIAMENTE caricare un driver ANSI in   €');
writeln ('          €  memoria (Ansi.sys,per esempio).                     €');
writeln ('          €  Questo e'' tutto,buon uso                            €');
writeln ('          €                              Sandro M.               €');
writeln ('          €                                                      €');
writeln ('          €‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹€');

          readln;
          clrscr;
          end;
          #60:begin
          clrscr;

         writeln ('            ‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹');
         writeln ('            €                            € ');
         writeln ('            €         HotKeys            €');
         writeln ('            €        -+-+-+-+-           €');
         writeln ('            €                            €');
         writeln ('            €   Alt-X -------> Quit      €');
         writeln ('            €   Alt-H -------> Hang-Up   €');
         writeln ('            €   F1    -------> About     €');
         writeln ('            €   F2    -------> HotKeys   €');
         writeln ('            €                            €');
         writeln ('            €                            €');
         writeln ('            €‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹‹€');

          end;
        end
      else
        { Non ä un carattere di controllo allora lo mandiamo alla seriale }
        CommWrite (Ch);
    end;
  until Uscita;
  { Rimettiamo tutto a posto }
  CommClose;
  clrscr;
  for i:=1 to 1836 do
  begin
  write (imagedata[i]);
    end;readln;
end.

