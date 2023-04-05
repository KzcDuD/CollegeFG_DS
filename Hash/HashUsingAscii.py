def custom_hash(string):
    hash_value = 0
    prime = 31
    i=1
    for char in string:
        hash_value = hash_value * prime + ord(char)
        print(f'hash_value{i}:{hash_value}')
        i+=1
    return hash_value

s='Hello word' 

custom_hash(s)