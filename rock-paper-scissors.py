import random 

num = random.randint(0,2)
if num == 0:
    computer = "rock"
elif num == 1:
    computer = "paper"
elif num == 2:
    computer = "scissors"

print ("rock, paper, or scissors?")
player = input("enter your move.\n")

if computer == player:
    print ("tie")
elif computer == "rock" and player == "paper":
    print ("player wins.")
elif  computer == "rock" and player == "scissors":
    print ("computer wins")
elif computer == "paper" and player == "rock":
    print ("computer wins")
elif computer == "paper" and player == "scissors":
    print ("player wins")
elif computer == "scissors" and player == "rock":
    print ("player wins")
elif computer == "scissors" and player == "paper":
    print ("computer wins")
    
print ("computer picked " + computer)