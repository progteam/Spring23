class Solution:
    def findDelayedArrivalTime(self, arrivalTime: int, delayedTime: int) -> int:
        res = arrivalTime + delayedTime
        if arrivalTime + delayedTime >= 24:
            art = (arrivalTime + delayedTime)-24
        else:
            art =  arrivalTime + delayedTime   

        return art
