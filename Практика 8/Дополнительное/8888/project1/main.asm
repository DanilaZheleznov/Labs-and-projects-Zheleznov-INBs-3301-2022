$MOD51
org 0
jmp start
org 0003h
jmp proc_INT0
org 0013h
proc_INT0:
cpl P0.6;inversiy bita
Reti
start:
mov P0,#0
mov P1,#0
mov P2,#0
mov P3,#0
setb IE.7;ustanovka bita na prerivaniy
setb IE.1;ustanovka prerivaniy
mov TCON,#01h
;setb IP.0;ustanovka prioriteta
m1:
setb P0.0;podkluchenie dlya soc
clr P0.0;podkluchenie dlya soc
mov P2,P1
jmp m2
m2:
setb P0.1;podkluchenie dlya soc
clr P0.1;podkluchenie dlya soc
mov P3,P1
jmp m1
END