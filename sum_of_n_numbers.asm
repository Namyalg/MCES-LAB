N	EQU 6
	AREA RESET, CODE
	ENTRY

	MOV R0, #0
	
	MOV R1, #0
	
ADDNUM
	ADD R1, R1, R0
	ADD R0, #1
	CMP R0, #N
	BNE ADDNUM
	
STOP B STOP

	END
