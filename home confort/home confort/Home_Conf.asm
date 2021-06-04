
_mask:

;Home_Conf.c,16 :: 		unsigned short mask(unsigned short num) {
;Home_Conf.c,17 :: 		switch (num) {
	GOTO       L_mask0
;Home_Conf.c,18 :: 		case 0 : return 0xC0;
L_mask2:
	MOVLW      192
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,19 :: 		case 1 : return 0xF9;
L_mask3:
	MOVLW      249
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,20 :: 		case 2 : return 0xA4;
L_mask4:
	MOVLW      164
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,21 :: 		case 3 : return 0xB0;
L_mask5:
	MOVLW      176
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,22 :: 		case 4 : return 0x99;
L_mask6:
	MOVLW      153
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,23 :: 		case 5 : return 0x92;
L_mask7:
	MOVLW      146
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,24 :: 		case 6 : return 0x82;
L_mask8:
	MOVLW      130
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,25 :: 		case 7 : return 0xF8;
L_mask9:
	MOVLW      248
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,26 :: 		case 8 : return 0x80;
L_mask10:
	MOVLW      128
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,27 :: 		case 9 : return 0x90;
L_mask11:
	MOVLW      144
	MOVWF      R0+0
	GOTO       L_end_mask
;Home_Conf.c,28 :: 		} //case end
L_mask0:
	MOVF       FARG_mask_num+0, 0
	XORLW      0
	BTFSC      STATUS+0, 2
	GOTO       L_mask2
	MOVF       FARG_mask_num+0, 0
	XORLW      1
	BTFSC      STATUS+0, 2
	GOTO       L_mask3
	MOVF       FARG_mask_num+0, 0
	XORLW      2
	BTFSC      STATUS+0, 2
	GOTO       L_mask4
	MOVF       FARG_mask_num+0, 0
	XORLW      3
	BTFSC      STATUS+0, 2
	GOTO       L_mask5
	MOVF       FARG_mask_num+0, 0
	XORLW      4
	BTFSC      STATUS+0, 2
	GOTO       L_mask6
	MOVF       FARG_mask_num+0, 0
	XORLW      5
	BTFSC      STATUS+0, 2
	GOTO       L_mask7
	MOVF       FARG_mask_num+0, 0
	XORLW      6
	BTFSC      STATUS+0, 2
	GOTO       L_mask8
	MOVF       FARG_mask_num+0, 0
	XORLW      7
	BTFSC      STATUS+0, 2
	GOTO       L_mask9
	MOVF       FARG_mask_num+0, 0
	XORLW      8
	BTFSC      STATUS+0, 2
	GOTO       L_mask10
	MOVF       FARG_mask_num+0, 0
	XORLW      9
	BTFSC      STATUS+0, 2
	GOTO       L_mask11
;Home_Conf.c,29 :: 		}
L_end_mask:
	RETURN
; end of _mask

_delay_debounce:

;Home_Conf.c,31 :: 		void delay_debounce(){
;Home_Conf.c,32 :: 		Delay_ms(300);
	MOVLW      2
	MOVWF      R11+0
	MOVLW      134
	MOVWF      R12+0
	MOVLW      153
	MOVWF      R13+0
L_delay_debounce12:
	DECFSZ     R13+0, 1
	GOTO       L_delay_debounce12
	DECFSZ     R12+0, 1
	GOTO       L_delay_debounce12
	DECFSZ     R11+0, 1
	GOTO       L_delay_debounce12
;Home_Conf.c,33 :: 		}
L_end_delay_debounce:
	RETURN
; end of _delay_debounce

_delay_refresh:

;Home_Conf.c,35 :: 		void delay_refresh(){
;Home_Conf.c,36 :: 		Delay_ms(5);
	MOVLW      7
	MOVWF      R12+0
	MOVLW      125
	MOVWF      R13+0
L_delay_refresh13:
	DECFSZ     R13+0, 1
	GOTO       L_delay_refresh13
	DECFSZ     R12+0, 1
	GOTO       L_delay_refresh13
;Home_Conf.c,37 :: 		}
L_end_delay_refresh:
	RETURN
; end of _delay_refresh

_countpulse:

