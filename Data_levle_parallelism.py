
import threading
x=0;
def Printnum(l,lock):
    global x
    i=0
    s=0
    while i!=100:
        i=i+1
        s=s+i
    lock.acquire(x)
    x=x+s
    print "Total,sum,thread: ",x,s,l
    lock.release()
def main():
    i=0
    t=[]
    lock=threading.Lock()
    while i<=10:
        t.append(threading.Thread(target=Printnum,args=(i,lock,)))
        t[i].start()
        i=i+1
    i=0
    while i<=10:
        t[i].join()
        i=i+1
        
if __name__=='__main__':
    main()
    print x
