.586 
.MODEL flat,C
.DATA
SUM DD 0.0
i_local DD 0
.CODE
extern fun_el:near ; ���������� ������� ������� fun_el
public SumR
SumR proc C
push ebp
mov ebp,esp
mov i_local,1
mov ecx, dword ptr [ebp+8]
@@for_i: ; ������ �����
push ecx
push dword ptr [ebp + 12]
push i_local
call fun_el
fld SUM
add esp,8
fadd
pop ecx
inc i_local
FABS;����� ������ �����
fstp SUM
loop @@for_i ; ����� �����
fld SUM
mov esp,ebp
pop ebp
ret
SumR endp
End