;Home_Conf.c,39 :: 		void countpulse(){
;Home_Conf.c,40 :: 		IR_Tx = 1;
	BSF        RA3_bit+0, 3
;Home_Conf.c,41 :: 		delay_debounce();
	CALL       _delay_debounce+0
;Home_Conf.c,42 :: 		delay_debounce();
	CALL       _delay_debounce+0
;Home_Conf.c,43 :: 		TMR0=0;
	CLRF       TMR0+0
;Home_Conf.c,44 :: 		Delay_ms(15000);  // Delay 1 Sec
	MOVLW      77
	MOVWF      R11+0
	MOVLW      25
	MOVWF      R12+0
	MOVLW      79
	MOVWF      R13+0
L_countpulse14:
	DECFSZ     R13+0, 1
	GOTO       L_countpulse14
	DECFSZ     R12+0, 1
	GOTO       L_countpulse14
	DECFSZ     R11+0, 1
	GOTO       L_countpulse14
	NOP
	NOP
;Home_Conf.c,45 :: 		IR_Tx = 0;
	BCF        RA3_bit+0, 3
;Home_Conf.c,46 :: 		pulsecount = TMR0;
	MOVF       TMR0+0, 0
	MOVWF      _pulsecount+0
;Home_Conf.c,47 :: 		pulserate = pulsecount*4;
	MOVF       _pulsecount+0, 0
	MOVWF      _pulserate+0
	RLF        _pulserate+0, 1
	BCF        _pulserate+0, 0
	RLF        _pulserate+0, 1
	BCF        _pulserate+0, 0
;Home_Conf.c,48 :: 		}
L_end_countpulse:
	RETURN
; end of _countpulse

_display:

;Home_Conf.c,50 :: 		void display(){
;Home_Conf.c,51 :: 		DD1 = pulserate%10;
	MOVLW      10
	MOVWF      R4+0
	MOVF       _pulserate+0, 0
	MOVWF      R0+0
	CALL       _Div_8x8_U+0
	MOVF       R8+0, 0
	MOVWF      R0+0
	MOVF       R0+0, 0
	MOVWF      _DD1+0
;Home_Conf.c,52 :: 		DD1 = mask(DD1);
	MOVF       R0+0, 0
	MOVWF      FARG_mask_num+0
	CALL       _mask+0
	MOVF       R0+0, 0
	MOVWF      _DD1+0
;Home_Conf.c,53 :: 		DD2 = (pulserate/10)%10;
	MOVLW      10
	MOVWF      R4+0
	MOVF       _pulserate+0, 0
	MOVWF      R0+0
	CALL       _Div_8x8_U+0
	MOVLW      10
	MOVWF      R4+0
	CALL       _Div_8x8_U+0
	MOVF       R8+0, 0
	MOVWF      R0+0
	MOVF       R0+0, 0
	MOVWF      _DD2+0
;Home_Conf.c,54 :: 		DD2 = mask(DD2);
	MOVF       R0+0, 0
	MOVWF      FARG_mask_num+0
	CALL       _mask+0
	MOVF       R0+0, 0
	MOVWF      _DD2+0
;Home_Conf.c,55 :: 		for (i = 0; i<=180*j; i++) {
	CLRF       _i+0
	CLRF       _i+1
L_display15:
	MOVLW      180
	MOVWF      R0+0
	MOVF       _j+0, 0
	MOVWF      R4+0
	CALL       _Mul_8x8_U+0
	MOVF       _i+1, 0
	SUBWF      R0+1, 0
	BTFSS      STATUS+0, 2
	GOTO       L__display35
	MOVF       _i+0, 0
	SUBWF      R0+0, 0
L__display35:
	BTFSS      STATUS+0, 0
	GOTO       L_display16
;Home_Conf.c,56 :: 		DD1_Set = 0;
	BCF        RA1_bit+0, 1
;Home_Conf.c,57 :: 		DD2_Set = 1;
	BSF        RA0_bit+0, 0
;Home_Conf.c,58 :: 		PORTB = DD1;
	MOVF       _DD1+0, 0
	MOVWF      PORTB+0
;Home_Conf.c,59 :: 		delay_refresh();
	CALL       _delay_refresh+0
;Home_Conf.c,60 :: 		DD1_Set = 1;
	BSF        RA1_bit+0, 1
;Home_Conf.c,61 :: 		DD2_Set = 0;
	BCF        RA0_bit+0, 0
;Home_Conf.c,62 :: 		PORTB = DD2;
	MOVF       _DD2+0, 0
	MOVWF      PORTB+0
;Home_Conf.c,63 :: 		delay_refresh();
	CALL       _delay_refresh+0
;Home_Conf.c,55 :: 		for (i = 0; i<=180*j; i++) {
	INCF       _i+0, 1
	BTFSC      STATUS+0, 2
	INCF       _i+1, 1
;Home_Conf.c,64 :: 		}
	GOTO       L_display15
L_display16:
;Home_Conf.c,65 :: 		DD2_Set = 1;
	BSF        RA0_bit+0, 0
;Home_Conf.c,66 :: 		}
L_end_display:
	RETURN
; end of _display

_ctrl_led:

;Home_Conf.c,67 :: 		void ctrl_led() {
;Home_Conf.c,68 :: 		PWM1_Init(5000); // PWM module initialization (5KHz)
	BCF        T2CON+0, 0
	BCF        T2CON+0, 1
	MOVLW      199
	MOVWF      PR2+0
	CALL       _PWM1_Init+0
;Home_Conf.c,69 :: 		new_DC = 0; // Initial value of variable Duty Cycle
	CLRF       _new_DC+0
;Home_Conf.c,70 :: 		current_DC = 0;
	CLRF       _current_DC+0
;Home_Conf.c,71 :: 		PWM1_Start(); // Start PWM1 module with Zero DC
	CALL       _PWM1_Start+0
;Home_Conf.c,72 :: 		PWM1_Set_Duty(current_DC);
	MOVF       _current_DC+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;Home_Conf.c,73 :: 		while (1) {
L_ctrl_led18:
;Home_Conf.c,74 :: 		if (pulserate >=40 ) {
	MOVLW      40
	SUBWF      _pulserate+0, 0
	BTFSS      STATUS+0, 0
	GOTO       L_ctrl_led20
;Home_Conf.c,75 :: 		if (new_DC < 250)         // Don't go above 250
	MOVLW      250
	SUBWF      _new_DC+0, 0
	BTFSC      STATUS+0, 0
	GOTO       L_ctrl_led21
;Home_Conf.c,76 :: 		new_DC = new_DC + 25 ; // increment Duty Cycle by 25
	MOVLW      25
	ADDWF      _new_DC+0, 1
L_ctrl_led21:
;Home_Conf.c,77 :: 		}
	GOTO       L_ctrl_led22
L_ctrl_led20:
;Home_Conf.c,79 :: 		if (new_DC !=0)                 // Don't go below 0
	MOVF       _new_DC+0, 0
	XORLW      0
	BTFSC      STATUS+0, 2
	GOTO       L_ctrl_led23
;Home_Conf.c,80 :: 		new_DC= new_DC - 25 ; // decrement Duty Cycle by 25
	MOVLW      25
	SUBWF      _new_DC+0, 1
L_ctrl_led23:
;Home_Conf.c,81 :: 		}
L_ctrl_led22:
;Home_Conf.c,83 :: 		if (current_DC != new_DC) {
	MOVF       _current_DC+0, 0
	XORWF      _new_DC+0, 0
	BTFSC      STATUS+0, 2
	GOTO       L_ctrl_led24
;Home_Conf.c,84 :: 		current_DC = new_DC ;
	MOVF       _new_DC+0, 0
	MOVWF      _current_DC+0
;Home_Conf.c,85 :: 		PWM1_Set_Duty(current_DC); // Change the current DC to new value
	MOVF       _new_DC+0, 0
	MOVWF      FARG_PWM1_Set_Duty_new_duty+0
	CALL       _PWM1_Set_Duty+0
;Home_Conf.c,86 :: 		}
L_ctrl_led24:
;Home_Conf.c,87 :: 		Delay_ms(150);
	MOVLW      195
	MOVWF      R12+0
	MOVLW      205
	MOVWF      R13+0
L_ctrl_led25:
	DECFSZ     R13+0, 1
	GOTO       L_ctrl_led25
	DECFSZ     R12+0, 1
	GOTO       L_ctrl_led25
;Home_Conf.c,89 :: 		}
	GOTO       L_ctrl_led18
;Home_Conf.c,90 :: 		}
L_end_ctrl_led:
	RETURN
