rika = [65,80,67,35,58,60,72, 75, 68, 92, 36, 50, 2, 58.5, 46, 42, 78, 62, 84, 70]
eigo = [44, 87, 100, 63, 52, 60, 58, 73, 55, 86, 29, 56, 89, 23, 65, 84, 64, 27, 86, 84]
x=rika.count
y=eigo.count
rikamean=rika.sum/x
eigomean=eigo.sum/y
rikap= rika.inject(0){|sum, i| sum + (i - rikamean) ** 2 }
eigop= eigo.inject(0){|sum, i| sum + (i - rikamean) ** 2 }
rikas = rikap/x
eigos=eigop/y
rika2=[]
eigo2=[]

20.times{|i|
 rika2[i]=50+(rika[i]-rikamean)/2
 eigo2[i]=50+(eigo[i]-eigomean)/2
}

p rika.sum
p eigo.sum

p "---------------"

p rikamean
p eigomean

p "---------------"

p Math.sqrt(rikas)
p Math.sqrt(eigos)

p "---------------"

20.times{|i|
p rika2[i]
}
20.times{|i|
p eigo2[i]
}

p "--------------"

p rika.sort {|a, b| b <=> a }
p eigo.sort {|a, b| b <=> a }

