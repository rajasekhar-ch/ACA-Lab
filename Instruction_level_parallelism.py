import threading

def Printnum(l):
    i=0
    while i!=100:
        print("Thread ",l," running ",i," print.",end="\t")
        i=i+1
def main():
    i=0
    t=[]
    #t1=threading.Thread(target=Printnum,args=(i,))
    while i<=10:
        t.append(threading.Thread(target=Printnum,args=(i,)))
        t[i].start()
        i=i+1
    i=0
    while i<=10:
        t[i].join()
        i=i+1
        
if __name__=='__main__':
    main()
