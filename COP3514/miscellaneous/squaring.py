#D(x) = x^76357 mod 101671
# x = 16, 27, 31, 44, 56, 64. 72, 86

def D(x):
    return pow(x, 76357, 101671)
test_values = [16, 27, 31, 44, 56, 64, 72, 86]
for x in test_values:
    print(f"D({x}) = {D(x)}")

#E(x) = x^17373 mod 101671
def E(x):
    return pow(x, 17373, 101671)
#Check if E(D(x)) = x for all test values
for x in test_values:
    decrypted = E(D(x))
    print(f"E(D({x})) = {decrypted} (Expected: {x})")