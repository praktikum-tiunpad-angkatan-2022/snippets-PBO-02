from Manusia import Manusia

# beda konstruktor, tetap jadi objek manusia
# sebetulnya python tidak support multiple constructor, tapi kita bisa pilih parameter mana yang mau dimasukkan
ujang = Manusia("Ujang", 20)
udin = Manusia(umur = 21, nama = "Udin");
print(ujang.toString())
print(udin.toString())

# set umur, tapi beda jenis parameter
print("---");
ujang.setUmur("30")
udin.setUmur(25)
print(ujang.toString())
print(udin.toString())