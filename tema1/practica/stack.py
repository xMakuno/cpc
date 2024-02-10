def parseOperation(thing, a, b):
    if( thing == "+"):
        return a + b
    if( thing == "-"):
        return a - b
    if( thing == "*"):
        return a * b


if __name__ == "__main__":
    operators = [ "+", "-", "*"]
    array = [ a if a in operators else int(a) for a in input().split(" ")]
    # print(array)
    stack = []
    for element in array:
        if(type(element) is int):
            stack.append(element)
        else:
            result = parseOperation(element, stack.pop(-2), stack.pop(-1))
            # print(result)
            stack.append(result)
            
            
    print(stack[0])