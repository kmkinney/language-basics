mult_sev = [x for x in range(778) if x%7 == 0]

# Get last item
last_elem = mult_sev[-1]

# Check against all elements
all_pos = all(x > 0 for x in mult_sev)

# Delete a chunk of the list
nums = [x for x in range(1, 11)]
del nums[-7:] # delete the last 7 elements

print(nums)