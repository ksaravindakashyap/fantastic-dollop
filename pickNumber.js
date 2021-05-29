//Given an array of integers, find the longest subarray where the absolute difference 
//between any two elements is less than or equal to .
//Example
// a = [1,1,2,2,4,4,5,5,5]
//There are two subarrays meeting the criterion: [1,1,2,2] 
//and [4,4,5,5,5]. The maximum length subarray has  elements.





function pickingNumbers(a) {
    var b = []
    var b = new Array(a.length).fill(0)
    let max =0
    for(let i=0;i<a.length;i++)
    {
        let hold = a[i]
        b[hold]++
    }
        console.log(b)
    for(let i=0;i<b.length-1;i++)
    {
        if((b[i]+b[i+1]) > max)
        {
            max = b[i]+b[i+1]
        }
    }
    return max
}