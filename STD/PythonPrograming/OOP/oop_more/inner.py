def d_checker ():
    print ("This is a test check")
    def inner_function():
        print ("This is an inner function")
        return 1000

    return inner_function()

def do_something(work):
    print ("This is a test work")
    print (work)
    print ('This is a test work end')

# do_something("2")

def sleeping(do_something):
    print ("working with python")
    return "work"

sleeping(do_something("2"))