/*Given an array of integers and a positive integer k , determine the number of(i,j) pairs where i<j and
 ar[i] + ar[j] is divisible by k.
*/


function divisibleSumPairs(n, k, ar) {
    let count =0;
    for(let i=0;i<n;i++)
    {
        for(let j=0;j<n;j++)
        {
            if((i<j) && ((ar[i]+ar[j])%k===0))
            {
                count+=1;
            }
        }
    }
    return count
}