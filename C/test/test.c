192.168.55.78/28
masque 255.255.255.240
11000000.10101000.00110111.01001110
11111111.11111111.11111111.11110000

11000000.10101000.00110111.01000000
192.168.55.64

15 adresses dont 2

/28
11111111.11111111.11111111.11110000

252 = /30 = 2 bits = 4 - 2hotes max
248 = /29 = 3 bits = 8 - 2hotes max
192 = /26 = 6 bits = 64 - 2 hotes max

172.17.0.0/23 = 32-23=9bits = 512 hotes max. 510 utilisables
masque 11111111.11111111.11111110.00000000 255.255.254.0
2+256 = 258
  510 - 258 = 252 gaspilles

172.16.1.0/24 32-24=8bits=2^8=256hotes dont 254 hotes utilisables.
20 hotes 2^5 donc 5 bits necessaires = 32-5 = /27

10.41.10.17
masque 255.255.255.192
/26
32-26 = 6 bits = 2^6 = 64 hotes dont 62 utilisables.

  pour calculer l adresse de broadcast
00001010.00101001.00001010.00010001 adresse ip
  OU binaire
00000000.00000000.00000000.00111111 masque inverse ou wildcard
00001010.00101001.00001010.00111111
10.41.10.63


10.65.10.0 divise en 8 sous reseaux
on mets 3 hotes dans chaque s.r.
3 * 8 = 24 hotes + 2 = 26 necessaire minimum
2^5=32hotes possibles.
32-5bits = /27 

  1 2 3 4 5 6 7 8

  3 3 3 3 3 3 3 3


192.168.14.112/28 32-4 donc 4bits.2^4=16

11000000.10101000.00001110.01110000
11111111.11111111.11110000.00000000

ET binaire
11000000.10101000.00000000.00000000
255.255.240.0


255.255.240.0
11111111.11111111.11110000.00000000
/20
32-20=12bits
2^12=4096hotes