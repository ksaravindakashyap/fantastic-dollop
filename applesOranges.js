/* PROBLEM STATEMENT

Sam's house has an apple tree and an orange tree that yield
 an abundance of fruit. Using the information given below,
  determine the number of apples and oranges that land on Sam's house.


->The red region denotes the house, where S is the start point, and t is the endpoint.
 The apple tree is to the left of the house, and the orange tree is to its right.
->Assume the trees are located on a single point, where the apple tree is at point a, 
and the orange tree is at point b.
->When a fruit falls from its tree, it lands d units of distance from its tree of origin along the -axis. 
*A negative value of d means the fruit fell d units to the tree's left, and a positive value of d means it falls d
 units to the tree's right. 
 
 
 Function Description

Complete the countApplesAndOranges function in the editor below. It should print the number of apples and oranges that land on Sam's house, each on a separate line.

countApplesAndOranges has the following parameter(s):

s: integer, starting point of Sam's house location.
t: integer, ending location of Sam's house location.
a: integer, location of the Apple tree.
b: integer, location of the Orange tree.
apples: integer array, distances at which each apple falls from the tree.
oranges: integer array, distances at which each orange falls from the tree.*/



function countApplesAndOranges(s, t, a, b, apples, oranges) {
    var count1 = 0;
    var count2 = 0;
    for(let i=0;i<apples.length;i++)
    {
        if((a+apples[i])>=s && (a+apples[i])<=t)
        {
            count1+=1;
        }
    }
    for(let j=0;j<oranges.length;j++)
    {
        if((b+oranges[j])<=t && (b+oranges[j])>=s)
        {
            count2+=1;
        }
    }
    console.log(count1)
    console.log(count2)
}