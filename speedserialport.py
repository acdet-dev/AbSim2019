import timeit
import serial
port = serial.Serial('COM5', 115200, timeout=5)


def foo():
    port.read(size=865)

    
def dotime():
    t = timeit.Timer("foo()", setup="")
    time = t.timeit(500)
    print("took %fs\n" % (time,))


import builtins
builtins.__dict__.update(locals())

dotime()
