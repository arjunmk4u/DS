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

Operation on two dimention array

Searching:
{
    Begin searchArray(a,item)
    for i=0 to rowsize
        for j=0 to coloumsize
            ifa[i][j]=item
                print(i,j)
                return
            end if
        end for
        Print value not found
    end for
    end searchArray
}

Insertion:
a1 = 2D array, a2 = 1D array
a1 size= m*n
a2 size= m+n
{
    Conversion of 2D to 1D:
    {
        set index=0
        for i=0 to rowsize
            for j=0 to coloumsize
                a2[index++]=a1[i][j]
            end for
        end for
    }

    Perform the operation insertion in 1D array

    Conversion of 1D to 2D:
    {
        set index=0
        for i=0 to rowsize+1
            for j=0 to coloumnsize
                a1[i][j]=a2[index++]
            end for
        end for
    }
}

Deletion:
{
    Conversion of 2D to 1D:
    {
        set index=0
        for i=0 to rowsize
            for j=0 to coloumsize
                a2[index++]=a1[i][j]
            end for
        end for
    }

    Perform the operation deletion in 1D array

    Conversion of 1D to 2D:
    {
        set index=0
        for i=0 to rowsize
            for j=0 to coloumnsize
                a1[i][j]=a2[index++]
            end for
        end for
    }
}

Sorting:
{
    Conversion of 2D to 1D
    {
        set index=0
        for i=0 to rowsize
            for j=0 to coloumsize
                a2[index++]=a1[i][j]
            end for
        end for
    }

    Perform the operation sorting on 1D array

    Convsersion of 1D to 2D:
    {
        set index=0
        for i=0 to rown=size
            for j=0 to coloumnsize
                a1[i][j]=a2[index++]
            end for
        end for
    }
   
}

Merging:
consider two 2D arrays a&b. We have to merge these array into a 2D array called c
{
    Begin mergeArray(a,b,c)
    for i=0 to rowsize of a
        for j=0 to coloumnsize of a
            c[i][j]=a[i][j]
        end for
    end for
    for k=0, i=rowsize of sum of rowsize to a,b
        for j=0 to coloumnsize of b
            c[i][j]=b[k][j]
        end for
    end for
    end mergeArray
}