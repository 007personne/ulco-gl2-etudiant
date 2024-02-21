import mypackage.myfibo as my
if __name__ == '__main__':

    print('TODO')
    
    for i in range(11):
        print(f"fibo_naive({i}) = {my.fibo_naive(i)}")  

    for i in range(11):
        print(f"fibo_iterative({i}) = {my.fibo_iterative(i)}")  
