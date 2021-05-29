/*Complete the breakingRecords function in the editor below.

breakingRecords has the following parameter(s):

int scores[n]: points scored per game

Returns

int[2]: An array with the numbers of times she broke her records. Index  is for breaking most points records, and index 0 is for breaking least points records.

*/




function breakingRecords(scores) {
    var res = [0,0]
    let temp1 = scores[0]
    let temp2 = scores[0]
    for(let i=1;i<scores.length;i++)
    {
        if(scores[i]>temp1)
        {
            temp1 = scores[i]
            res[0]+=1
        }
        if(scores[i]<temp2)
        {
            temp2 = scores[i]
            res[1]+=1
        }
    }
    return res
}