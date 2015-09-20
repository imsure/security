FIRSTNAME:	Shuo
LASTNAME:	Yang
EMAILADDRESS:	shuoyang@email.arizona.edu
UNDERGRADUATE,MASTERS,PHD (U/M/P):	P
PROBLEM (1/2):	1
TOOLS:		objdump, strings, gdb, ltrace, vbindiff
TECHNIQUES:	static analysis: disassemble, look at the assembly code;
		       		 trace calls to library functions;
		       		 find out printable strings in the executable;
		dynamic analysis (with gdb): set break points, step through code;
				  watch values stored at memory locations or registers; 
				  modify binary file
		steps I made for solving the problem: 
		      1. find out that the reason program breaks is due to a write made to NULL address;
		      2. set a break point at the call to gettimeofday, then step through instrucionts to see what happens;
		      3. find out that stepping through the code is impossible to find the problem, so give it up;
		      4. instead, I trace the time value filled by gettimeofday in its first argument, then I was able
		      	 trace down to an cmp instruction at 0x400b97, find out that it is comparing the value output
			 by gettimeofday and another value which should be the expiration time. And the instruction 
			 following the cmp instruction is a seta instruction.
		      5. I change the opcode for seta into opcode for setbe to reverse the behavior of the expired-time check.
TIME:		about 8 hours
DIFFICULTY:	moderate, not too easy, not too hard
CHALLENGES:	locate where expiration time check happens and trace the value output by gettimeofday
COMMENTS:	I did enjoy this assignment! Though it requires super patience and perseverance.
