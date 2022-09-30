from random import randint

def main():

    print("\n************************************")
    print("Welcome to Petals Around The Rose\n")
    print("*** Game Rules*** \n")
    print("-------------------------------------------------------------")
    print(">> Each player rolls three dice")
    print(">> Their score is determined by the number of petals around the rose")
    print(">> Considering the rose being the center pip on the die,a five scores four points and three scores two points")
    print(">> If the player has rolled at least one rose (1,3,or 5),They can choose to reroll all dice to get a better score")
    print("-------------------------------------------------------------------------------------")

    players = player_initialization()
    

    final_results = rolling_the_dice(players)
    score_display = score_board(final_results)
    choose_winner(final_results)
    loop()

    
def player_initialization():
    
    while True:
        
        try:
            num_players = int(input("\nHow many players are there (1..4): "))
            if num_players >= 1 and num_players <=4:

                players_dict = {}
                
                for player in range(1 ,num_players + 1):
                    players_dict[player] = []
                return players_dict
                break
            else:
                print("Please enter an integer between 1 - 4")
        except ValueError:
            print("Please enter an integer between 1 - 4")



def rolling_the_dice(players):

    count = 0
    score_lst = []
    temp_score = 0
    second_attempt_score = 0
    results = {}
    second_roll = []
    
# Rolling the first set of 3 dice for every player
    for player in players:
        count += 1
        temp_list = []
        for roll in range(3):
            temp_list.append(randint(1, 6))
        players[count].append(temp_list)

    count = 0
#------------------------------------------------------

# Listing the score of every player on first atempt

    for player in players:
        count += 1
        for score in range(0, 3):
            score_lst.append(players[count][0][score])

#-------------------------------------------------------

# Getting each player score 

        for item in score_lst:
            if item == 3:
                temp_score += 2
            elif item == 5:
                temp_score += 4
            else:
                pass
#-------------------------------------------------------

# player rolling and their current score display

        print("\n[.][.][.] Rolling dice for player {} ..... {} {} {} .... score: {}\n".format(player,score_lst[0], score_lst[1], score_lst[2],temp_score))

#----------------------------------------------------------

# checking if the player has rolled at least one rose (1,3,5) and asking if they need the 2nd attempt        

        if 1 in score_lst  or temp_score > 1:

            choice = input("*** player {} you have {} as your score do you wish to roll again for a better score? (y/n):  ".format(player,temp_score)).lower()

#-------------------------------------------------------- 

# Second attempt rolling and score calculation

            if choice == 'y':

                for roll in range(3):
                    second_roll.append(randint(1, 6))

                players[count].append(second_roll)

                for item in second_roll:
                    if item == 3:
                        second_attempt_score += 2
                    elif item == 5:
                        second_attempt_score += 4
                    else:
                        pass
                print("\n[.][.][.] Rolling Second attempt for player {} ..... {} {} {}\n".format(player,second_roll[0], second_roll[1], second_roll[2]))
                print("*** Second attempt score: ", second_attempt_score)

            else:
                pass
            
#----------------------------------------------------------------

# adding the final results to the results dictionary

        if second_roll:
            results[player] = second_attempt_score
            second_roll = []
            second_attempt_score = 0
            
        else:
            results[player] = temp_score

#----------------------------------------------------------------

        temp_score = 0       
        score_lst = []

    count = 0
        
# sending back results

    return results
#--------------------------------------------


# Score board display function

def score_board(result_sheet):
    print("\n\n--------- Score Board ----------\n")
    
    for key, value in result_sheet.items():

        print("Player {} score: {}".format(key, value))

    print("----------------------------------")

#---------------------------------------------------
        

def choose_winner(results):

# Find item with Max Value in results dictionary

    itemMaxValue = max(results.items(), key=lambda x: x[1])

    
    listOfKeys = list()

# Iterate over all the items in dictionary to find keys with max value to see if there are more than one winner
    
    for key, value in results.items():
        if value == itemMaxValue[1]:
            listOfKeys.append(key)

# Display the winner(s)

    if itemMaxValue[1] == 0:
        print("\nNone of the players have scored marks!")
        
    elif len(listOfKeys) > 1:
        print("\nThere is more than one winner with the highest score of: ", itemMaxValue[1])
        print ("\n*** The winners are ***")
        for player in listOfKeys:
            
            print("player: {}".format(player))

    else:
        print ("\nThe winner is player: %s with the highest score of %s " %(itemMaxValue[0], itemMaxValue[1]))


# game loop function

def loop():
    
    while True:

        choice = input("\n>>> Do you wish to play again? (y/n): ").lower()
        if choice == "y":
                main()

        elif choice == "n":
            print("\n *** Thank you for playing! ***")
            break

        else:
            print("invalid choice!")
            
            
#----------------------------------------------------------    

main()