; end of _ctrl_led

_main:

;Home_Conf.c,91 :: 		void main() {
;Home_Conf.c,92 :: 		CMCON = 0x07;    // Disable Comparators
	MOVLW      7
	MOVWF      CMCON+0
;Home_Conf.c,93 :: 		TRISA = 0b00110000; // RA4/T0CKI input, RA5 is I/P only
	MOVLW      48
	MOVWF      TRISA+0
;Home_Conf.c,94 :: 		TRISB = 0b10000000; // RB7 input, rest output
	MOVLW      128
	MOVWF      TRISB+0
;Home_Conf.c,95 :: 		OPTION_REG = 0b00101000; // Prescaler (1:1), TOCS =1 for counter mode
	MOVLW      40
	MOVWF      OPTION_REG+0
;Home_Conf.c,96 :: 		pulserate = 0;
	CLRF       _pulserate+0
;Home_Conf.c,97 :: 		j = 1;
	MOVLW      1
	MOVWF      _j+0
;Home_Conf.c,98 :: 		display();
	CALL       _display+0
;Home_Conf.c,99 :: 		do {
L_main26:
;Home_Conf.c,100 :: 		if(!start){
	BTFSC      RB7_bit+0, 7
	GOTO       L_main29
;Home_Conf.c,101 :: 		delay_debounce();
	CALL       _delay_debounce+0
;Home_Conf.c,102 :: 		countpulse();
	CALL       _countpulse+0
;Home_Conf.c,103 :: 		j= 3;
	MOVLW      3
	MOVWF      _j+0
;Home_Conf.c,104 :: 		display();
	CALL       _display+0
;Home_Conf.c,105 :: 		ctrl_led();
	CALL       _ctrl_led+0
;Home_Conf.c,106 :: 		}
L_main29:
;Home_Conf.c,107 :: 		} while(1);  // Infinite loop
	GOTO       L_main26
;Home_Conf.c,108 :: 		}
L_end_main:
	GOTO       $+0
; end of _main
