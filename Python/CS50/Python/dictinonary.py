from xmlrpc.client import FastUnmarshaller

words = set()

def check(word):
    if word.lower() in words:
        return True
    else:
        return False
    
def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        word = line.strip()
        words.add(word)
    file.close
    return True

def size():
    return len(words)

def unload():
    return True

