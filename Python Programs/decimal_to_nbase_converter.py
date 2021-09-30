def decimal_nbase_conv(number_input, n_base):

    '''
    KeyWord:
    number_input : Giving a certain decimal number to be convert
    n_base : N base number you want to convert
    '''
    result = []
    while True:
        divide = number_input//n_base
        mod = number_input % n_base
        number_input = divide
        result.append(mod)
        if number_input == 0:
            result = result[::-1]
            result = [str(i) for i in result]
            result = ''.join(result)
            break

    return result

