	;for ( i = 0, j = 99; i <100; ++i, --j )
    ;convsum += a[i] * b[j] ; 
	
	AREA RESET, CODE
	ENTRY
	
	
	MOV R0, #0
	MOV R1, #0
	MOV R2, #99
	
	
CSUM
	MUL R3, R1, R2
	ADD R0, R0, R3
	ADD R1, #1
	SUB R2, #1
	TEQ R1, #100
	BNE CSUM
	
STOP B STOP
	END
