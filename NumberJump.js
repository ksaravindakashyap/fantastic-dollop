function kangaroo(x1, v1, x2, v2) {
    for(let i=0;i<10000;i++)
    {
        if((x1 + i*v1) === (x2 + i*v2))
        {
            return "YES"
        }
    }
    return "NO"
}