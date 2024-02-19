n, q = input().split(" ")
q = int(q)
""" print(n)
print(q) """
tasks = [] # tasks queue
time = 0 # Computer time

# Fill the queue
for i in range(int(n)):
    tasks.append([a for a in input().split(" ")])
# print(tasks)
# Process the queue
while(len(tasks) > 0):
    name, duration = tasks[0]
    duration = int(duration)
    threshold = duration - q
    # print(threshold)
    if(threshold > 0):
        time += q
        tasks.append([tasks.pop(0)[0], threshold]) # Return to queue by appending the popped task
    else:
        time += duration
        print(f'{name} {time}')
        tasks.pop(0)