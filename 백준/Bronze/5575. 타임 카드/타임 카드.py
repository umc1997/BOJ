import math
def time(IH,IM,IS,OH,OM,OS):
    timeBefore = (IH *60 + IM) * 60 + IS
    timeAfter = (OH*60+OM)*60+OS
    times = timeAfter - timeBefore
    seconds = times % 60
    times //=60
    minutes = times % 60
    times //=60
    hours = times % 24
    return hours, minutes, seconds

for i in range(3):
    a,b,c,d,e,f = map(int, input().split())
    h,m,s = time(a,b,c,d,e,f)
    print(h,m,s)