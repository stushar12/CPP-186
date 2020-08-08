n=int(input("Enter number of stalls "))
y=int(input("Enter number of cows "))
arr=[]
print("Enter stall position :")
for i in range(0,n):
    z=int(input())
    arr.append(z)

arr.sort()

def check(mid):
    cows_placed=1
    last_pos=arr[0]
    for i  in range(1,n):
            if ((arr[i]-last_pos)>=mid):
                last_pos=arr[i]
                cows_placed=cows_placed+1
                if(cows_placed==y):
                    return True
    return False

def binarySearch(): 
    lower=0
    upper=arr[n-1]
    max=-1
    while lower <= upper: 
  
        mid = (upper+lower) // 2; 
        if (check(mid)): 
            if(mid>max):
                max=mid
            lower=mid+1
        else: 
            upper=mid-1
    return max

p=binarySearch()
print("largest minimum distance is ",p)
  