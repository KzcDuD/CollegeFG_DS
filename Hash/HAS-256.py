import hashlib

# String to hash
string_to_hash = "Hello, world!"

# Convert string to bytes
bytes_to_hash = string_to_hash.encode('utf-8')

# Create SHA-256 hash object
sha256_hash = hashlib.sha256()

# Update hash object with bytes to hash
sha256_hash.update(bytes_to_hash)

# Get hexadecimal representation of hash value
hex_digest = sha256_hash.hexdigest()

print(hex_digest)
