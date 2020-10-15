# Uses python3
import sys
from collections import namedtuple
def optimal_points(n,segments):
  points = []
  i = 0
  flag = [True] * n
  while i < n-1:
    if flag[i]:
      points.append(segments[i][1])
      j = i+1
      while j < n:
       if flag[j]:
        if segments[i][1] in range(segments[j][0], segments[j][1] + 1):
          flag[j] = False
       j += 1
    flag[i] = False
    i +=1
  if flag[n-1]:
   points.append(segments[n-1][0])
  return points
    
    
if __name__ == '__main__':
    n=int(input())
    segments=[]
    for i in range(n):
      segments.append(list(map(int,input().split())))
    segments.sort(key=lambda x:x[1])
    #print(*segments)
    points = optimal_points(n,segments)
    print(len(points))
    print(*points)
