import math

turn = 5
distance_km = 14.0
around = distance_km / turn
radius = around / (2 * math.pi)

print("diketahui :")
print("Pak Dengklek mengelilingi taman = %d putaran" % turn)
print("Jarak tempuh Pak Dengklek = %.0f Kilometer" % distance_km)
print("\nJawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer" % radius)