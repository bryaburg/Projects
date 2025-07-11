print("Weclome")

user_message = input("Please enter a message ")
user_letter = input("Please enter a letter ")

count = user_message.count(user_letter)

len_message = len(user_message)
perc = count/len_message * 100

print("The count of the letter", user_letter, " is ", count)
print("The percentage of the letter is", perc)
