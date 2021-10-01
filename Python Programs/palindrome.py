#Name: Sasin Nisar
#Github:SASIN83
#Age: 20
#Institution: Universal College of Engineering
#Language:Python3
#Code: Palindrome

def Palindrome(x):
  y=x.lower()[::-1]
  if x.lower()==y:
    return f'{x} is a Palindrom'
  else:
    return f'{x} is not a Palindrom'

if __name__=='__main__':
  x=input('Enter a value to check if its palindrome or not: ')
  print(Palindrome(x))
