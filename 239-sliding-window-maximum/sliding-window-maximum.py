class Solution:
    def maxSlidingWindow(self, nums: list[int], k: int) -> list[int]:
        q = deque()
        ans = []
        #First process the k length window
        for i in range(k):
            #Remove weak elements from queue
            while q and nums[q[-1]] < nums[i]: #Here we are using nums[q[-1]],
            #because we are storing indices in queue not values
              q.pop()
            q.append(i)
            #Queue front will have max element
        ans.append(nums[q[0]])
            #Sliding window
        for i in range(k, len(nums)):
            if q[0] == i-k:
                q.popleft()
            while q and nums[q[-1]] < nums[i]: #here we are using nums[q[-1]],
            #because we are storing indices in queue not values
                q.pop()
            q.append(i)
            ans.append(nums[q[0]])
        return ans
    