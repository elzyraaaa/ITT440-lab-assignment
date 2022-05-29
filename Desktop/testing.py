import re

ayat = "Yeorubun, annyeong!"
ayat2 = "Lee ssi namjachingu Ahn Hyoseop ragu habnida"

check = re.search("^Lee.*habnida$", ayat2)

if check:
	print("Dae masimida! Lee ssi namjachingu Ahn Hyoseop ragu habnida.")
else:	
	print("NAURRRR")

