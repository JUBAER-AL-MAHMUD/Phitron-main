def timer (fun):
    def inner():
        print('time start')
        fun()
        print ('time end')
        return inner

@timer
def get_factorial():
    print ("This is a test factorial")