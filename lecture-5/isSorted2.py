
def is_sorted2(l):
  for i in range(0, len(l) - 1):
    if l[i] > l[i + 1]:
      return False
  return True

LENGTH = 1000000
l = list(range(0, LENGTH))
print "Length is: %s" % LENGTH
print is_sorted2(l)
