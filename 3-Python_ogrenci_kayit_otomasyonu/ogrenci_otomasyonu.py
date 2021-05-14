#coder by yazılımcının ar-ge ofisi

dosya1 = open("ogrencibilgileri.txt")

print(""" 
      Öğrenci Bilgi Otomasyonu Projesi
      V1.0
      
      ---------Yapabileceğiniz İşlemler----------
          1 - Öğrenci Ekle
      """)
      
secim = int(input("Yapmak İstediğiniz İşlemi Seçin : "))

while True:
    if secim == 1:
        dosya = open("ogrencibilgileri.txt","a")
        ad = input("Öğrencinin İsmi : ")
        soyad = input("Öğrencinin Soyismi : ")
        no = int(input("Öğrencinin Numarası : "))
        dosya.write("\n")
        dosya.write("----------------------")
        dosya.write("\n")
        dosya.write("Öğrenci İsmi : "+ad)
        dosya.write("\n")
        dosya.write("Öğrenci Soyismi : "+soyad)
        dosya.write("\n")
        dosya.write("Öğrenci Numarası :"+str(no))
        dosya.write("\n")
        dosya.write("----------------------")
        break
dosya.close()
    