FIRSTNAME:	Shuo
LASTNAME:	Yang
EMAILADDRESS:	shuoyang@email.arizona.edu
UNDERGRADUATE,MASTERS,PHD (U/M/P):	P
Program:	My program simulates a very simple authentication system
		where user should provide a passphrase as a command line
		argument in order to get authenticated and access the
		restricted information. Internally the passphrase
		entered by user will be encrypted by a Caesar Cipher
		and then compared with the hardcoded correct passphrase.
ASSET:		The Caesar Cipher and hardcoded passphrase.
SCRIPT1:	I applied some very basic transformations (1 level
		virtualization, string literal encoding). I think my
		asset was protected not so well because by looking at
		the generated C code, the structure of the code is
		still relativel easy for attackers to decode. I didn't
		see any slowdown after transformation. The size of of the 
		generated code is 64KB while the orignial size is only 4KB.
SCRIPT2:	I applied 2-level virtualization combined with opaque
		predicates, init entropy, mixed stack & register
		operations and super operators. I think this time my
		assets are well protected because two-level
		virtualization gives much confidence that attackers
		won't be able to figure out what my program does
		unless they are super-intelligent. I did see 0.02
		seconds slowdown. The size of of the generated code is 2.3MB.
SCRIPT3:	I applied 2-level virtualization + 2 level flattening
		+ splitting + arithmetic transformation + string
		literal encoding + other techniques I used in
		SCRIPT2. I think this time my assets are very well
		protected because the complexity level of the
		obfuscated code makes it impossible for attackers to
		deobfuscated. I saw 0.05 seconds slowdown. The size of of the 
		generated code is 688KB.
COMMENTS:	I enjoyed playing around with different Tigress options
		and see how generated code are different and the level
		of slowdown! I was amazed by how Tigress options can
		be combined in arbitrary ways!
