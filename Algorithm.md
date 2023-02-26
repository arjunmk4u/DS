Operation on one dimension array

Traversal:
{
    Step1   Start
    Step2   set i=0
    Step3   Repeat step 4 to 5 while(i<n)
    Step4   Print a[i]
    Step5   i++
    Step6   Stop
}


Linear Searching:
{
    step1   Start
    Step2   i=0
    Step3   Reapeat step 3 to 5 while(i<n)
    Step4   if(a[i]=e)
            then print i+1 goto step6
    Step5   i++
    Step6   Stop
}


Binary searching:
{
    Step1   set first=lowerbound, last=upperbound, pos=-1
    Step2   Repeat step3 to 4 while(first<=last)
    Step3   set mid=(first+last)/2
    Step4   if a[mid]==item
            set pos=mid
            print pos, goto step6
            else if a[mid]>item
            set last=mid-1
            else
            set first=mid+1
    Step5   if pos==-1 print value not found
    Step6   Stop
}

Insertion:
{
    Step1   i=n-1,loc=loc-1
    Step2   while(i>=loc), repeat step3 and 4
    Step3   a[i]->a[i+1]
    Step4   i=i-1
    Step5   a[loc]=item
    Step6   n=n+1
}

Deletion:
{
    Step1   i=loc-1
    Step2   item=a[i]
    Step3   while i<n-1, repeat step4 and 5
    Step4   a[i+1]->a[i]
    Step5   i=i+1
    Step6   n=n-1
}

Sorting:
{
    begin bubblesort(a)
    for all array elements
        if(a[i]>a[i+1])
            swap(a[i],a[i+1])
        end if
    end for
    return a
}

Merging:
{
    Step1   i=0
    Step2   while(i<n), repeat step 3 and 4
    Step3   c[i]=a[i]
    Step4   i=i+1
    Step5   j=0,i=n
    Step6   while(i<m+n), repeat step 7 and 8
    Step7   c[i]=b[j]
    Step8   i=i+1, j=j+1
}


