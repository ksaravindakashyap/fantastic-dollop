
#To check whether the given string of parenthesis is valid or not ,, ex: (()) is correct , )( wrong ,, ex: hi())( wrong.



def valid_parentheses(string):
    print(string)
    countO = countC = b = 0
    for i in string:
        if (i != ")" and i != "("):
            continue

        elif (i == "("):
            countO += 1
            continue
        elif (i == ")" and countO > countC):
            countC += 1
            continue
        else:
            print("false")
            return False

    if (countO == countC):
        print("true")
        return True
    else:
        print("false")
        return False

valid_parentheses("(())")