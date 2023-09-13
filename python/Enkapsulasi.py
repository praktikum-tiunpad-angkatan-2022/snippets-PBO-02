from Rekening import Rekening

bca = Rekening()

# bca.__money
# bca.__money = 1000000;
# baris-baris diatas akan error karena mengakses private property

# untuk mengakses money, diperlukan fungsi getter
bca.retrieve_money()
print(bca.retrieve_money())

# untuk mengubah isi money, diperlukan fungsi setter
bca.set_money(20000)
print(bca.retrieve_money())